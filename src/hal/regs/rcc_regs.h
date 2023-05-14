#pragma once

#include "regs.h"

// RCC = Reset and Clock Control (pg 150 in tech ref manual)
#define RCC_BASE_ADDR       ((__REG32 *)0x40023800U)

typedef struct
{
    __REG32 HSION : 1;    // Bit 0
    __REG32 HSIRDY : 1;
    __REG32 : 1;
    __REG32 HSITRIM : 5;
    __REG32 HSICAL : 8;
    __REG32 HSEON : 1;
    __REG32 HSERDY : 1;
    __REG32 HSEBYP : 1;
    __REG32 CSSON : 1;
    __REG32 : 4;
    __REG32 PLLON : 1;
    __REG32 PLLRDY : 1;
    __REG32 PLLI2SON : 1;
    __REG32 PLLI2SRDY : 1;
    __REG32 : 4;        // Bit 31
} __attribute__((packed)) rcc_cr_t;

typedef struct
{
    __REG32 PLLM0 : 1;
    __REG32 PLLM1 : 1;
    __REG32 PLLM2 : 1;
    __REG32 PLLM3 : 1;
    __REG32 PLLM4 : 1;
    __REG32 PLLM5 : 1;
    __REG32 PLLN : 9;
    __REG32 : 1;
    __REG32 PLLP0 : 1;
    __REG32 PLLP1 : 1;
    __REG32 : 4;
    __REG32 PLLSRC : 1;
    __REG32 : 1;    
    __REG32 PLLQ0 : 1;
    __REG32 PLLQ1 : 1;
    __REG32 PLLQ2 : 1;
    __REG32 PLLQ3 : 1;
    __REG32 : 4;
} __attribute__((packed)) rcc_pllcfg_t;

typedef struct 
{
    __REG32 SW0 : 1;
    __REG32 SW1 : 1;
    __REG32 SWS0 : 1;
    __REG32 SWS1 : 1;
    __REG32 HPRE : 4;
    __REG32 : 2;
    __REG32 PPRE1 : 3;
    __REG32 PPRE2 : 3;
    __REG32 RTCPRE : 5;
    __REG32 MCO1 : 2;
    __REG32 I2SSCR : 1;
    __REG32 MCO1_PRE : 3;
    __REG32 MCO2_PRE : 3; 
    __REG32 MCO2 : 2;
} __attribute__((packed)) rcc_cfgr_t;

typedef struct
{
    __REG32 LSIRDYF : 1;
    __REG32 LSERDYF : 1;
    __REG32 HSIRDYF : 1;
    __REG32 HSERDYF : 1;
    __REG32 PLLRDYF : 1;
    __REG32 PLLI2SRDYF : 1;
    __REG32 : 1;
    __REG32 CSSF : 1;
    __REG32 LSIRDYIE : 1;
    __REG32 LSERDYIE : 1;
    __REG32 HSIRDYIE : 1;
    __REG32 HSERDYIE : 1;
    __REG32 PLLRDYIE : 1;
    __REG32 PLLI2SRDYIE : 1;
    __REG32 : 2;
    __REG32 LSIRDYC : 1;
    __REG32 LSERDYC : 1;
    __REG32 HSIRDYC : 1;
    __REG32 HSERDYC : 1;
    __REG32 PLLRDYC : 1;
    __REG32 PLLI2SRDYC : 1;
    __REG32 : 1;
    __REG32 CSSC : 1;
    __REG32 : 8;
} __attribute__((packed)) rcc_cir_t;

