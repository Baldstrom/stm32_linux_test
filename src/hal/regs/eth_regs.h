#pragma once

#include "regs.h"

#define ETH_BASEADDR            ((__REG32 *)0x00000000U)
#define ETH_PTP_BASEADDR        ((__REG32 *)0x00000000U)
#define ETH_DMA_BASEADDR        ((__REG32 *)0x00000000U)

/**
 * @brief TODO: All of these need fills
 */
typedef struct
{

} __attribute__((packed)) eth_maccr_t;

typedef struct 
{

} __attribute__((packed)) eth_macffr_t;

typedef struct 
{

} __attribute__((packed)) eth_machthr_t;

typedef struct 
{

} __attribute__((packed)) eth_machtlr_t;

typedef struct 
{

} __attribute__((packed)) eth_macmiiar_t;

typedef struct 
{

} __attribute__((packed)) eth_macmiidr_t;

typedef struct 
{

} __attribute__((packed)) eth_macfcr_t;

typedef struct 
{

} __attribute__((packed)) eth_macvlantr_t;

typedef struct 
{

} __attribute__((packed)) eth_macrwuffr_t;

typedef struct 
{

} __attribute__((packed)) eth_macpmtcsr_t;

typedef struct 
{

} __attribute__((packed)) eth_macdbgr_t;

typedef struct 
{

} __attribute__((packed)) eth_macsr_t;

typedef struct 
{

} __attribute__((packed)) eth_macimr_t;

typedef struct 
{

} __attribute__((packed)) eth_maca0hr_t;

typedef struct 
{

} __attribute__((packed)) eth_maca0lr_t;

typedef struct 
{

} __attribute__((packed)) eth_maca1hr_t;

typedef struct 
{

} __attribute__((packed)) eth_maca1lr_t;

typedef struct 
{

} __attribute__((packed)) eth_maca2hr_t;

typedef struct 
{

} __attribute__((packed)) eth_maca2lr_t;

typedef struct 
{

} __attribute__((packed)) eth_maca3hr_t;

typedef struct 
{

} __attribute__((packed)) eth_maca3lr_t;

typedef struct 
{

} __attribute__((packed)) eth_mmccr_t;

typedef struct 
{

} __attribute__((packed)) eth_mmcrir_t;

typedef struct 
{

} __attribute__((packed)) eth_mmctir_t;

typedef struct 
{

} __attribute__((packed)) eth_mmcrimr_t;

typedef struct 
{

} __attribute__((packed)) eth_mmctimr_t;

typedef struct 
{

} __attribute__((packed)) eth_mmctgfsccr_t;

typedef struct 
{

} __attribute__((packed)) eth_mmctgfmsccr_t;

typedef struct 
{

} __attribute__((packed)) eth_mmctgfcr_t;

typedef struct 
{

} __attribute__((packed)) eth_mmcrfcecr_t;

typedef struct 
{

} __attribute__((packed)) eth_mmcrfaecr_t;

typedef struct 
{

} __attribute__((packed)) eth_mmcrgufcr_t;

typedef struct 
{

} __attribute__((packed)) eth_ptptscr_t;

typedef struct 
{

} __attribute__((packed)) eth_ptpssir_t;

typedef struct 
{

} __attribute__((packed)) eth_ptptshr_t;

typedef struct 
{

} __attribute__((packed)) eth_ptptslr_t;

typedef struct 
{

} __attribute__((packed)) eth_ptptshur_t;

typedef struct 
{

} __attribute__((packed)) eth_ptptslur_t;

typedef struct 
{

} __attribute__((packed)) eth_ptptsar_t;

typedef struct 
{

} __attribute__((packed)) eth_ptptthr_t;

typedef struct 
{

} __attribute__((packed)) eth_ptpttlr_t;

typedef struct 
{

} __attribute__((packed)) eth_ptptssr_t;

typedef struct 
{

} __attribute__((packed)) eth_ptpppscr_t;

typedef struct 
{

} __attribute__((packed)) eth_dmabmr_t;

typedef struct 
{

} __attribute__((packed)) eth_dmatpdr_t;

typedef struct 
{

} __attribute__((packed)) eth_dmarpdr_t;

typedef struct 
{

} __attribute__((packed)) eth_dmardlar_t;

typedef struct 
{

} __attribute__((packed)) eth_dmatdlar_t;

typedef struct 
{

} __attribute__((packed)) eth_dmasr_t;

typedef struct 
{

} __attribute__((packed)) eth_dmaomr_t;

typedef struct 
{

} __attribute__((packed)) eth_dmaier_t;

typedef struct 
{

} __attribute__((packed)) eth_dmamfbocr_t;

typedef struct 
{

} __attribute__((packed)) eth_dmarswtr_t;

typedef struct 
{

} __attribute__((packed)) eth_dmachtdr_t;

typedef struct 
{

} __attribute__((packed)) eth_dmachrdr_t;

typedef struct 
{

} __attribute__((packed)) eth_dmachtbar_t;

typedef struct 
{

} __attribute__((packed)) eth_dmachrbar_t;

