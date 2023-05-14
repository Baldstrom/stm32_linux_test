#pragma once

#include "regs.h"

#define GPIOA_BASEADDR              ((__REG32 *)0x40020000U)
#define GPIOB_BASEADDR              ((__REG32 *)0x40020400U)
#define GPIOC_BASEADDR              ((__REG32 *)0x40020800U)
#define GPIOD_BASEADDR              ((__REG32 *)0x40020C00U)
#define GPIOE_BASEADDR              ((__REG32 *)0x40021000U)
#define GPIOF_BASEADDR              ((__REG32 *)0x40021400U)
#define GPIOG_BASEADDR              ((__REG32 *)0x40021800U)
#define GPIOH_BASEADDR              ((__REG32 *)0x40021C00U)
#define GPIOI_BASEADDR              ((__REG32 *)0x40022000U)
#define GPIOJ_BASEADDR              ((__REG32 *)0x40024000U)
#define GPIOK_BASEADDR              ((__REG32 *)0x40028000U)

typedef struct
{
    __REG32 moder0 : 2;
    __REG32 moder1 : 2;
    __REG32 moder2 : 2;
    __REG32 moder3 : 2;
    __REG32 moder4 : 2;
    __REG32 moder5 : 2;
    __REG32 moder6 : 2;
    __REG32 moder7 : 2;
    __REG32 moder8 : 2;
    __REG32 moder9 : 2;
    __REG32 moder10 : 2;
    __REG32 moder11 : 2;
    __REG32 moder12 : 2;
    __REG32 moder13 : 2;
    __REG32 moder14 : 2;
    __REG32 moder15 : 2;
} __attribute__((packed)) gpiox_moder_t;

typedef struct
{
    __REG32 ot0 : 2;
    __REG32 ot1 : 2;
    __REG32 ot2 : 2;
    __REG32 ot3 : 2;
    __REG32 ot4 : 2;
    __REG32 ot5 : 2;
    __REG32 ot6 : 2;
    __REG32 ot7 : 2;
    __REG32 ot8 : 2;
    __REG32 ot9 : 2;
    __REG32 ot10 : 2;
    __REG32 ot11 : 2;
    __REG32 ot12 : 2;
    __REG32 ot13 : 2;
    __REG32 ot14 : 2;
    __REG32 ot15 : 2;
} __attribute__((packed)) gpiox_otyper_t;

typedef struct
{
    __REG32 ospeedr0 : 2;
    __REG32 ospeedr1 : 2;
    __REG32 ospeedr2 : 2;
    __REG32 ospeedr3 : 2;
    __REG32 ospeedr4 : 2;
    __REG32 ospeedr5 : 2;
    __REG32 ospeedr6 : 2;
    __REG32 ospeedr7 : 2;
    __REG32 ospeedr8 : 2;
    __REG32 ospeedr9 : 2;
    __REG32 ospeedr10 : 2;
    __REG32 ospeedr11 : 2;
    __REG32 ospeedr12 : 2;
    __REG32 ospeedr13 : 2;
    __REG32 ospeedr14 : 2;
    __REG32 ospeedr15 : 2;
} __attribute__((packed)) gpiox_ospeedr_t;

typedef struct
{
    __REG32 pupdr0 : 2;
    __REG32 pupdr1 : 2;
    __REG32 pupdr2 : 2;
    __REG32 pupdr3 : 2;
    __REG32 pupdr4 : 2;
    __REG32 pupdr5 : 2;
    __REG32 pupdr6 : 2;
    __REG32 pupdr7 : 2;
    __REG32 pupdr8 : 2;
    __REG32 pupdr9 : 2;
    __REG32 pupdr10 : 2;
    __REG32 pupdr11 : 2;
    __REG32 pupdr12 : 2;
    __REG32 pupdr13 : 2;
    __REG32 pupdr14 : 2;
    __REG32 pupdr15 : 2;
} __attribute__((packed)) gpiox_pupdr_t;

typedef struct
{
    __REG32 idr0 : 1;
    __REG32 idr1 : 1;
    __REG32 idr2 : 1;
    __REG32 idr3 : 1;
    __REG32 idr4 : 1;
    __REG32 idr5 : 1;
    __REG32 idr6 : 1;
    __REG32 idr7 : 1;
    __REG32 idr8 : 1;
    __REG32 idr9 : 1;
    __REG32 idr10 : 1;
    __REG32 idr11 : 1;
    __REG32 idr12 : 1;
    __REG32 idr13 : 1;
    __REG32 idr14 : 1;
    __REG32 idr15 : 1;
    __REG32 : 16;
} __attribute__((packed)) gpiox_idr_t;