typedef struct
{
    __REG32 GPIOARST : 1;
    __REG32 GPIOBRST : 1;
    __REG32 GPIOCRST : 1;
    __REG32 GPIODRST : 1;
    __REG32 GPIOERST : 1;
    __REG32 GPIOFRST : 1;
    __REG32 GPIOGRST : 1;
    __REG32 GPIOHRST : 1;
    __REG32 GPIOIRST : 1;
    __REG32 : 3;
    __REG32 CRCRST : 1;
    __REG32 : 3;
    __REG32 : 5; // Not sure if it will freak out if an unnamed field is not aligned on a 4-byte boundary, and not like it matters how its defined here.
    __REG32 DMA1RST : 1;
    __REG32 DMA2RST : 1;
    __REG32 ETHMACRST : 1;
    __REG32 : 3;   
    __REG32 OTGHRST : 1;
    __REG32 : 2;
} __attribute__((packed)) rcc_ahb1rstr_t;

typedef struct
{
    __REG32 DCMIRST : 1;
    __REG32 : 3;
    __REG32 CRYPRST : 1;
    __REG32 HASHRST : 1;
    __REG32 RNCRST : 1;
    __REG32 OTGFSRST : 1;
    __REG32 : 24;
} __attribute__((packed)) rcc_ahb2rstr_t;

typedef struct
{
    __REG32 FSMCRST : 1;
    __REG32 : 30;
} __attribute__((packed)) rcc_ahb3rstr_t;

typedef struct
{
    __REG32 TIM2RST : 1;
    __REG32 TIM3RST : 1;
    __REG32 TIM4RST : 1;
    __REG32 TIM5RST : 1;
    __REG32 TIM6RST : 1;
    __REG32 TIM7RST : 1;
    __REG32 TIM12RST : 1;
    __REG32 TIM13RST : 1;
    __REG32 TIM14RST : 1;
    __REG32 : 2;
    __REG32 WWDGRST : 1;
    __REG32 : 2;
    __REG32 SPI2RST : 1;
    __REG32 SPI3RST : 1;
    __REG32 : 1;
    __REG32 UART2RST : 1;
    __REG32 UART3RST : 1;
    __REG32 UART4RST : 1;
    __REG32 UART5RST : 1;
    __REG32 I2C1RST : 1;
    __REG32 I2C2RST : 1;
    __REG32 I2C3RST : 1;
    __REG32 : 1;
    __REG32 CAN1RST : 1;
    __REG32 CAN2RST : 1;
    __REG32 : 1;
    __REG32 PWRRST : 1;
    __REG32 DACRST : 1;
    __REG32 : 2;
} __attribute__((packed)) rcc_apb1rstr_t;

typedef struct
{
    __REG32 TIM1RST : 1;
    __REG32 TIM8RST : 1;
    __REG32 : 2;
    __REG32 USART1RST : 1;
    __REG32 USART6RST : 1;
    __REG32 : 2;
    __REG32 ADCRST : 1;
    __REG32 : 2;
    __REG32 SDIORST : 1;
    __REG32 SPI1RST : 1;
    __REG32 : 1;
    __REG32 SYSCFGRST: 1;
    __REG32 : 1;
    __REG32 TIM9RST : 1;
    __REG32 TIM10RST : 1;
    __REG32 TIM11RST : 1;
    __REG32 : 13;
} __attribute__((packed)) rcc_apb2rstr_t;

typedef struct
{
    __REG32 GPIOAEN : 1;
    __REG32 GPIOBEN : 1;
    __REG32 GPIOCEN : 1;
    __REG32 GPIODEN : 1;
    __REG32 GPIOEEN : 1;
    __REG32 GPIOFEN : 1;
    __REG32 GPIOGEN : 1;
    __REG32 GPIOHEN : 1;
    __REG32 GPIOIEN : 1;
    __REG32 : 3;
    __REG32 CRCEN : 1;
    __REG32 : 5; // This is over a 32-bit boundary. Hopefully it's not effed
    __REG32 BKPSR : 1;
    __REG32 : 1;
    __REG32 CCMDATARAMEN : 1;
    __REG32 DMA1EN : 1;
    __REG32 DMA2EN : 1;
    __REG32 : 2;
    __REG32 ETHMACEN : 1;
    __REG32 ETHMACTXEN : 1;
    __REG32 ETHMACRXEN : 1;
    __REG32 ETHMACPTPEN : 1;
    __REG32 OTGHSEN : 1;
    __REG32 OTGHSULPIEN : 1;
    __REG32 : 1;
} __attribute__((packed)) rcc_ahb1enr_t;

