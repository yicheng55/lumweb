//*****************************************************************************
//
// fontcmss24b.c - Font definition for the 24 point Cmss bold font.
//
// Copyright (c) 2008-2009 Luminary Micro, Inc.  All rights reserved.
// Software License Agreement
// 
// Luminary Micro, Inc. (LMI) is supplying this software for use solely and
// exclusively on LMI's microcontroller products.
// 
// The software is owned by LMI and/or its suppliers, and is protected under
// applicable copyright laws.  All rights are reserved.  You may not combine
// this software with "viral" open-source software in order to form a larger
// program.  Any use in violation of the foregoing restrictions may subject
// the user to criminal sanctions under applicable laws, as well as to civil
// liability for the breach of the terms and conditions of this license.
// 
// THIS SOFTWARE IS PROVIDED "AS IS".  NO WARRANTIES, WHETHER EXPRESS, IMPLIED
// OR STATUTORY, INCLUDING, BUT NOT LIMITED TO, IMPLIED WARRANTIES OF
// MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE APPLY TO THIS SOFTWARE.
// LMI SHALL NOT, IN ANY CIRCUMSTANCES, BE LIABLE FOR SPECIAL, INCIDENTAL, OR
// CONSEQUENTIAL DAMAGES, FOR ANY REASON WHATSOEVER.
// 
// This is part of revision 4905 of the Stellaris Graphics Library.
//
//*****************************************************************************

//*****************************************************************************
//
// This file is generated by ftrasterize; DO NOT EDIT BY HAND!
//
//*****************************************************************************

#include "grlib/grlib.h"

//*****************************************************************************
//
// Details of this font:
//     Style: cmss
//     Size: 24 point
//     Bold: yes
//     Italic: no
//     Memory usage: 2808 bytes
//
//*****************************************************************************

