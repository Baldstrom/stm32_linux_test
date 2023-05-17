#pragma once

#include "regs.h"

#define DMA1_BASEADDR       ((__REG32 *)0x40026000U)
#define DMA2_BASEADDR       ((__REG32 *)0x40026400U)

typedef struct 
{
    __REG32 feif0 : 1;
    __REG32 : 1;
    __REG32 dmeif0 : 1;
    __REG32 teif0 : 1;
    __REG32 htif0 : 1;
    __REG32 tcif0 : 1;
    __REG32 ffif1 : 1;
    __REG32 : 1;
    __REG32 dmeif1 : 1;
    __REG32 teif1 : 1;
    __REG32 htif1 : 1;
    __REG32 tcif1 : 1;
    __REG32 : 4;
    __REG32 feif2 : 1;
    __REG32 : 1;
    __REG32 dmeif2 : 1;
    __REG32 teif2 : 1;
    __REG32 htif2 : 1;
    __REG32 tcif2 : 1;
    __REG32 feif3 : 1;
    __REG32 : 1;
    __REG32 dmeif3 : 1;
    __REG32 teif3 : 1;
    __REG32 htif3 : 1;
    __REG32 tcif3 : 1;
    __REG32 : 4;
} __attribute__((packed)) dma_lisr_t;

typedef struct 
{
    __REG32 feif40 : 1;
    __REG32 : 1;
    __REG32 dmeif4 : 1;
    __REG32 teif4 : 1;
    __REG32 htif4 : 1;
    __REG32 tcif4 : 1;
    __REG32 ffif3 : 1;
    __REG32 : 1;
    __REG32 dmeif5 : 1;
    __REG32 teif5 : 1;
    __REG32 htif5 : 1;
    __REG32 tcif5 : 1;
    __REG32 : 4;
    __REG32 feif6 : 1;
    __REG32 : 1;
    __REG32 dmeif6 : 1;
    __REG32 teif6 : 1;
    __REG32 htif6 : 1;
    __REG32 tcif6 : 1;
    __REG32 feif6 : 1;
    __REG32 : 1;
    __REG32 dmeif7 : 1;
    __REG32 teif7 : 1;
    __REG32 htif7 : 1;
    __REG32 tcif7 : 1;
    __REG32 : 4;
} __attribute__((packed)) dma_hisr_t;


typedef struct 
{
    __REG32 cfeif0 : 1;
    __REG32 : 1;
    __REG32 cdmeif0 : 1;
    __REG32 cteif0 : 1;
    __REG32 chtif0 : 1;
    __REG32 ctcif0 : 1;
    __REG32 cfeif1 : 1;
    __REG32 : 1;
    __REG32 cdmeif1 : 1;
    __REG32 cteif1 : 1;
    __REG32 chtif1 : 1;
    __REG32 ctcif1 : 1;
    __REG32 : 4;
    __REG32 cfeif2 : 1;
    __REG32 : 1;
    __REG32 cdmeif2 : 1;
    __REG32 cteif2 : 1;
    __REG32 chtif2 : 1;
    __REG32 ctcif2 : 1;
    __REG32 cfeif3 : 1;
    __REG32 : 1;
    __REG32 cdmeif3 : 1;
    __REG32 teif3 : 1;
    __REG32 chtif3 : 1;
    __REG32 ctcif3 : 1;
    __REG32 : 4;
} __attribute__((packed)) dma_lifcr_t;

typedef struct 
{
    __REG32 cfeif4 : 1;
    __REG32 : 1;
    __REG32 cdmeif4 : 1;
    __REG32 cteif4 : 1;
    __REG32 chtif4 : 1;
    __REG32 ctcif4 : 1;
    __REG32 cfeif5 : 1;
    __REG32 : 1;
    __REG32 cdmeif5 : 1;
    __REG32 cteif5 : 1;
    __REG32 chtif5 : 1;
    __REG32 ctcif5 : 1;
    __REG32 : 4;
    __REG32 cfeif6 : 1;
    __REG32 : 1;
    __REG32 cdmeif6 : 1;
    __REG32 cteif6 : 1;
    __REG32 chtif6 : 1;
    __REG32 ctcif6 : 1;
    __REG32 cfeif6 : 1;
    __REG32 : 1;
    __REG32 cdmeif7 : 1;
    __REG32 teif7 : 1;
    __REG32 chtif7 : 1;
    __REG32 ctcif7 : 1;
    __REG32 : 4;
} __attribute__((packed)) dma_hifcr_t;

typedef struct 
{

} __attribute__((packed)) dma_s0cr_t;

typedef struct 
{

} __attribute__((packed)) dma_s0ndtr_t;

typedef struct 
{

} __attribute__((packed)) dma_s0par_t;

typedef struct 
{

} __attribute__((packed)) dma_s0m0ar_t;

typedef struct 
{

} __attribute__((packed)) dma_s0m1ar_t;

typedef struct 
{

} __attribute__((packed)) dma_s0fcr_t;

typedef struct 
{

} __attribute__((packed)) dma_s1cr_t;

typedef struct 
{

} __attribute__((packed)) dma_s1ndtr_t;

typedef struct 
{

} __attribute__((packed)) dma_s1par_t;

typedef struct 
{

} __attribute__((packed)) dma_s1m0ar_t;

typedef struct 
{

} __attribute__((packed)) dma_s1m1ar_t;

typedef struct 
{

} __attribute__((packed)) dma_s1fcr_t;

// REPEAT FOR 7 total DMAs
