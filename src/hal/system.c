#include "system.h"

/* REGISTER Definition Includes */
#include "regs/rcc_regs.h"
#include "regs/syscfg_regs.h"

void System_SetClocks(void)
{
    // Set external clock on
    RCC->CR.hseon = 1;
    // Wait for HSE RDY flag
    while(!RCC->CR.hserdy);
}