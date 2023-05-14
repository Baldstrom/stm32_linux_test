/**
 * @file boot.c
 * @author Jaden Bottemiller (jadenbottemiller@gmail.com)
 * @brief STM32 Boot Code
 * @version 0.1
 * @date 2022-10-18
 * @copyright Copyright (c) 2022
 * 
 */

// Include stdint for pointers
#include "stdint.h"

extern uint32_t _sidata;    // Data Index
extern uint32_t _sdata;     // Start of Data Segment
extern uint32_t _edata;     // End of Data Segment

extern uint32_t _sbss;      // Start of BSS Segment
extern uint32_t _ebss;      // End of BSS Segment

extern uint32_t _estack;

extern void Set_Stack_Pointer(void); // Pointer to Reset_Handler

extern void __libc_init_array(void);

// Main program entry point
extern void main(void);

// Entry Point
void Reset_Entry_Point()
{
    // Set Stack Pointer
    Set_Stack_Pointer();

    // Initialize data segment
    uint32_t *dataInit = &_sidata;
    uint32_t *data = &_sdata;
    while(data < &_edata) { *data++ = *dataInit++; }

    // Initialize bss segment 
    // (not sure if this is required, just sets 0s)
    uint32_t *bss = &_sbss;
    while(bss < &_ebss) { *bss++ = 0; }

    // Initialize static C++ constructors.
    __libc_init_array();

    // Call Main
    main();

    // If main returns, then reset.

    // Stack pointer gets set on entry anyway, so 
    // this does not even risk stack overflow
    return Reset_Entry_Point();
}

__attribute__((weak)) void Default_Handler(void)
{
    return;
}

__attribute__((weak,alias("Default_Handler"))) void NMI_Handler (void);
__attribute__((weak,alias("Default_Handler"))) void HardFault_Handler (void);
__attribute__((weak,alias("Default_Handler"))) void SVC_Handler (void);
__attribute__((weak,alias("Default_Handler"))) void PendSV_Handler (void);
__attribute__((weak,alias("Default_Handler"))) void SysTick_Handler (void);
__attribute__((weak,alias("Default_Handler"))) void WWDG_IRQHandler (void);
__attribute__((weak,alias("Default_Handler"))) void PVD_VDDIO2_IRQHandler (void);
__attribute__((weak,alias("Default_Handler"))) void RTC_IRQHandler (void);
__attribute__((weak,alias("Default_Handler"))) void FLASH_IRQHandler (void);
__attribute__((weak,alias("Default_Handler"))) void RCC_CRS_IRQHandler (void);
__attribute__((weak,alias("Default_Handler"))) void EXTI0_1_IRQHandler (void);
__attribute__((weak,alias("Default_Handler"))) void EXTI2_3_IRQHandler (void);
__attribute__((weak,alias("Default_Handler"))) void EXTI4_15_IRQHandler (void);
__attribute__((weak,alias("Default_Handler"))) void TSC_IRQHandler (void);
__attribute__((weak,alias("Default_Handler"))) void DMA1_Ch1_IRQHandler (void);
__attribute__((weak,alias("Default_Handler"))) void DMA1_Ch2_3_DMA2_Ch1_2_IRQHandler (void);
__attribute__((weak,alias("Default_Handler"))) void DMA1_Ch4_7_DMA2_Ch3_5_IRQHandler (void);
__attribute__((weak,alias("Default_Handler"))) void ADC1_COMP_IRQHandler (void);
__attribute__((weak,alias("Default_Handler"))) void TIM1_BRK_UP_TRG_COM_IRQHandler (void);
__attribute__((weak,alias("Default_Handler"))) void TIM1_CC_IRQHandler (void);
__attribute__((weak,alias("Default_Handler"))) void TIM2_IRQHandler (void);
__attribute__((weak,alias("Default_Handler"))) void TIM3_IRQHandler (void);
__attribute__((weak,alias("Default_Handler"))) void TIM6_DAC_IRQHandler (void);
__attribute__((weak,alias("Default_Handler"))) void TIM7_IRQHandler (void);
__attribute__((weak,alias("Default_Handler"))) void TIM14_IRQHandler  (void);
__attribute__((weak,alias("Default_Handler"))) void TIM15_IRQHandler (void);
__attribute__((weak,alias("Default_Handler"))) void TIM16_IRQHandler (void);
__attribute__((weak,alias("Default_Handler"))) void TIM17_IRQHandler (void);
__attribute__((weak,alias("Default_Handler"))) void I2C1_IRQHandler (void);
__attribute__((weak,alias("Default_Handler"))) void I2C2_IRQHandler (void);
__attribute__((weak,alias("Default_Handler"))) void SPI1_IRQHandler (void);
__attribute__((weak,alias("Default_Handler"))) void SPI2_IRQHandler (void);
__attribute__((weak,alias("Default_Handler"))) void USART1_IRQHandler (void);
__attribute__((weak,alias("Default_Handler"))) void USART2_IRQHandler (void);
__attribute__((weak,alias("Default_Handler"))) void USART3_8_IRQHandler (void);
__attribute__((weak,alias("Default_Handler"))) void CEC_CAN_IRQHandler(void);

// Interrupt vector table
__attribute__((section(".isr_vector")))
static const void (*VectorTable[])(void) = {
    (const void (*)(void)) &_estack,
    Reset_Entry_Point,
    NMI_Handler,
    HardFault_Handler,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    SVC_Handler,
    0,
    0,
    PendSV_Handler,
    SysTick_Handler,
    WWDG_IRQHandler,                  
    PVD_VDDIO2_IRQHandler,
    RTC_IRQHandler,
    FLASH_IRQHandler,
    RCC_CRS_IRQHandler,
    EXTI0_1_IRQHandler,
    EXTI2_3_IRQHandler,
    EXTI4_15_IRQHandler,
    TSC_IRQHandler,
    DMA1_Ch1_IRQHandler,
    DMA1_Ch2_3_DMA2_Ch1_2_IRQHandler,
    DMA1_Ch4_7_DMA2_Ch3_5_IRQHandler,
    ADC1_COMP_IRQHandler,
    TIM1_BRK_UP_TRG_COM_IRQHandler,
    TIM1_CC_IRQHandler,
    TIM2_IRQHandler,
    TIM3_IRQHandler,
    TIM6_DAC_IRQHandler,
    TIM7_IRQHandler,
    TIM14_IRQHandler,
    TIM15_IRQHandler,
    TIM16_IRQHandler,
    TIM17_IRQHandler,
    I2C1_IRQHandler,
    I2C2_IRQHandler,
    SPI1_IRQHandler,
    SPI2_IRQHandler,
    USART1_IRQHandler,
    USART2_IRQHandler,
    USART3_8_IRQHandler,
    CEC_CAN_IRQHandler
};