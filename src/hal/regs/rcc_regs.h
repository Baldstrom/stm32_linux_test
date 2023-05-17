#pragma once

#include "regs.h"

// RCC = Reset and Clock Control (pg 150 in tech ref manual)
#define RCC_BASE_ADDR       ((__REG32 *)0x40023800U)

typedef struct
{
    __REG32 hsion : 1;    // bit 0
    __REG32 hsirdy : 1;
    __REG32 : 1;
    __REG32 hsitrim : 5;
    __REG32 hsical : 8;
    __REG32 hseon : 1;
    __REG32 hserdy : 1;
    __REG32 hsebyp : 1;
    __REG32 csson : 1;
    __REG32 : 4;
    __REG32 pllon : 1;
    __REG32 pllrdy : 1;
    __REG32 plli2son : 1;
    __REG32 plli2srdy : 1;
    __REG32 : 4;        // bit 31
} __attribute__((packed)) rcc_cr_t;

typedef struct
{
    __REG32 pllm0 : 1;
    __REG32 pllm1 : 1;
    __REG32 pllm2 : 1;
    __REG32 pllm3 : 1;
    __REG32 pllm4 : 1;
    __REG32 pllm5 : 1;
    __REG32 plln : 9;
    __REG32 : 1;
    __REG32 pllp0 : 1;
    __REG32 pllp1 : 1;
    __REG32 : 4;
    __REG32 pllsrc : 1;
    __REG32 : 1;    
    __REG32 pllq0 : 1;
    __REG32 pllq1 : 1;
    __REG32 pllq2 : 1;
    __REG32 pllq3 : 1;
    __REG32 : 4;
} __attribute__((packed)) rcc_pllcfg_t;

typedef struct 
{
    __REG32 sw0 : 1;
    __REG32 sw1 : 1;
    __REG32 sws0 : 1;
    __REG32 sws1 : 1;
    __REG32 hpre : 4;
    __REG32 : 2;
    __REG32 ppre1 : 3;
    __REG32 ppre2 : 3;
    __REG32 rtcpre : 5;
    __REG32 mco1 : 2;
    __REG32 i2sscr : 1;
    __REG32 mco1_pre : 3;
    __REG32 mco2_pre : 3; 
    __REG32 mco2 : 2;
} __attribute__((packed)) rcc_cfgr_t;

typedef struct
{
    __REG32 lsirdyf : 1;
    __REG32 lserdyf : 1;
    __REG32 hsirdyf : 1;
    __REG32 hserdyf : 1;
    __REG32 pllrdyf : 1;
    __REG32 plli2srdyf : 1;
    __REG32 : 1;
    __REG32 cssf : 1;
    __REG32 lsirdyie : 1;
    __REG32 lserdyie : 1;
    __REG32 hsirdyie : 1;
    __REG32 hserdyie : 1;
    __REG32 pllrdyie : 1;
    __REG32 plli2srdyie : 1;
    __REG32 : 2;
    __REG32 lsirdyc : 1;
    __REG32 lserdyc : 1;
    __REG32 hsirdyc : 1;
    __REG32 hserdyc : 1;
    __REG32 pllrdyc : 1;
    __REG32 plli2srdyc : 1;
    __REG32 : 1;
    __REG32 cssc : 1;
    __REG32 : 8;
} __attribute__((packed)) rcc_cir_t;

typedef struct
{
    __REG32 gpioarst : 1;
    __REG32 gpiobrst : 1;
    __REG32 gpiocrst : 1;
    __REG32 gpiodrst : 1;
    __REG32 gpioerst : 1;
    __REG32 gpiofrst : 1;
    __REG32 gpiogrst : 1;
    __REG32 gpiohrst : 1;
    __REG32 gpioirst : 1;
    __REG32 : 3;
    __REG32 crcrst : 1;
    __REG32 : 3;
    __REG32 : 5; // not sure if it will freak out if an unnamed field is not aligned on a 4-byte boundary, and not like it matters how its defined here.
    __REG32 dma1rst : 1;
    __REG32 dma2rst : 1;
    __REG32 ethmacrst : 1;
    __REG32 : 3;   
    __REG32 otghrst : 1;
    __REG32 : 2;
} __attribute__((packed)) rcc_ahb1rstr_t;

typedef struct
{
    __REG32 dcmirst : 1;
    __REG32 : 3;
    __REG32 cryprst : 1;
    __REG32 hashrst : 1;
    __REG32 rncrst : 1;
    __REG32 otgfsrst : 1;
    __REG32 : 24;
} __attribute__((packed)) rcc_ahb2rstr_t;

typedef struct
{
    __REG32 fsmcrst : 1;
    __REG32 : 30;
} __attribute__((packed)) rcc_ahb3rstr_t;