typedef struct
{
    __REG32 DCMIEN : 1;
    __REG32 : 3;
    __REG32 CRYPEN : 1;
    __REG32 HASHEN : 1;
    __REG32 RNGEN : 1;
    __REG32 OTGFSEN : 1;
    __REG32 : 24;    
} __attribute__((packed)) rcc_ahb2enr_t;

typedef struct
{
    __REG32 FSMCEN : 1;
    __REG32 : 30;
} __attribute__((packed)) rcc_ahb3enr_t;

typedef struct
{    
    __REG32 TIM2EN : 1;
    __REG32 TIM3EN : 1;
    __REG32 TIM4EN : 1;
    __REG32 TIM5EN : 1;
    __REG32 TIM6EN : 1;
    __REG32 TIM7EN : 1;
    __REG32 TIM12EN : 1;
    __REG32 TIM13EN : 1;
    __REG32 TIM14EN : 1;
    __REG32 : 2;
    __REG32 WWDGEN : 1;
    __REG32 : 2;
    __REG32 SPI2EN : 1;
    __REG32 SPI3EN : 1;
    __REG32 : 1;
    __REG32 UART2EN : 1;
    __REG32 UART3EN : 1;
    __REG32 UART4EN : 1;
    __REG32 UART5EN : 1;
    __REG32 I2C1EN : 1;
    __REG32 I2C2EN : 1;
    __REG32 I2C3EN : 1;
    __REG32 : 1;
    __REG32 CAN1EN : 1;
    __REG32 CAN2EN : 1;
    __REG32 : 1;
    __REG32 PWREN : 1;
    __REG32 DACEN : 1;
    __REG32 : 2;
} __attribute__((packed)) rcc_apb1enr_t;

typedef struct
{    
    __REG32 TIM1EN : 1;
    __REG32 TIM8EN : 1;
    __REG32 : 2;
    __REG32 USART1EN : 1;
    __REG32 USART6EN : 1;
    __REG32 : 2;
    __REG32 ADCEN : 1;
    __REG32 : 2;
    __REG32 SDIOEN : 1;
    __REG32 SPI1EN : 1;
    __REG32 : 1;
    __REG32 SYSCFGEN: 1;
    __REG32 : 1;
    __REG32 TIM9EN : 1;
    __REG32 TIM10EN : 1;
    __REG32 TIM11EN : 1;
    __REG32 : 13;
} __attribute__((packed)) rcc_apb2enr_t;

typedef struct 
{
    __REG32 GPIOALPEN : 1;
    __REG32 GPIOBLPEN : 1;
    __REG32 GPIOCLPEN : 1;
    __REG32 GPIODLPEN : 1;
    __REG32 GPIOELPEN : 1;
    __REG32 GPIOFLPEN : 1;
    __REG32 GPIOGLPEN : 1;
    __REG32 GPIOHLPEN : 1;
    __REG32 GPIOILPEN : 1;
    __REG32 : 3;
    __REG32 CRCLPEN : 1;
    __REG32 : 2;
    __REG32 FLITFLPEN : 1;
    __REG32 SRAM1LPEN : 1;
    __REG32 SRAM2LPEN : 1;
    __REG32 BKPSRAMLPEN : 1;
    __REG32 : 2;
    __REG32 DMA1LPEN : 1;
    __REG32 DMA2LPEN : 1;
    __REG32 : 2;
    __REG32 ETHMACLPEN : 1;
    __REG32 ETHTXLPEN : 1;
    __REG32 ETHRXLPEN : 1;
    __REG32 ETHPTLPPEN : 1;
    __REG32 OTGHSLPEN : 1;
    __REG32 OTGHSULPILPEN : 1;
    __REG32 : 1;
} __attribute__((packed)) rcc_ahb1_lpenr_t;

