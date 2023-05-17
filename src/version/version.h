#pragma once

#include "stdint.h"

#define SW_IDENT_FORMAT_VERSION     (0x00000001U) // Roll this number up if format changes
#define SW_IGNORE_CRC_FLAG          (0xAAAAAAAAU)
#define SW_AUTHENTICATION_BYTES     (256U)

#define SW_DEFAULT_CRC              (0xDEADBEEFU)
#define SW_IDENT_DEFAULT_CRC        (0x4444AAAAU)

#ifdef DEBUG
    #define SW_CRC                      (SW_DEFAULT_CRC)
    #define SW_IDENT_CRC                (SW_IDENT_DEFAULT_CRC)
    #define SW_IGNORE_CRC               (SW_IGNORE_CRC_FLAG)
#else
    #define SW_IGNORE_CRC               (0xFFFFFFFFU) // DO *NOT* Ignore CRC by default
    #define SW_CRC                      (0x00000000U) // Default to zeros, should be computed in postbuild step for release builds
    #define SW_IDENT_CRC                (0x00000000U)
#endif

typedef struct
{
    const uint32_t FormatVersion;
    const char *VersionName;
    const uint32_t IgnoreCrcFlag; // Set to any other value for production builds
    const uint32_t SoftwareCrc;
    const uint32_t SoftwareAuth[SW_AUTHENTICATION_BYTES >> 2];
    const uint32_t IdentCrc;
} SoftwareIdentField_Type;

static const SoftwareIdentField_Type SoftwareIdent __attribute__((used)) = 
{
    SW_IDENT_FORMAT_VERSION,
    "DevelopmentBuild",
    SW_IGNORE_CRC,
    SW_CRC,
    {
        0x00000000, 0x00000000, 0x00000000, 0x00000000,
        0x00000000, 0x00000000, 0x00000000, 0x00000000,
        0x00000000, 0x00000000, 0x00000000, 0x00000000,
        0x00000000, 0x00000000, 0x00000000, 0x00000000,
        0x00000000, 0x00000000, 0x00000000, 0x00000000,
        0x00000000, 0x00000000, 0x00000000, 0x00000000,
        0x00000000, 0x00000000, 0x00000000, 0x00000000,
        0x00000000, 0x00000000, 0x00000000, 0x00000000,
        0x00000000, 0x00000000, 0x00000000, 0x00000000,
        0x00000000, 0x00000000, 0x00000000, 0x00000000,
        0x00000000, 0x00000000, 0x00000000, 0x00000000,
        0x00000000, 0x00000000, 0x00000000, 0x00000000,
        0x00000000, 0x00000000, 0x00000000, 0x00000000,
        0x00000000, 0x00000000, 0x00000000, 0x00000000,
        0x00000000, 0x00000000, 0x00000000, 0x00000000,
        0x00000000, 0x00000000, 0x00000000, 0x00000000
    },
    SW_IDENT_CRC
};