typedef struct
{
    __REG32 tim2rst : 1;
    __REG32 tim3rst : 1;
    __REG32 tim4rst : 1;
    __REG32 tim5rst : 1;
    __REG32 tim6rst : 1;
    __REG32 tim7rst : 1;
    __REG32 tim12rst : 1;
    __REG32 tim13rst : 1;
    __REG32 tim14rst : 1;
    __REG32 : 2;
    __REG32 wwdgrst : 1;
    __REG32 : 2;
    __REG32 spi2rst : 1;
    __REG32 spi3rst : 1;
    __REG32 : 1;
    __REG32 uart2rst : 1;
    __REG32 uart3rst : 1;
    __REG32 uart4rst : 1;
    __REG32 uart5rst : 1;
    __REG32 i2c1rst : 1;
    __REG32 i2c2rst : 1;
    __REG32 i2c3rst : 1;
    __REG32 : 1;
    __REG32 can1rst : 1;
    __REG32 can2rst : 1;
    __REG32 : 1;
    __REG32 pwrrst : 1;
    __REG32 dacrst : 1;
    __REG32 : 2;
} __attribute__((packed)) rcc_apb1rstr_t;

typedef struct
{
    __REG32 tim1rst : 1;
    __REG32 tim8rst : 1;
    __REG32 : 2;
    __REG32 usart1rst : 1;
    __REG32 usart6rst : 1;
    __REG32 : 2;
    __REG32 adcrst : 1;
    __REG32 : 2;
    __REG32 sdiorst : 1;
    __REG32 spi1rst : 1;
    __REG32 : 1;
    __REG32 syscfgrst: 1;
    __REG32 : 1;
    __REG32 tim9rst : 1;
    __REG32 tim10rst : 1;
    __REG32 tim11rst : 1;
    __REG32 : 13;
} __attribute__((packed)) rcc_apb2rstr_t;

typedef struct
{
    __REG32 gpioaen : 1;
    __REG32 gpioben : 1;
    __REG32 gpiocen : 1;
    __REG32 gpioden : 1;
    __REG32 gpioeen : 1;
    __REG32 gpiofen : 1;
    __REG32 gpiogen : 1;
    __REG32 gpiohen : 1;
    __REG32 gpioien : 1;
    __REG32 : 3;
    __REG32 crcen : 1;
    __REG32 : 5; // this is over a 32-bit boundary. hopefully it's not effed
    __REG32 bkpsr : 1;
    __REG32 : 1;
    __REG32 ccmdataramen : 1;
    __REG32 dma1en : 1;
    __REG32 dma2en : 1;
    __REG32 : 2;
    __REG32 ethmacen : 1;
    __REG32 ethmactxen : 1;
    __REG32 ethmacrxen : 1;
    __REG32 ethmacptpen : 1;
    __REG32 otghsen : 1;
    __REG32 otghsulpien : 1;
    __REG32 : 1;
} __attribute__((packed)) rcc_ahb1enr_t;

typedef struct
{
    __REG32 dcmien : 1;
    __REG32 : 3;
    __REG32 crypen : 1;
    __REG32 hashen : 1;
    __REG32 rngen : 1;
    __REG32 otgfsen : 1;
    __REG32 : 24;    
} __attribute__((packed)) rcc_ahb2enr_t;

typedef struct
{
    __REG32 fsmcen : 1;
    __REG32 : 30;
} __attribute__((packed)) rcc_ahb3enr_t;

typedef struct
{    
    __REG32 tim2en : 1;
    __REG32 tim3en : 1;
    __REG32 tim4en : 1;
    __REG32 tim5en : 1;
    __REG32 tim6en : 1;
    __REG32 tim7en : 1;
    __REG32 tim12en : 1;
    __REG32 tim13en : 1;
    __REG32 tim14en : 1;
    __REG32 : 2;
    __REG32 wwdgen : 1;
    __REG32 : 2;
    __REG32 spi2en : 1;
    __REG32 spi3en : 1;
    __REG32 : 1;
    __REG32 uart2en : 1;
    __REG32 uart3en : 1;
    __REG32 uart4en : 1;
    __REG32 uart5en : 1;
    __REG32 i2c1en : 1;
    __REG32 i2c2en : 1;
    __REG32 i2c3en : 1;
    __REG32 : 1;
    __REG32 can1en : 1;
    __REG32 can2en : 1;
    __REG32 : 1;
    __REG32 pwren : 1;
    __REG32 dacen : 1;
    __REG32 : 2;
} __attribute__((packed)) rcc_apb1enr_t;

typedef struct
{    
    __REG32 tim1en : 1;
    __REG32 tim8en : 1;
    __REG32 : 2;
    __REG32 usart1en : 1;
    __REG32 usart6en : 1;
    __REG32 : 2;
    __REG32 adcen : 1;
    __REG32 : 2;
    __REG32 sdioen : 1;
    __REG32 spi1en : 1;
    __REG32 : 1;
    __REG32 syscfgen: 1;
    __REG32 : 1;
    __REG32 tim9en : 1;
    __REG32 tim10en : 1;
    __REG32 tim11en : 1;
    __REG32 : 13;
} __attribute__((packed)) rcc_apb2enr_t;

