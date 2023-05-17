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
    __REG32 en : 1;
    __REG32 dmeie : 1;
    __REG32 teie : 1;
    __REG32 htie : 1;
    __REG32 tcie : 1;
    __REG32 pfctrl : 1;
    __REG32 dir : 2;
    __REG32 circ : 1;
    __REG32 pinc : 1;
    __REG32 minc : 1;
    __REG32 psize : 2;
    __REG32 msize : 2;
    __REG32 pincos : 1;
    __REG32 pl : 2;
    __REG32 dbm : 1;
    __REG32 ct : 1;
    __REG32 : 1;
    __REG32 pburst : 3;
    __REG32 mburst : 3;
    __REG32 chsel : 3;
    __REG32 : 4;
} __attribute__((packed)) dma_sxcr_t;

typedef struct 
{
    __REG32 ndt : 16;
    __REG32 : 16;
} __attribute__((packed)) dma_sxndtr_t;

typedef struct 
{
    __REG32 pa;
} __attribute__((packed)) dma_sxpar_t;

typedef struct 
{
    __REG32 m0a;
} __attribute__((packed)) dma_sxm0ar_t;

typedef struct 
{
    __REG32 m1a;
} __attribute__((packed)) dma_sxm1ar_t;

typedef struct 
{
    __REG32 fth : 2;
    __REG32 dmdis : 1;
    __REG32 fs : 3;
    __REG32 : 1;
    __REG32 feie : 1;
    __REG32 : 24;
} __attribute__((packed)) dma_sxfcr_t;

typedef struct
{
    dma_lisr_t DMA_LISR;
    dma_hisr_t DMA_HISR;
    dma_lifcr_t DMA_LIFCR;
    dma_hifcr_t DMA_HIFCR;

    dma_sxcr_t DMA_S0CR;
    dma_sxndtr_t DMA_S0NDTR;
    dma_sxpar_t DMA_S0PAR;
    dma_sxm0ar_t DMA_S0M0AR;
    dma_sxm1ar_t DMA_S0M1AR;
    dma_sxfcr_t DMA_S0FCR;
    
    dma_sxcr_t DMA_S1CR;
    dma_sxndtr_t DMA_S1NDTR;
    dma_sxpar_t DMA_S1PAR;
    dma_sxm0ar_t DMA_S1M0AR;
    dma_sxm1ar_t DMA_S1M1AR;
    dma_sxfcr_t DMA_S1FCR;

    dma_sxcr_t DMA_S2CR;
    dma_sxndtr_t DMA_S2NDTR;
    dma_sxpar_t DMA_S2PAR;
    dma_sxm0ar_t DMA_S2M0AR;
    dma_sxm1ar_t DMA_S2M1AR;
    dma_sxfcr_t DMA_S2FCR;

    dma_sxcr_t DMA_S3CR;
    dma_sxndtr_t DMA_S3NDTR;
    dma_sxpar_t DMA_S3PAR;
    dma_sxm0ar_t DMA_S3M0AR;
    dma_sxm1ar_t DMA_S3M1AR;
    dma_sxfcr_t DMA_S3FCR;

    dma_sxcr_t DMA_S4CR;
    dma_sxndtr_t DMA_S4NDTR;
    dma_sxpar_t DMA_S4PAR;
    dma_sxm0ar_t DMA_S4M0AR;
    dma_sxm1ar_t DMA_S4M1AR;
    dma_sxfcr_t DMA_S4FCR;

    dma_sxcr_t DMA_S5CR;
    dma_sxndtr_t DMA_S5NDTR;
    dma_sxpar_t DMA_S5PAR;
    dma_sxm0ar_t DMA_S5M0AR;
    dma_sxm1ar_t DMA_S5M1AR;
    dma_sxfcr_t DMA_S5FCR;

    dma_sxcr_t DMA_S6CR;
    dma_sxndtr_t DMA_S6NDTR;
    dma_sxpar_t DMA_S6PAR;
    dma_sxm0ar_t DMA_S6M0AR;
    dma_sxm1ar_t DMA_S6M1AR;
    dma_sxfcr_t DMA_S6FCR;

    dma_sxcr_t DMA_S7CR;
    dma_sxndtr_t DMA_S7NDTR;
    dma_sxpar_t DMA_S7PAR;
    dma_sxm0ar_t DMA_S7M0AR;
    dma_sxm1ar_t DMA_S7M1AR;
    dma_sxfcr_t DMA_S7FCR;
} __attribute__((packed)) dma_regs_t;

static dma_regs_t *DMA1 = (dma_regs_t *)(DMA1_BASEADDR);
static dma_regs_t *DMA2 = (dma_regs_t *)(DMA2_BASEADDR);