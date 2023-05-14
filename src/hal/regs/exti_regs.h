#pragma once

#include "regs.h"

#define EXTI_BASE_ADDR      ((__REG32 *)0x40013800U)

typedef struct
{
    __REG32 mr : 23;
    __REG32 : 9;
} __attribute__((packed)) exti_imr_t;

typedef struct
{
    __REG32 mr : 23;
    __REG32 : 9;
} __attribute__((packed)) exti_emr_t;

typedef struct
{
    __REG32 tr : 23;
    __REG32 : 9;
} __attribute__((packed)) exti_rtsr_t;

typedef struct
{
    __REG32 tr : 23;
    __REG32 : 9;
} __attribute__((packed)) exti_ftsr_t;

typedef struct
{
    __REG32 swier : 23;
    __REG32 : 9;
} __attribute__((packed)) exti_swier_t;

typedef struct
{
    __REG32 pr : 23;
    __REG32 : 9;
} __attribute__((packed)) exti_pr_t;

typedef struct 
{
    exti_imr_t      IMR;
    exti_emr_t      EMR;
    exti_rtsr_t     RTSR;
    exti_ftsr_t     FTSR;
    exti_swier_t    SWIER;
    exti_pr_t       PR;
} __attribute__((packed)) exti_regs_t;

static exti_regs_t *EXTI = (exti_regs_t *)EXTI_BASE_ADDR;