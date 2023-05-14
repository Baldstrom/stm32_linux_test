#pragma once

#include "regs.h"

#define SYSCFG_BASE_ADDR        ((__REG32 *)0x40013800U)

typedef struct
{
    __REG32 MEM_MODE : 2;
    __REG32 : 30;
} __attribute__((packed)) syscfg_memrmp_t;

typedef struct
{
    __REG32 : 23;
    __REG32 MII_RMII_SEL : 1;
    __REG32 : 8;
} __attribute__((packed)) syscfg_pmc_t;

typedef struct
{
    __REG32 EXTI0 : 4;
    __REG32 EXTI1 : 4;
    __REG32 EXTI2 : 4;
    __REG32 EXTI3 : 4;
    __REG32 : 16;
} __attribute__((packed)) syscfg_exticr1_t;

typedef struct
{
    __REG32 EXTI0 : 4;
    __REG32 EXTI1 : 4;
    __REG32 EXTI2 : 4;
    __REG32 EXTI3 : 4;
    __REG32 : 16;
} __attribute__((packed)) syscfg_exticr2_t;

typedef struct
{
    __REG32 EXTI0 : 4;
    __REG32 EXTI1 : 4;
    __REG32 EXTI2 : 4;
    __REG32 EXTI3 : 4;
    __REG32 : 16;
} __attribute__((packed)) syscfg_exticr3_t;

typedef struct
{
    __REG32 EXTI0 : 4;
    __REG32 EXTI1 : 4;
    __REG32 EXTI2 : 4;
    __REG32 EXTI3 : 4;
    __REG32 : 16;
} __attribute__((packed)) syscfg_exticr4_t;

typedef struct
{
    __REG32 CMP_PD : 1;
    __REG32 : 6;
    __REG32 READY : 1;
    __REG32 : 24;
} __attribute__((packed)) syscfg_cmpcr_t;

typedef struct
{
    syscfg_memrmp_t     MEMRMP;
    syscfg_pmc_t        PMC;

    syscfg_exticr1_t    EXTICR1;
    syscfg_exticr2_t    EXTICR2;
    syscfg_exticr3_t    EXTICR3;
    syscfg_exticr4_t    EXTICR4;

    syscfg_cmpcr_t      CMPCR;
} __attribute__((packed)) syscfg_t;

static syscfg_t *SYSCFG = (syscfg_t *)(SYSCFG_BASE_ADDR);