//*****************************************************************************
//
// The compressed data for the 24 point Cmss bold font.
//
//*****************************************************************************
static const unsigned char g_pucCmss24bData[2606] =
{
      5,  10,   0,  31,  32,  21,   5, 163,  35,  35,  35,  35,
     35,  35,  35,  35,  35,  35,  35,  35, 115,  35,  35, 240,
    240,  32,  18,  10, 240,  83,  35,  35,  35,  35,  35,  50,
     50,  34,  50,  50,  50,   0,  21,  80,  51,  21,   0,   6,
     49,  66, 210,  66, 210,  66, 210,  50, 211,  50, 210,  66,
    210,  51, 111,   4,  47,   4, 130,  66, 210,  50, 226,  50,
    210,  66, 143,   4,  47,   4,  99,  50, 210,  66, 210,  51,
    210,  50, 210,  66, 210,  66, 210,  65, 240, 240,  32,  37,
     13,  82, 178, 150,  90,  36,  18,  34,  35,  34,  99,  34,
    100,  18, 103, 120, 104, 119, 118, 114,  19, 114,  19,  33,
     66,  19,  35,  34,  19,  42,  73, 116, 162,   0,   7,  32,
     57,  24, 240, 181, 162, 103, 131,  83,  36,  99,  99,  51,
     98, 115,  51,  82, 131,  51,  67, 131,  51,  51, 162,  35,
     51, 183,  50, 240,  98, 240,  99,  54, 179,  66,  35, 147,
     67,  35, 146,  83,  35, 131,  83,  35, 115,  99,  35,  99,
    115,  35,  98, 150, 113, 180,   0,  15,  64,  41,  20,   0,
      5, 100, 231, 211,  35, 179,  51, 179,  51, 179,  51, 179,
     35, 199,  82, 116,  99, 116,  99,  87,  67,  83,  35,  67,
     83,  36,  35,  84,  55, 115,  69, 143,   2,  86,  54,   0,
     15,  32,  10,   5, 163,  35,  35,  50,  34,  50,   0,  11,
     28,   8,  66,  98,  82,  83,  82,  83,  83,  82,  83,  83,
     83,  83,  83,  83,  83,  83,  83,  98,  99,  83,  98,  99,
     98,  99,  98,  32,  28,   8,   2,  99,  98,  99,  98,  99,
     83,  98,  99,  83,  83,  83,  83,  83,  83,  83,  83,  82,
     83,  83,  82,  98,  82,  83,  82,  96,  29,  13,  67, 163,
    113,  35,  33,  51,  33,  35,  51,  17,  19, 101, 133,  99,
     17,  19,  51,  33,  35,  49,  35,  33, 115, 163,   0,  21,
    112,  43,  20,   0,   8,  66, 240,  50, 240,  50, 240,  50,
    240,  50, 240,  50, 240,  50, 240,  50, 240,  50, 175,   3,
     47,   3, 162, 240,  50, 240,  50, 240,  50, 240,  50, 240,
     50, 240,  50, 240,  50,   0,   8,  96,  12,   5,   0,  10,
      3,  35,  35,  50,  34,  50, 240,  48,   9,   9,   0,  13,
     71,  39,   0,  12,  80,  10,   5,   0,  10,   3,  35,  35,
    240, 240,  32,  28,  12, 130, 162, 147, 146, 162, 146, 162,
    162, 146, 162, 162, 146, 162, 162, 146, 162, 162, 146, 162,
    162, 146, 162, 147, 146, 162, 160,  36,  13, 240, 229, 119,
     83,  51,  66,  82,  51,  83,  35,  83,  35,  83,  35,  83,
     35,  83,  35,  83,  35,  83,  35,  83,  35,  83,  51,  66,
     67,  51,  87, 117,   0,  10,  48,  23,  11, 240, 178, 131,
     86, 131, 131, 131, 131, 131, 131, 131, 131, 131, 131, 131,
    131,  89,  41,   0,   8,  64,  26,  12, 240, 181, 104,  51,
     51,  50,  83,  49,  83, 147, 147, 131, 147, 131, 131, 130,
    146, 146, 154,  42,  42,   0,   9,  32,  27,  12, 240, 181,
    104,  51,  51,  65,  67, 147, 147, 147, 101, 117, 163, 163,
    147, 147,  33,  99,  34,  68,  41,  85,   0,   9,  80,  30,
     14, 240, 240,  68, 149, 149, 134, 130,  19, 115,  19, 114,
     35,  99,  35,  98,  51,  83,  51,  82,  67,  76,  59, 147,
    179, 179, 179,   0,  11,  27,  12, 240, 168,  72,  67, 147,
    147, 147, 151,  88,  67,  51,  50,  67, 147, 147, 147,  34,
     83,  35,  51,  72,  85,   0,   9,  80,  33,  13, 240, 245,
    118,  99, 147, 162, 163,  36,  67,  22,  52,  51,  51,  83,
     35,  83,  35,  83,  35,  83,  35,  83,  50,  83,  51,  51,
     88, 101,   0,  10,  48,  23,  12, 240, 154,  42,  42, 146,
    146, 147, 146, 147, 146, 147, 147, 146, 147, 147, 147, 147,
    147,   0,   9, 112,  34,  13, 240, 230,  89,  52,  52,  35,
     83,  35,  83,  35,  83,  51,  51,  87, 103,  83,  51,  51,
     83,  35,  83,  35,  83,  35,  83,  36,  52,  57, 101,   0,
     10,  48,  34,  13, 240, 229, 104,  83,  51,  51,  82,  51,
     83,  35,  83,  35,  83,  35,  83,  35,  83,  51,  52,  54,
     19,  68,  35, 163, 147,  65,  68,  72, 101,   0,  10,  64,
     14,   5, 240, 240, 163,  35,  35, 240, 195,  35,  35, 240,
    240,  32,  16,   5, 240, 240, 163,  35,  35, 240, 195,  35,
     35,  50,  34,  50, 240,  48,  21,   5, 240, 240,  83,  35,
     35, 115,  35,  35,  35,  35,  35,  35,  35,  35,  35,  35,
     35,  35, 112,  17,  20,   0,  22,  79,   3,  47,   3,   0,
     10,  47,   3,  47,   3,   0,  20,  32,  24,  11,   0,  10,
      3, 131, 131, 240,  67, 131, 131, 131, 115, 131, 115, 115,
    131, 131,  81,  35,  66,  56,  69, 240,  25,  12, 240, 182,
     73,  51,  67,  49,  83, 147, 147, 116, 131, 131, 131, 147,
    147, 147, 240,  99, 147, 147,   0,   9,  96,  44,  17, 240,
    240, 151, 138, 100,  83,  68,  55,  51,  41,  35,  51,  36,
     35,  35,  67,  35,  35,  67,  35,  35,  67,  35,  35,  67,
     35,  35,  67,  35,  51,  35,  67,  40,  68,  37, 116,  99,
     91, 135,   0,  13,  48,  36,  18, 240, 240, 196, 214, 198,
    179,  19, 179,  20, 163,  20, 147,  51, 147,  52, 131,  52,
    115,  83, 115,  84, 108,  93,  83, 116,  67, 116,  51, 147,
     51, 148,   0,  13,  96,  35,  16, 240, 240,  43,  92,  67,
    100,  51, 115,  51, 115,  51, 115,  51, 100,  59,  92,  67,
    100,  51, 116,  35, 131,  35, 131,  35, 131,  35, 116,  45,
     59,   0,  12,  80,  26,  15, 240, 240,  87, 106,  67,  83,
     51, 195, 179, 195, 195, 195, 195, 195, 195, 211, 195, 212,
     82,  90, 118,   0,  11,  96,  37,  17, 240, 240,  75, 108,
     83, 100,  67, 131,  51, 131,  51, 147,  35, 147,  35, 147,
     35, 147,  35, 147,  35, 147,  35, 147,  35, 146,  51, 131,
     51, 100,  76,  90,   0,  13,  80,  23,  14, 240, 219,  59,
     59,  51, 179, 179, 179, 186,  74,  67, 179, 179, 179, 179,
    187,  60,  43,   0,  10, 112,  22,  13, 240, 187,  43,  43,
     35, 163, 163, 163, 163, 170,  58,  51, 163, 163, 163, 163,
    163, 163,   0,  11,  32,  17, 240, 240, 167, 124,  68,  99,
     52, 145,  51, 211, 227, 227, 227, 227, 102,  35, 102,  35,
    147,  51, 131,  52, 115,  68,  99,  92, 120,   0,  13,  32,
     39,  16, 240, 240,  35, 131,  35, 131,  35, 131,  35, 131,
     35, 131,  35, 131,  35, 131,  46,  46,  35, 131,  35, 131,
     35, 131,  35, 131,  35, 131,  35, 131,  35, 131,  35, 131,
      0,  12,  32,  22,   5, 163,  35,  35,  35,  35,  35,  35,
     35,  35,  35,  35,  35,  35,  35,  35,  35,  35, 240, 240,
     32,  24,  11, 240, 211, 131, 131, 131, 131, 131, 131, 131,
    131, 131, 131, 131, 131, 131,  49,  67,  40,  85,   0,   8,
     96,  39,  16, 240, 240,  35, 131,  35, 116,  35, 100,  51,
     84,  67,  67,  99,  51, 115,  20, 136, 137, 117,  20, 100,
     51,  99,  68,  83,  84,  67,  99,  67, 115,  51, 116,  35,
    131,   0,  12,  32,  23,  12, 240, 147, 147, 147, 147, 147,
    147, 147, 147, 147, 147, 147, 147, 147, 147, 147, 154,  42,
      0,   9,  32,  59,  21, 240, 240, 197, 149,  37, 149,  37,
    149,  38, 118,  38, 118,  35,  19,  83,  19,  35,  19,  83,
     19,  35,  34,  82,  35,  35,  35,  51,  35,  35,  35,  51,
     35,  35,  51,  34,  51,  35,  51,  19,  51,  35,  66,  18,
     67,  35,  69,  67,  35,  69,  67,  35,  83,  83,  35, 211,
      0,  16,  49,  17, 240, 240,  69, 115,  37, 115,  38,  99,
     39,  83,  35,  19,  83,  35,  20,  67,  35,  35,  67,  35,
     36,  51,  35,  51,  51,  35,  52,  35,  35,  67,  35,  35,
     68,  19,  35,  83,  19,  35,  87,  35, 102,  35, 117,  35,
    117,   0,  13,  37,  18, 240, 240, 182, 170, 115,  84,  83,
    131,  67, 131,  51, 163,  35, 163,  35, 163,  35, 163,  35,
    163,  35, 163,  35, 163,  51, 131,  67, 131,  84,  68, 122,
    166,   0,  14,  48,  29,  15, 240, 250,  92,  51, 100,  35,
    115,  35, 115,  35, 115,  35, 115,  35,  99,  60,  58,  83,
    195, 195, 195, 195, 195, 195,   0,  12,  96,  42,  18, 240,
    240, 182, 170, 116,  68,  83, 131,  67, 131,  51, 163,  35,
    163,  35, 163,  35, 163,  35, 163,  35, 163,  35, 163,  51,
     51,  36,  51,  52,  19,  84,  39, 107, 153, 228, 244, 228,
      0,   7,  16,  36,  15, 240, 250,  92,  51, 100,  35, 115,
     35, 115,  35, 115,  35, 100,  44,  58,  83,  52,  83,  67,
     83,  68,  67,  83,  67,  84,  51,  99,  51, 115,  35, 115,
      0,  11,  64,  28,  14, 240, 240,  23,  90,  52,  67,  51,
    113,  51, 180, 183, 121, 120, 150, 164, 179,  33, 131,  35,
     84,  43,  74, 102,   0,  11,  16,  24,  17, 240, 240,  79,
     47,  47, 131, 227, 227, 227, 227, 227, 227, 227, 227, 227,
    227, 227, 227, 227,   0,  13,  96,  39,  16, 240, 240,  35,
    131,  35, 131,  35, 131,  35, 131,  35, 131,  35, 131,  35,
    131,  35, 131,  35, 131,  35, 131,  35, 131,  35, 131,  35,
    131,  36, 115,  52,  83,  90, 134,   0,  12,  96,  36,  18,
    240, 240,  99, 163,  36, 132,  36, 131,  67, 131,  68, 100,
     68,  99,  99,  84, 100,  67, 116,  67, 132,  36, 132,  35,
    163,  35, 168, 167, 198, 198, 197,   0,  14,  64,  61,  25,
      0,   6,  35, 116, 114,  35, 101,  99,  35, 101,  99,  35,
    101,  99,  51,  67,  19,  82,  67,  67,  19,  67,  67,  67,
     19,  67,  68,  50,  35,  67,  83,  35,  51,  35,  99,  35,
     51,  35,  99,  35,  51,  35, 100,  18,  83,  18, 134,  86,
    134,  86, 133, 102, 133, 116, 164, 116,   0,  19,  64,  35,
     18, 240, 240, 101, 100,  68,  84, 100,  68, 116,  36, 132,
     20, 167, 198, 212, 228, 214, 184, 148,  20, 148,  36, 116,
     68,  84, 100,  68, 100,  52, 132,   0,  13,  96,  31,  17,
    240, 240,  67, 147,  36, 116,  52,  99,  68,  84,  84,  52,
    116,  35, 132,  20, 151, 181, 196, 227, 227, 227, 227, 227,
    227, 227,   0,  13,  96,  23,  15, 240, 253,  45, 164, 180,
    164, 164, 179, 180, 164, 179, 180, 164, 179, 179, 189,  45,
     45,   0,  11,  64,  27,   7, 117,  37,  35,  67,  67,  67,
     67,  67,  67,  67,  67,  67,  67,  67,  67,  67,  67,  67,
     67,  67,  67,  67,  69,  37,  32,  18,  10, 240,  98,  50,
     50,  50,  34,  50,  51,  35,  35,  35,  35,  35,   0,  21,
     64,  27,   7, 117,  37,  67,  67,  67,  67,  67,  67,  67,
     67,  67,  67,  67,  67,  67,  67,  67,  67,  67,  67,  67,
     67,  37,  37,  32,  12,   9, 240,  83,  85,  51,  19,  34,
     50,   0,  21,  80,   8,   5, 163,  35,  35,   0,  12,  96,
     11,   5, 178,  50,  34,  51,  35,  35,   0,  10, 112,  23,
     12,   0,  12,  38,  88,  66,  67, 147, 147,  72,  35,  67,
     35,  67,  35,  52,  57,  67,  35,   0,   9,  32,  32,  13,
    240, 179, 163, 163, 163, 163, 163, 163,  21,  74,  51,  68,
     35,  83,  35,  83,  35,  83,  35,  83,  35,  83,  35,  67,
     58,  51,  20,   0,  10,  48,  20,  12,   0,  12,  53,  89,
     51,  65,  51, 147, 147, 147, 147, 163,  66,  57,  85,   0,
      9,  64,  32,  13, 240, 240,  67, 163, 163, 163, 163, 163,
     69,  19,  58,  51,  67,  35,  83,  35,  83,  35,  83,  35,
     83,  35,  83,  51,  52,  58,  69,  19,   0,  10,  22,  13,
      0,  13,  53, 105,  67,  52,  35,  83,  35,  83,  43,  35,
    163, 179,  82,  58,  86,   0,  10,  32,  24,  10, 240, 133,
     70,  51,  49,  51, 115, 115, 102,  70,  83, 115, 115, 115,
    115, 115, 115, 115, 115,   0,   8,  32,  30,  13,   0,  13,
     38,  18,  58,  35,  51,  67,  51,  67,  51,  67,  51,  88,
     86, 120,  89,  74,  34,  99,  34, 114,  35,  83,  57,  87,
    240,  32,  33,  13, 240, 179, 163, 163, 163, 163, 163, 163,
     37,  51,  23,  36,  67,  35,  83,  35,  83,  35,  83,  35,
     83,  35,  83,  35,  83,  35,  83,  35,  83,   0,  10,  20,
      5, 163,  35,  35, 240,  35,  35,  35,  35,  35,  35,  35,
     35,  35,  35,  35, 240, 240,  32,  24,   8, 240,  67,  83,
     83, 240, 227,  83,  83,  83,  83,  83,  83,  83,  83,  83,
     83,  83,  83,  83,  38,  37, 176,  30,  12, 240, 147, 147,
    147, 147, 147, 147, 147,  52,  35,  36,  51,  20,  71,  86,
    103,  88,  67,  35,  67,  51,  51,  52,  35,  67,   0,   9,
     32,  22,   5, 163,  35,  35,  35,  35,  35,  35,  35,  35,
     35,  35,  35,  35,  35,  35,  35,  35, 240, 240,  32,  40,
     20,   0,  20,   3,  37,  52,  51,  23,  22,  36,  68,  51,
     35,  83,  67,  35,  83,  67,  35,  83,  67,  35,  83,  67,
     35,  83,  67,  35,  83,  67,  35,  83,  67,  35,  83,  67,
      0,  15,  32,  28,  13,   0,  13,   3,  37,  51,  23,  36,
     67,  35,  83,  35,  83,  35,  83,  35,  83,  35,  83,  35,
     83,  35,  83,  35,  83,   0,  10,  25,  13,   0,  13,  53,
    105,  67,  51,  51,  83,  35,  83,  35,  83,  35,  83,  35,
     83,  51,  51,  73, 101,   0,  10,  48,  31,  13,   0,  13,
      3,  21,  74,  51,  68,  35,  83,  35,  83,  35,  83,  35,
     83,  35,  83,  35,  67,  58,  51,  20,  83, 163, 163, 163,
    163, 240, 128,  30,  13,   0,  13,  52,  19,  58,  51,  52,
     35,  83,  35,  83,  35,  83,  35,  83,  35,  83,  51,  52,
     58,  69,  19, 163, 163, 163, 163, 163, 240,  20,   9,   0,
      9,   3,  34,  35,  19,  37,  68,  83,  99,  99,  99,  99,
     99,  99,   0,   7,  64,  20,  10,   0,  10,  37,  71,  35,
     50,  35, 118,  86, 116, 130,  34,  66,  40,  69,   0,   7,
    112,  22,  11,   0,   5,  99, 131, 131, 131, 104,  56,  83,
    131, 131, 131, 131, 131, 131, 135,  84,   0,   8,  96,  28,
     13,   0,  13,   3,  83,  35,  83,  35,  83,  35,  83,  35,
     83,  35,  83,  35,  83,  35,  83,  35,  83,  35,  68,  54,
     19,   0,  10,  26,  13,   0,  13,   3,  83,  35,  83,  51,
     51,  67,  51,  67,  51,  83,  19,  99,  19,  99,  19, 117,
    133, 133,   0,  10,  48,  36,  19,   0,  19,   3,  67,  67,
     35,  67,  67,  36,  51,  66,  67,  37,  35,  67,  37,  35,
     67,  37,  35,  85,  34,  34, 101,  38, 101,  38, 101,  53,
    115,  68,   0,  14, 112,  24,  13,   0,  13,   3,  83,  51,
     51,  83,  19, 102, 133, 147, 149, 115,  19,  83,  51,  67,
     51,  51,  83,   0,  10,  30,  12,   0,  12,   3,  67,  35,
     67,  51,  50,  67,  35,  82,  35,  83,  18,  99,  18, 117,
    116, 147, 147, 146, 162,  97,  35, 101, 116, 240,  80,  18,
     12,   0,  12,  10,  42, 131, 131, 131, 132, 116, 131, 131,
    138,  42,   0,   9,  32,   9,  15,   0,  20,  93,  45,   0,
     22,  96,  11,  28,   0,  38,  79,  11,  47,  11,   0,  42,
     32,  14,  10, 240,  84,  19,  35,  34,  50,  35,  50,  34,
      0,  24,  32,  11,  11, 240, 132,  34,  41,  34,  36,   0,
     27, 112,
};

