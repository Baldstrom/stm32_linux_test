.syntax unified
.cpu cortex-m4
.fpu softvfp
.thumb

.word  _estack

.global  Set_Stack_Pointer
.section  .text

.section  .text.Set_Stack_Pointer
.weak  Set_Stack_Pointer
.type  Set_Stack_Pointer, %function
Set_Stack_Pointer:  
  ldr   sp, =_estack     /* set stack pointer */
  bx    lr

Forever_Loop: // If boot_code exits, loop forever
  b   Forever_Loop
