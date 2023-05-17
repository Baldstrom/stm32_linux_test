#pragma once

#include "regs.h"

#define DMA1_BASEADDR       ((__REG32 *)0x40026000U)
#define DMA2_BASEADDR       ((__REG32 *)0x40026400U)

typedef struct 
{

} __attribute__((packed)) dma_lisr_t;

typedef struct 
{

} __attribute__((packed)) dma_hisr_t;


typedef struct 
{

} __attribute__((packed)) dma_lifcr_t;

typedef struct 
{

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