typedef struct
{
    __REG32 DCMILPEN : 1;
    __REG32 : 3;
    __REG32 CRYPLPEN : 1;
    __REG32 HASHLPEN : 1;
    __REG32 RNGLPEN : 1;
    __REG32 OTGFSLPEN : 1;
    __REG32 : 24;
} __attribute__((packed)) rcc_ahb2_lpenr_t;

typedef struct
{
    __REG32 FSMCLPEN : 1;
    __REG32 : 30;
} __attribute__((packed)) rcc_ahb3_lpenr_t;

typedef struct
{    
    __REG32 TIM2LPEN : 1;
    __REG32 TIM3LPEN : 1;
    __REG32 TIM4LPEN : 1;
    __REG32 TIM5LPEN : 1;
    __REG32 TIM6LPEN : 1;
    __REG32 TIM7LPEN : 1;
    __REG32 TIM12LPEN : 1;
    __REG32 TIM13LPEN : 1;
    __REG32 TIM14LPEN : 1;
    __REG32 : 2;
    __REG32 WWDGLPEN : 1;
    __REG32 : 2;
    __REG32 SPI2LPEN : 1;
    __REG32 SPI3LPEN : 1;
    __REG32 : 1;
    __REG32 UART2LPEN : 1;
    __REG32 UART3LPEN : 1;
    __REG32 UART4LPEN : 1;
    __REG32 UART5LPEN : 1;
    __REG32 I2C1LPEN : 1;
    __REG32 I2C2LPEN : 1;
    __REG32 I2C3LPEN : 1;
    __REG32 : 1;
    __REG32 CAN1LPEN : 1;
    __REG32 CAN2LPEN : 1;
    __REG32 : 1;
    __REG32 PWRLPEN : 1;
    __REG32 DACLPEN : 1;
    __REG32 : 2;
} __attribute__((packed)) rcc_apb1_lpenr_t;

typedef struct
{
    __REG32 TIM1LPEN : 1;
    __REG32 TIM8LPN : 1;
    __REG32 : 2;
    __REG32 USART1LPEN : 1;
    __REG32 USART6LPEN : 1;
    __REG32 : 2;
    __REG32 ADCLPEN : 1;
    __REG32 : 2;
    __REG32 SDIOLPEN : 1;
    __REG32 SPI1LPEN : 1;
    __REG32 : 1;
    __REG32 SYSCFGLPEN: 1;
    __REG32 : 1;
    __REG32 TIM9LPEN : 1;
    __REG32 TIM10LPEN : 1;
    __REG32 TIM11LPEN : 1;
    __REG32 : 13;
} __attribute__((packed)) rcc_apb2_lpenr_t;

typedef struct
{
    __REG32 LSEON : 1;
    __REG32 LSERDY : 1;
    __REG32 LSEBYP : 1;
    __REG32 : 5;
    __REG32 RTCSEL : 1;
    __REG32 : 5;
    __REG32 RTCEN : 1;
    __REG32 BDRST : 1;
    __REG32 : 15;
} __attribute__((packed)) rcc_bdcr_t;

typedef struct
{
    __REG32 LSION : 1;
    __REG32 LSIRDY : 1;
    __REG32 : 22;
    __REG32 RMVF : 1;
    __REG32 BORRSTF : 1;
    __REG32 PINRSTF : 1;
    __REG32 PORRSTF : 1;
    __REG32 SFTRSTF : 1;
    __REG32 IWDGRSTF : 1;
    __REG32 WWDGRSTF : 1;
    __REG32 LPWRRSTF : 1;
} __attribute__((packed)) rcc_csr_t;

