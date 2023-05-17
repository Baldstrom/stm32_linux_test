#pragma once

#include "regs.h"

#define ETH_BASEADDR            ((__REG32 *)0x40028000U)
#define ETH_PTP_BASEADDR        ((__REG32 *)0x40028700U)
#define ETH_DMA_BASEADDR        ((__REG32 *)0x40029000U)

typedef struct
{
    __REG32 : 2; // resvd
    __REG32 re : 1;
    __REG32 te : 1;
    __REG32 dc : 1;
    __REG32 bl : 2;
    __REG32 apcs : 1;
    __REG32 : 1;
    __REG32 rd : 1;
    __REG32 ipco : 1;
    __REG32 dm : 1;
    __REG32 lm : 1;
    __REG32 rod : 1;
    __REG32 fes : 1;
    __REG32 : 1;
    __REG32 csd : 1;
    __REG32 ifg : 3;
    __REG32 : 2;
    __REG32 JD : 1;
    __REG32 wd : 1;
    __REG32 : 1; // resvd
    __REG32 cstf : 1;
    __REG32 : 6;
    // MSb at bottom
} __attribute__((packed)) eth_maccr_t;

typedef struct 
{
    __REG32 pm : 1;
    __REG32 hu : 1;
    __REG32 hm : 1;
    __REG32 daif : 1;
    __REG32 pam : 1;
    __REG32 bfd : 1;
    __REG32 pcf : 2;
    __REG32 saf : 1;
    __REG32 hpf : 1;
    __REG32 : 19;
    __REG32 ra : 1;
} __attribute__((packed)) eth_macffr_t;

typedef struct 
{
    __REG32 hth;
} __attribute__((packed)) eth_machthr_t;

typedef struct 
{
    __REG32 htl;
} __attribute__((packed)) eth_machtlr_t;

typedef struct 
{
    __REG32 mb : 1;
    __REG32 mw : 1;
    __REG32 cr : 5;
    __REG32 mr : 5;
    __REG32 pa : 5;
    __REG32 : 16;
} __attribute__((packed)) eth_macmiiar_t;

typedef struct 
{
    __REG32 md : 16;
    __REG32 : 16;
} __attribute__((packed)) eth_macmiidr_t;

typedef struct 
{
    __REG32 fcb_bpa : 1;
    __REG32 tfce : 1;
    __REG32 rfce : 1;
    __REG32 upfd : 1;
    __REG32 plt : 2;
    __REG32 : 1;
    __REG32 zqpd : 1;
    __REG32 : 8;
    __REG32 pt : 16;
} __attribute__((packed)) eth_macfcr_t;

typedef struct 
{
    __REG32 vlanti : 16;
    __REG32 vlantc : 1;
    __REG32 : 15;
} __attribute__((packed)) eth_macvlantr_t;

typedef union 
{
    // Writes to this register must be sequential from top to bottom.
    // See tech ref. sheet page 1154 for more info.
    __REG32 filter0bm;
    __REG32 filter1bm;
    __REG32 filter2bm;
    __REG32 filter3bm;
    struct commandRegister
    {
        __REG32 filter0cmd : 4;
        __REG32 : 4;
        __REG32 filter1cmd : 4;
        __REG32 : 4;
        __REG32 filter2cmd : 4;
        __REG32 : 4;
        __REG32 filter3cmd : 4;
        __REG32 : 4;
    };
    struct offsetRegister
    {
        __REG32 filter0offset : 8;
        __REG32 filter1offset : 8;
        __REG32 filter2offset : 8;
        __REG32 filter3offset : 8;
    };
    struct crcRegister0
    {
        __REG32 filter0crc16 : 16;
        __REG32 filter1crc16 : 16;
    };
    struct crcRegister1
    {
        __REG32 filter2crc16 : 16;
        __REG32 filter3crc16 : 16;
    };
} __attribute__((packed)) eth_macrwuffr_t;

typedef struct 
{
    __REG32 pd : 1;
    __REG32 mpe : 1;
    __REG32 wfe : 1;
    __REG32 : 2;
    __REG32 mpr : 1;
    __REG32 wfr : 1;
    __REG32 : 2;
    __REG32 gu : 1;
    __REG32 : 20;
    __REG32 wffrpr : 1;
} __attribute__((packed)) eth_macpmtcsr_t;

typedef struct 
{
    __REG32 mmrpea : 1;
    __REG32 msfrwcs : 2;
    __REG32 : 1;
    __REG32 rfwra : 1;
    __REG32 rfrcs : 2;
    __REG32 : 1;
    __REG32 rffl : 2;
    __REG32 : 6;
    __REG32 mmtea : 1;
    __REG32 mtfcs : 2;
    __REG32 mtp : 1;
    __REG32 tfrs : 2;
    __REG32 tfwa : 1;
    __REG32 : 1;
    __REG32 tfnegu : 1;
    __REG32 tff : 1;
    __REG32 : 6;
} __attribute__((packed)) eth_macdbgr_t;