//*****************************************************************************
//
// The font definition for the 24 point Cmss bold font.
//
//*****************************************************************************
const tFont g_sFontCmss24b =
{
    //
    // The format of the font.
    //
    FONT_FMT_PIXEL_RLE,

    //
    // The maximum width of the font.
    //
    25,

    //
    // The height of the font.
    //
    25,

    //
    // The baseline of the font.
    //
    19,

    //
    // The offset to each character in the font.
    //
    {
           0,    5,   26,   44,   95,  132,  189,  230,
         240,  268,  296,  325,  368,  380,  389,  399,
         427,  463,  486,  512,  539,  569,  596,  629,
         652,  686,  720,  734,  750,  771,  788,  812,
         837,  881,  917,  952,  978, 1015, 1038, 1060,
        1092, 1131, 1153, 1177, 1216, 1239, 1298, 1347,
        1384, 1413, 1455, 1491, 1519, 1543, 1582, 1618,
        1679, 1714, 1745, 1768, 1795, 1813, 1840, 1852,
        1860, 1871, 1894, 1926, 1946, 1978, 2000, 2024,
        2054, 2087, 2107, 2131, 2161, 2183, 2223, 2251,
        2276, 2307, 2337, 2357, 2377, 2399, 2427, 2453,
        2489, 2513, 2543, 2561, 2570, 2581, 2595,
    },

    //
    // A pointer to the actual font data
    //
    g_pucCmss24bData
};