typedef struct
{
    __REG32 MODPER : 13;
    __REG32 INCSTEP : 15;
    __REG32 : 2;
    __REG32 SPREADSEL : 1;
    __REG32 SSCGEN : 1;
} __attribute__((packed)) rcc__sscgr_t;

typedef struct
{
    __REG32 : 6;
    __REG32 PLLI2SN0 : 1;
    __REG32 PLLI2SN1 : 1;
    __REG32 PLLI2SN2 : 1;
    __REG32 PLLI2SN3 : 1;
    __REG32 PLLI2SN4 : 1;
    __REG32 PLLI2SN5 : 1;
    __REG32 PLLI2SN6 : 1;
    __REG32 PLLI2SN7 : 1;
    __REG32 PLLI2SN8 : 1;
    __REG32 : 13;
    __REG32 PLLI2SR0 : 1;
    __REG32 PLLI2SR1 : 1;
    __REG32 PLLI2SR2 : 1;
    __REG32 : 1;
} __attribute__((packed)) rcc__plli2scfgr_t;

typedef struct
{
    rcc_cr_t            CR;                 // Control Register
    rcc_pllcfg_t        PLLCFG;             // PLL Config Register
    rcc_cfgr_t          CFGR;               // Clock Configuration Register
    rcc_cir_t           CIR;                // Clock Interrupt Register
    rcc_ahb1rstr_t      AHB1RSTR;           // AHB1 Reset Register
    rcc_ahb2rstr_t      AHB2RSTR;           // AHB2 Reset Register
    rcc_ahb3rstr_t      AHB3RSTR;           // AHB3 Reset Register

    __REG32 : 32; // pad 4 bytes

    rcc_apb1rstr_t      APB1RSTR;           // APB1 Reset Register
    rcc_apb2rstr_t      APB2RSTR;           // APB2 Reset Register

    __REG32 : 32; // pad 4 bytes
    __REG32 : 32; // pad 4 bytes

    rcc_ahb1enr_t       AHB1ENR;            // AHB1 Clock Enable Register
    rcc_ahb2enr_t       AHB2ENR;            // AHB2 Clock Enable Register
    rcc_ahb3enr_t       AHB3ENR;            // AHB3 Clock Enable Register

    __REG32 : 32; // pad 4 bytes

    rcc_apb1enr_t       APB1ENR;            // APB1 Clock Enable Register
    rcc_apb2enr_t       APB2ENR;            // APB2 Clock Enable Register

    __REG32 : 32; // pad 4 bytes
    __REG32 : 32; // pad 4 bytes

    rcc_ahb1_lpenr_t    AHB1LPENR;          // AHB1 Clock Low Power Mode Register
    rcc_ahb2_lpenr_t    AHB2LPENR;          // AHB2 Clock Low Power Mode Register
    rcc_ahb3_lpenr_t    AHB3LPENR;          // AHB3 Clock Low Power Mode Register

    __REG32 : 32; // pad 4 bytes

    rcc_apb1_lpenr_t    APB1LPENR;          // APB1 Clock Low Power Mode Register
    rcc_apb2_lpenr_t    APB2LPENR;          // APB2 Clock Low Power Mode Register

    __REG32 : 32; // pad 4 bytes
    __REG32 : 32; // pad 4 bytes

    rcc_bdcr_t          BDCR;               // Backup Domain Control Register
    rcc_csr_t           CSR;                // Control and Status Register

    __REG32 : 32; // pad 4 bytes
    __REG32 : 32; // pad 4 bytes

    rcc__sscgr_t        SSCGR;              // Spread Spectrum Clock Generation Register
    rcc__plli2scfgr_t   PLLI2SCFGR;         // PLLI2C Configuration Register

    __REG32             PLLSAICFGR;         // ONLY FOR STM32F42/3 TODO: IFDEF?
    __REG32             DCKCFGR;
} rcc_regs_t;

static rcc_regs_t *RCC = (rcc_regs_t *)RCC_BASE_ADDR;