typedef struct 
{
    __REG32 : 3;
    __REG32 pmts : 1;
    __REG32 mmcs : 1;
    __REG32 mmcrs : 1;
    __REG32 mmcts : 1;
    __REG32 : 2;
    __REG32 tsts : 1;
    __REG32 : 6;
    __REG32 : 16;
} __attribute__((packed)) eth_macsr_t;

typedef struct 
{
    __REG32 : 6;
    __REG32 tstim : 1;
    __REG32 : 5;
    __REG32 pmtim : 1;
    __REG32 : 3;
    __REG32 : 16;
} __attribute__((packed)) eth_macimr_t;

typedef struct 
{
    __REG32 maca0h : 16;
    __REG32 : 15;
    __REG32 mo : 1;
} __attribute__((packed)) eth_maca0hr_t;

typedef struct 
{
    __REG32 maca0l;
} __attribute__((packed)) eth_maca0lr_t;

typedef struct 
{
    __REG32 maca1h : 16;
    __REG32 : 8;
    __REG32 mbc : 6;
    __REG32 sa : 1;
    __REG32 ae : 1;
} __attribute__((packed)) eth_maca1hr_t;

typedef struct 
{
    __REG32 maca1l;
} __attribute__((packed)) eth_maca1lr_t;

typedef struct 
{
    __REG32 maca2h : 16;
    __REG32 : 8;
    __REG32 mbc : 6;
    __REG32 sa : 1;
    __REG32 ae : 1;
} __attribute__((packed)) eth_maca2hr_t;

typedef struct 
{
    __REG32 maca2l;
} __attribute__((packed)) eth_maca2lr_t;

typedef struct 
{
    __REG32 maca3h : 16;
    __REG32 : 8;
    __REG32 mbc : 6;
    __REG32 sa : 1;
    __REG32 ae : 1;
} __attribute__((packed)) eth_maca3hr_t;

typedef struct 
{
    __REG32 maca3l;
} __attribute__((packed)) eth_maca3lr_t;

typedef struct 
{
    __REG32 cr : 1;
    __REG32 csr : 1;
    __REG32 ror : 1;
    __REG32 mcf : 1;
    __REG32 mcp : 1;
    __REG32 mcfhp : 1;
    __REG32 : 25;
} __attribute__((packed)) eth_mmccr_t;

typedef struct 
{
    __REG32 : 5;
    __REG32 rfces : 1;
    __REG32 rfaes : 1;
    __REG32 : 10;
    __REG32 rgufs : 1;
    __REG32 : 14;
} __attribute__((packed)) eth_mmcrir_t;

typedef struct 
{
    __REG32 : 14;
    __REG32 tgfscs : 1;
    __REG32 tgfmscs : 1;
    __REG32 : 5;
    __REG32 tgfs : 1;
    __REG32 : 10;
} __attribute__((packed)) eth_mmctir_t;

typedef struct 
{
    __REG32 : 5;
    __REG32 rfcem : 1;
    __REG32 rfaem : 1;
    __REG32 : 10;
    __REG32 rgufm : 1;
    __REG32 : 14;
} __attribute__((packed)) eth_mmcrimr_t;

typedef struct 
{
    __REG32 : 14;
    __REG32 tgfscm : 1;
    __REG32 tgfmscm : 1;
    __REG32 : 4;
    __REG32 tgfm : 1;
    __REG32 : 9;
} __attribute__((packed)) eth_mmctimr_t;

typedef struct 
{
    __REG32 tgfscc;
} __attribute__((packed)) eth_mmctgfsccr_t;

typedef struct 
{
    __REG32 tgfmscc;
} __attribute__((packed)) eth_mmctgfmsccr_t;

typedef struct 
{
    __REG32 tgfc;
} __attribute__((packed)) eth_mmctgfcr_t;

typedef struct 
{
    __REG32 rfcec;
} __attribute__((packed)) eth_mmcrfcecr_t;

typedef struct 
{
    __REG32 rfaec;
} __attribute__((packed)) eth_mmcrfaecr_t;

typedef struct 
{
    __REG32 rgufc;
} __attribute__((packed)) eth_mmcrgufcr_t;

typedef struct 
{    
    __REG32 tse : 1;
    __REG32 tsfcu : 1;
    __REG32 tssti : 1;
    __REG32 tsstu : 1;
    __REG32 tsite : 1;
    __REG32 ttsaru : 1;
    __REG32 : 2;
    __REG32 tssarfe : 1;
    __REG32 tsssr : 1;
    __REG32 tsptppsv2e : 1;
    __REG32 tssptpoefe : 1;
    __REG32 tssipv6fe : 1;
    __REG32 tssipv4fe : 1;
    __REG32 tsseme : 1;
    __REG32 tssmrme : 1;
    __REG32 tscnt : 2;
    __REG32 tspffmae : 1;
    __REG32 : 13;
} __attribute__((packed)) eth_ptptscr_t;

typedef struct 
{
    __REG32 stssi : 8;
    __REG32 : 24;
} __attribute__((packed)) eth_ptpssir_t;

typedef struct 
{
    __REG32 sts;
} __attribute__((packed)) eth_ptptshr_t;