typedef struct
{
    eth_maccr_t         MACCR;
    eth_macffr_t        MACFFR;
    eth_machthr_t       MACHTHR;
    eth_machtlr_t       MACHTLR;
    eth_macmiiar_t      MACMIIAR;
    eth_macmiidr_t      MACMIIDR;
    eth_macfcr_t        MACFCR;
    eth_macvlantr_t     MACVLANTR;      // 0x1C

    // 8-byte buffer per reg map
    __REG32 : 32; // 0x20
    __REG32 : 32; // 0x24

    eth_macrwuffr_t     MACRWUFFR;      // 0x28
    eth_macpmtcsr_t     MACPMTCSR;      // 0x2C

    // 8-byte buffer per reg map
    __REG32 : 32; // 0x30
    
    // 4-byte buffer per reg map
    eth_macdbgr_t       MACDBGR;        // 0x34
    eth_macsr_t         MACSR;
    eth_macimr_t        MACIMR;

    eth_maca0hr_t       MACA0HR;
    eth_maca0lr_t       MACA0LR;
    eth_maca1hr_t       MACA1HR;
    eth_maca1lr_t       MACA1LR;
    eth_maca2hr_t       MACA2HR;
    eth_maca2lr_t       MACA2LR;
    eth_maca3hr_t       MACA3HR;
    eth_maca3lr_t       MACA3LR;

    eth_mmccr_t         MMCCR;
    eth_mmcrir_t        MMCRIR;
    eth_mmctir_t        MMCTIR;
    eth_mmcrimr_t       MMCRIMR;
    eth_mmctimr_t       MMCTIMR;        // 0x110
    
    // Address Buffer Space
    __REG32 : 32; // 0x114
    __REG32 : 32; // 0x118
    __REG32 : 32; // 0x11C
    __REG32 : 32; // 0x120
    
    __REG32 : 32; // 0x124
    __REG32 : 32; // 0x128
    __REG32 : 32; // 0x12C
    __REG32 : 32; // 0x130
    
    __REG32 : 32; // 0x134
    __REG32 : 32; // 0x138
    __REG32 : 32; // 0x13C
    __REG32 : 32; // 0x140
    
    __REG32 : 32; // 0x144
    __REG32 : 32; // 0x148
    
    eth_mmctgfsccr_t    MMCTGFSCCR;     // 0x14C
    eth_mmctgfmsccr_t   MMCTGFMSCCR;    // 0x150

    // 20-byte buffer per regmap
    __REG32 : 32; // 0x154
    __REG32 : 32; // 0x158
    __REG32 : 32; // 0x15C
    __REG32 : 32; // 0x160
    __REG32 : 32; // 0x164

    eth_mmctgfcr_t      MMCTGFCR;       // 0x168

    // 40-byte buffer per regmap
    __REG32 : 32; // 0x16C
    __REG32 : 32; // 0x170
    __REG32 : 32; // 0x174
    __REG32 : 32; // 0x178
    __REG32 : 32; // 0x17C
    __REG32 : 32; // 0x180
    __REG32 : 32; // 0x184
    __REG32 : 32; // 0x188
    __REG32 : 32; // 0x18C
    __REG32 : 32; // 0x190

    eth_mmcrfcecr_t     MMCRFCECR;      // 0x194
    eth_mmcrfaecr_t     MMCRFAECR;      // 0x198

    __REG32 : 32; // 0x19C
    __REG32 : 32; // 0x110

    eth_mmcrgufcr_t     MMCRGUFCR;      // 0x1C4
} __attribute__((packed)) eth_mac_regs_t;

// TODO: Needs padding bytes if required
typedef struct
{
    eth_ptptscr_t       TSCR;
    eth_ptpssir_t       SSIR;
    eth_ptptshr_t       TSHR;
    eth_ptptslr_t       TSLR;
    eth_ptptshur_t      TSHUR;
    eth_ptptslur_t      TSLUR;
    eth_ptptsar_t       TSAR;
    eth_ptptthr_t       TTHR;
    eth_ptpttlr_t       TTLR;
    eth_ptptssr_t       TSSR;
    eth_ptpppscr_t      PPSCR;
} __attribute__((packed)) eth_ptp_regs_t;

// TODO: Needs padding bytes if required
typedef struct 
{
    eth_dmabmr_t        BMR;
    eth_dmatpdr_t       TPDR;
    eth_dmarpdr_t       RPDR;
    eth_dmardlar_t      RDLAR;
    eth_dmatdlar_t      TDLAR;
    eth_dmasr_t         SR;
    eth_dmaomr_t        OMR;
    eth_dmaier_t        IER;
    eth_dmamfbocr_t     FBOCR;
    eth_dmarswtr_t      RSWTR;
    eth_dmachtdr_t      CHTDR;
    eth_dmachrdr_t      CHRDR;
    eth_dmachtbar_t     CHTBAR;
    eth_dmachrbar_t     DMACHRBAR;
} __attribute__((packed)) eth_dma_regs_t;

static eth_mac_regs_t *ETHMAC = (eth_mac_regs_t *)ETH_BASEADDR;
static eth_ptp_regs_t *ETHPTP = (eth_ptp_regs_t *)ETH_PTP_BASEADDR;
 static eth_dma_regs_t *ETHDMA = (eth_dma_regs_t *)ETH_DMA_BASEADDR;