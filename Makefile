CC=arm-none-eabi-gcc
LD=arm-none-eabi-ld
AS=arm-none-eabi-as
OBJCPY=arm-none-eabi-objcopy
LINKFILE=link/flash.ld
BINNAME=build/program.bin
HEXNAME=build/program.hex
ELFNAME=build/program.elf
GDB_PORT=4242
ODIR=build
LFLAGS= -g -ggdb -lc -lm 
CFLAGS= $(LFLAGS) -D DEBUG -mthumb -ggdb -mcpu=cortex-m4 --specs=nosys.specs

# SOURCE PATHS (Make directive)
VPATH=src src/startup src/hal

INC_DIRS=src/ src/startup src/hal
INC_PARAMS=$(foreach d, $(INC_DIRS), -I$d)

# List all included files as .o here. No paths if the path is included in VPATH
OBJ = main.o  	\
	boot.o 	\
	initStack.o \
	system.o \

%.o: %.c
	$(CC) $(CFLAGS) $(INC_PARAMS) -c $<

%.o: %.s
	$(CC) $(CFLAGS) $(INC_PARAMS) -c $<

.PHONY: debug
debug: $(OBJ)
	mkdir -p $(ODIR)
	$(CC) $(CFLAGS) -T"$(LINKFILE)" $^ -o $(BINNAME)
	$(OBJCPY) -O ihex $(BINNAME) $(HEXNAME)
	$(OBJCPY) -O elf32-littlearm $(BINNAME) $(ELFNAME)
	mv -t $(ODIR) $(OBJ)

.PHONY: clean
clean:
	rm -rf $(ODIR)/*

.PHONY: load

load: debug
	st-flash --format=ihex write $(HEXNAME)