typedef struct 
{
    __REG32 gpioalpen : 1;
    __REG32 gpioblpen : 1;
    __REG32 gpioclpen : 1;
    __REG32 gpiodlpen : 1;
    __REG32 gpioelpen : 1;
    __REG32 gpioflpen : 1;
    __REG32 gpioglpen : 1;
    __REG32 gpiohlpen : 1;
    __REG32 gpioilpen : 1;
    __REG32 : 3;
    __REG32 crclpen : 1;
    __REG32 : 2;
    __REG32 flitflpen : 1;
    __REG32 sram1lpen : 1;
    __REG32 sram2lpen : 1;
    __REG32 bkpsramlpen : 1;
    __REG32 : 2;
    __REG32 dma1lpen : 1;
    __REG32 dma2lpen : 1;
    __REG32 : 2;
    __REG32 ethmaclpen : 1;
    __REG32 ethtxlpen : 1;
    __REG32 ethrxlpen : 1;
    __REG32 ethptlppen : 1;
    __REG32 otghslpen : 1;
    __REG32 otghsulpilpen : 1;
    __REG32 : 1;
} __attribute__((packed)) rcc_ahb1_lpenr_t;

typedef struct
{
    __REG32 dcmilpen : 1;
    __REG32 : 3;
    __REG32 cryplpen : 1;
    __REG32 hashlpen : 1;
    __REG32 rnglpen : 1;
    __REG32 otgfslpen : 1;
    __REG32 : 24;
} __attribute__((packed)) rcc_ahb2_lpenr_t;

typedef struct
{
    __REG32 fsmclpen : 1;
    __REG32 : 30;
} __attribute__((packed)) rcc_ahb3_lpenr_t;

typedef struct
{    
    __REG32 tim2lpen : 1;
    __REG32 tim3lpen : 1;
    __REG32 tim4lpen : 1;
    __REG32 tim5lpen : 1;
    __REG32 tim6lpen : 1;
    __REG32 tim7lpen : 1;
    __REG32 tim12lpen : 1;
    __REG32 tim13lpen : 1;
    __REG32 tim14lpen : 1;
    __REG32 : 2;
    __REG32 wwdglpen : 1;
    __REG32 : 2;
    __REG32 spi2lpen : 1;
    __REG32 spi3lpen : 1;
    __REG32 : 1;
    __REG32 uart2lpen : 1;
    __REG32 uart3lpen : 1;
    __REG32 uart4lpen : 1;
    __REG32 uart5lpen : 1;
    __REG32 i2c1lpen : 1;
    __REG32 i2c2lpen : 1;
    __REG32 i2c3lpen : 1;
    __REG32 : 1;
    __REG32 can1lpen : 1;
    __REG32 can2lpen : 1;
    __REG32 : 1;
    __REG32 pwrlpen : 1;
    __REG32 daclpen : 1;
    __REG32 : 2;
} __attribute__((packed)) rcc_apb1_lpenr_t;

typedef struct
{
    __REG32 tim1lpen : 1;
    __REG32 tim8lpn : 1;
    __REG32 : 2;
    __REG32 usart1lpen : 1;
    __REG32 usart6lpen : 1;
    __REG32 : 2;
    __REG32 adclpen : 1;
    __REG32 : 2;
    __REG32 sdiolpen : 1;
    __REG32 spi1lpen : 1;
    __REG32 : 1;
    __REG32 syscfglpen: 1;
    __REG32 : 1;
    __REG32 tim9lpen : 1;
    __REG32 tim10lpen : 1;
    __REG32 tim11lpen : 1;
    __REG32 : 13;
} __attribute__((packed)) rcc_apb2_lpenr_t;

typedef struct
{
    __REG32 lseon : 1;
    __REG32 lserdy : 1;
    __REG32 lsebyp : 1;
    __REG32 : 5;
    __REG32 rtcsel : 1;
    __REG32 : 5;
    __REG32 rtcen : 1;
    __REG32 bdrst : 1;
    __REG32 : 15;
} __attribute__((packed)) rcc_bdcr_t;

typedef struct
{
    __REG32 lsion : 1;
    __REG32 lsirdy : 1;
    __REG32 : 22;
    __REG32 rmvf : 1;
    __REG32 borrstf : 1;
    __REG32 pinrstf : 1;
    __REG32 porrstf : 1;
    __REG32 sftrstf : 1;
    __REG32 iwdgrstf : 1;
    __REG32 wwdgrstf : 1;
    __REG32 lpwrrstf : 1;
} __attribute__((packed)) rcc_csr_t;

typedef struct
{
    __REG32 modper : 13;
    __REG32 incstep : 15;
    __REG32 : 2;
    __REG32 spreadsel : 1;
    __REG32 sscgen : 1;
} __attribute__((packed)) rcc__sscgr_t;

typedef struct
{
    __REG32 : 6;
    __REG32 plli2sn0 : 1;
    __REG32 plli2sn1 : 1;
    __REG32 plli2sn2 : 1;
    __REG32 plli2sn3 : 1;
    __REG32 plli2sn4 : 1;
    __REG32 plli2sn5 : 1;
    __REG32 plli2sn6 : 1;
    __REG32 plli2sn7 : 1;
    __REG32 plli2sn8 : 1;
    __REG32 : 13;
    __REG32 plli2sr0 : 1;
    __REG32 plli2sr1 : 1;
    __REG32 plli2sr2 : 1;
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