typedef struct 
{
    __REG32 stss : 31;
    __REG32 stpns : 1;
} __attribute__((packed)) eth_ptptslr_t;

typedef struct 
{
    __REG32 tsus;
} __attribute__((packed)) eth_ptptshur_t;

typedef struct 
{
    __REG32 tsuss : 31;
    __REG32 tsupns : 1;
} __attribute__((packed)) eth_ptptslur_t;

typedef struct 
{
    __REG32 tsa;
} __attribute__((packed)) eth_ptptsar_t;

typedef struct 
{
    __REG32 ttsh;
} __attribute__((packed)) eth_ptptthr_t;

typedef struct 
{
    __REG32 ttsl;
} __attribute__((packed)) eth_ptpttlr_t;

typedef struct 
{
    __REG32 tsso : 1;
    __REG32 tsttr : 1;
    __REG32 : 30;
} __attribute__((packed)) eth_ptptssr_t;

typedef struct 
{
    __REG32 ppsfreq : 3;
    __REG32 : 29;
} __attribute__((packed)) eth_ptpppscr_t;

typedef struct 
{
    __REG32 sr : 1;
    __REG32 da : 1;
    __REG32 dsl : 5;
    __REG32 edfe : 1;
    __REG32 pbl : 5;
    __REG32 pm : 2;
    __REG32 fb : 1;
    __REG32 rdp : 1;
    __REG32 usp : 1;
    __REG32 fpm : 1;
    __REG32 aab : 1;
    __REG32 mp : 1;
    __REG32 : 5;
} __attribute__((packed)) eth_dmabmr_t;

typedef struct 
{
    __REG32 tpd;
} __attribute__((packed)) eth_dmatpdr_t;

typedef struct 
{
    __REG32 rpd;
} __attribute__((packed)) eth_dmarpdr_t;

typedef struct 
{
    __REG32 srl;
} __attribute__((packed)) eth_dmardlar_t;

typedef struct 
{
    __REG32 stl;
} __attribute__((packed)) eth_dmatdlar_t;

typedef struct 
{
    __REG32 ts : 1;
    __REG32 tpss : 1;
    __REG32 tbus : 1;
    __REG32 tjts : 1;
    __REG32 ros : 1;
    __REG32 tus : 1;
    __REG32 rs : 1;
    __REG32 rbus : 1;
    __REG32 rpss : 1;
    __REG32 rwts : 1;
    __REG32 ets : 1;
    __REG32 : 2;
    __REG32 fbes : 1;
    __REG32 ers : 1;
    __REG32 ais : 1;
    __REG32 nis : 1;
    __REG32 rps : 3;
    __REG32 tps : 3;
    __REG32 ebs : 3;
    __REG32 : 1;
    __REG32 mmcs : 1;
    __REG32 pmts : 1;
    __REG32 tsts : 1;
    __REG32 : 2;
} __attribute__((packed)) eth_dmasr_t;

typedef struct 
{
    __REG32 : 1;
    __REG32 sr : 1;
    __REG32 osf : 1;
    __REG32 rtc : 2;
    __REG32 : 1;
    __REG32 fugf : 1;
    __REG32 fef : 1;
    __REG32 : 5;
    __REG32 st : 1;
    __REG32 ttc : 3;
    __REG32 : 3;
    __REG32 ftf : 1;
    __REG32 tsf : 1;
    __REG32 : 2;
    __REG32 dfrf : 1;
    __REG32 rsf : 1;
    __REG32 dtcefd : 1;
    __REG32 : 5;
} __attribute__((packed)) eth_dmaomr_t;

typedef struct 
{
    __REG32 tie : 1;
    __REG32 tpsie : 1;
    __REG32 tbuie : 1;
    __REG32 tjtie : 1;
    __REG32 roie : 1;
    __REG32 tuie : 1;
    __REG32 rie : 1;
    __REG32 rbuie : 1;
    __REG32 rpsie : 1;
    __REG32 rwtie : 1;
    __REG32 etie : 1;
    __REG32 : 2;
    __REG32 fbeie : 1;
    __REG32 erie : 1;
    __REG32 aise : 1;
    __REG32 nise : 1;
    __REG32 : 15;
} __attribute__((packed)) eth_dmaier_t;

typedef struct 
{
    __REG32 mfc : 16;
    __REG32 omfc : 1;
    __REG32 mfa : 11;
    __REG32 ofoc : 1;
    __REG32 : 3;
} __attribute__((packed)) eth_dmamfbocr_t;

typedef struct 
{
    __REG32 rswtc : 8;
    __REG32 : 24;
} __attribute__((packed)) eth_dmarswtr_t;

typedef struct 
{
    __REG32 htdap;
} __attribute__((packed)) eth_dmachtdr_t;

typedef struct 
{
    __REG32 hrdap;
} __attribute__((packed)) eth_dmachrdr_t;

typedef struct 
{
    __REG32 htbap;
} __attribute__((packed)) eth_dmachtbar_t;

typedef struct 
{
    __REG32 hrbap;
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