typedef struct
{
    __REG32 odr0 : 1;
    __REG32 odr1 : 1;
    __REG32 odr2 : 1;
    __REG32 odr3 : 1;
    __REG32 odr4 : 1;
    __REG32 odr5 : 1;
    __REG32 odr6 : 1;
    __REG32 odr7 : 1;
    __REG32 odr8 : 1;
    __REG32 odr9 : 1;
    __REG32 odr10 : 1;
    __REG32 odr11 : 1;
    __REG32 odr12 : 1;
    __REG32 odr13 : 1;
    __REG32 odr14 : 1;
    __REG32 odr15 : 1;
    __REG32 : 16;
} __attribute__((packed)) gpiox_odr_t;

typedef struct
{
    __REG32 bs0 : 1;
    __REG32 bs1 : 1;
    __REG32 bs2 : 1;
    __REG32 bs3 : 1;
    __REG32 bs4 : 1;
    __REG32 bs5 : 1;
    __REG32 bs6 : 1;
    __REG32 bs7 : 1;
    __REG32 bs8 : 1;
    __REG32 bs9 : 1;
    __REG32 bs10 : 1;
    __REG32 bs11 : 1;
    __REG32 bs12 : 1;
    __REG32 bs13 : 1;
    __REG32 bs14 : 1;
    __REG32 bs15 : 1;
    __REG32 br0 : 1;
    __REG32 br1 : 1;
    __REG32 br2 : 1;
    __REG32 br3 : 1;
    __REG32 br4 : 1;
    __REG32 br5 : 1;
    __REG32 br6 : 1;
    __REG32 br7 : 1;
    __REG32 br8 : 1;
    __REG32 br9 : 1;
    __REG32 br10 : 1;
    __REG32 br11 : 1;
    __REG32 br12 : 1;
    __REG32 br13 : 1;
    __REG32 br14 : 1;
    __REG32 br15 : 1;
} __attribute__((packed)) gpiox_bssr_t;

typedef struct
{
    __REG32 lck0 : 1;
    __REG32 lck1 : 1;
    __REG32 lck2 : 1;
    __REG32 lck3 : 1;
    __REG32 lck4 : 1;
    __REG32 lck5 : 1;
    __REG32 lck6 : 1;
    __REG32 lck7 : 1;
    __REG32 lck8 : 1;
    __REG32 lck9 : 1;
    __REG32 lck10 : 1;
    __REG32 lck11 : 1;
    __REG32 lck12 : 1;
    __REG32 lck13 : 1;
    __REG32 lck14 : 1;
    __REG32 lck15 : 1;
    __REG32 lckk : 1;
    __REG32 : 15;
} __attribute__((packed)) gpiox_lckr_t;

typedef struct 
{
    __REG32 afrl0 : 4;
    __REG32 afrl1 : 4;
    __REG32 afrl2 : 4;
    __REG32 afrl3 : 4;
    __REG32 afrl4 : 4;
    __REG32 afrl5 : 4;
    __REG32 afrl6 : 4;
    __REG32 afrl7 : 4;
} __attribute__((packed)) gpiox_afrl_t;

typedef struct 
{
    __REG32 afrh0 : 4;
    __REG32 afrh1 : 4;
    __REG32 afrh2 : 4;
    __REG32 afrh3 : 4;
    __REG32 afrh4 : 4;
    __REG32 afrh5 : 4;
    __REG32 afrh6 : 4;
    __REG32 afrh7 : 4;
} __attribute__((packed)) gpiox_afrh_t;

typedef struct
{
    gpiox_moder_t       MODER;
    gpiox_otyper_t      OTYPER;
    gpiox_ospeedr_t     OSPEEDR;
    gpiox_pupdr_t       PUPDR;
    gpiox_idr_t         IDR;
    gpiox_odr_t         ODR;
    gpiox_bssr_t        BSSR;
    gpiox_afrl_t        AFRL;
    gpiox_afrh_t        AFRH;
} __attribute__((packed)) gpiox_regs_t;

static gpiox_regs_t *GPIOA = (gpiox_regs_t *)GPIOA_BASEADDR;
static gpiox_regs_t *GPIOB = (gpiox_regs_t *)GPIOB_BASEADDR;
static gpiox_regs_t *GPIOC = (gpiox_regs_t *)GPIOC_BASEADDR;
static gpiox_regs_t *GPIOD = (gpiox_regs_t *)GPIOD_BASEADDR;
static gpiox_regs_t *GPIOE = (gpiox_regs_t *)GPIOE_BASEADDR;
static gpiox_regs_t *GPIOF = (gpiox_regs_t *)GPIOF_BASEADDR;
static gpiox_regs_t *GPIOG = (gpiox_regs_t *)GPIOG_BASEADDR;
static gpiox_regs_t *GPIOH = (gpiox_regs_t *)GPIOH_BASEADDR;
static gpiox_regs_t *GPIOI = (gpiox_regs_t *)GPIOI_BASEADDR;
static gpiox_regs_t *GPIOJ = (gpiox_regs_t *)GPIOJ_BASEADDR;
static gpiox_regs_t *GPIOK = (gpiox_regs_t *)GPIOK_BASEADDR;