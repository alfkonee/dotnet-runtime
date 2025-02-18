// Licensed to the .NET Foundation under one or more agreements.
// The .NET Foundation licenses this file to you under the MIT license.

// clang-format off

/*****************************************************************************/
/*****************************************************************************/
#ifndef REGDEF
#error  Must define REGDEF macro before including this file
#endif
#ifndef REGALIAS
#define REGALIAS(alias, realname)
#endif

#if defined(TARGET_XARCH)

#if defined(TARGET_X86)
/*
REGDEF(name, rnum,   mask, sname) */
REGDEF(EAX,     0,   0x01, "eax"   )
REGDEF(ECX,     1,   0x02, "ecx"   )
REGDEF(EDX,     2,   0x04, "edx"   )
REGDEF(EBX,     3,   0x08, "ebx"   )
REGDEF(ESP,     4,   0x10, "esp"   )
REGDEF(EBP,     5,   0x20, "ebp"   )
REGDEF(ESI,     6,   0x40, "esi"   )
REGDEF(EDI,     7,   0x80, "edi"   )
REGALIAS(RAX, EAX)
REGALIAS(RCX, ECX)
REGALIAS(RDX, EDX)
REGALIAS(RBX, EBX)
REGALIAS(RSP, ESP)
REGALIAS(RBP, EBP)
REGALIAS(RSI, ESI)
REGALIAS(RDI, EDI)

#else // !defined(TARGET_X86)

/*
REGDEF(name, rnum,   mask, sname) */
REGDEF(RAX,     0, 0x0001, "rax"   )
REGDEF(RCX,     1, 0x0002, "rcx"   )
REGDEF(RDX,     2, 0x0004, "rdx"   )
REGDEF(RBX,     3, 0x0008, "rbx"   )
REGDEF(RSP,     4, 0x0010, "rsp"   )
REGDEF(RBP,     5, 0x0020, "rbp"   )
REGDEF(RSI,     6, 0x0040, "rsi"   )
REGDEF(RDI,     7, 0x0080, "rdi"   )
REGDEF(R8,      8, 0x0100, "r8"    )
REGDEF(R9,      9, 0x0200, "r9"    )
REGDEF(R10,    10, 0x0400, "r10"   )
REGDEF(R11,    11, 0x0800, "r11"   )
REGDEF(R12,    12, 0x1000, "r12"   )
REGDEF(R13,    13, 0x2000, "r13"   )
REGDEF(R14,    14, 0x4000, "r14"   )
REGDEF(R15,    15, 0x8000, "r15"   )

REGALIAS(EAX, RAX)
REGALIAS(ECX, RCX)
REGALIAS(EDX, RDX)
REGALIAS(EBX, RBX)
REGALIAS(ESP, RSP)
REGALIAS(EBP, RBP)
REGALIAS(ESI, RSI)
REGALIAS(EDI, RDI)

#endif // !defined(TARGET_X86)

#ifdef TARGET_AMD64
#define XMMBASE 16
#define XMMMASK(x) ((__int64)(1) << ((x)+XMMBASE))

#define KBASE 48
#define KMASK(x) ((__int64)(1) << ((x)+KBASE))

#else // !TARGET_AMD64
#define XMMBASE 8
#define XMMMASK(x) ((__int32)(1) << ((x)+XMMBASE))

#define KBASE 16
#define KMASK(x) ((__int32)(1) << ((x)+KBASE))


#endif // !TARGET_AMD64

REGDEF(XMM0,    0+XMMBASE,  XMMMASK(0),   "mm0"  )
REGDEF(XMM1,    1+XMMBASE,  XMMMASK(1),   "mm1"  )
REGDEF(XMM2,    2+XMMBASE,  XMMMASK(2),   "mm2"  )
REGDEF(XMM3,    3+XMMBASE,  XMMMASK(3),   "mm3"  )
REGDEF(XMM4,    4+XMMBASE,  XMMMASK(4),   "mm4"  )
REGDEF(XMM5,    5+XMMBASE,  XMMMASK(5),   "mm5"  )
REGDEF(XMM6,    6+XMMBASE,  XMMMASK(6),   "mm6"  )
REGDEF(XMM7,    7+XMMBASE,  XMMMASK(7),   "mm7"  )

#ifdef TARGET_AMD64
REGDEF(XMM8,    8+XMMBASE,  XMMMASK(8),   "mm8"  )
REGDEF(XMM9,    9+XMMBASE,  XMMMASK(9),   "mm9"  )
REGDEF(XMM10,  10+XMMBASE,  XMMMASK(10),  "mm10" )
REGDEF(XMM11,  11+XMMBASE,  XMMMASK(11),  "mm11" )
REGDEF(XMM12,  12+XMMBASE,  XMMMASK(12),  "mm12" )
REGDEF(XMM13,  13+XMMBASE,  XMMMASK(13),  "mm13" )
REGDEF(XMM14,  14+XMMBASE,  XMMMASK(14),  "mm14" )
REGDEF(XMM15,  15+XMMBASE,  XMMMASK(15),  "mm15" )

REGDEF(XMM16,  16+XMMBASE,  XMMMASK(16),  "mm16" )
REGDEF(XMM17,  17+XMMBASE,  XMMMASK(17),  "mm17" )
REGDEF(XMM18,  18+XMMBASE,  XMMMASK(18),  "mm18" )
REGDEF(XMM19,  19+XMMBASE,  XMMMASK(19),  "mm19" )
REGDEF(XMM20,  20+XMMBASE,  XMMMASK(20),  "mm20" )
REGDEF(XMM21,  21+XMMBASE,  XMMMASK(21),  "mm21" )
REGDEF(XMM22,  22+XMMBASE,  XMMMASK(22),  "mm22" )
REGDEF(XMM23,  23+XMMBASE,  XMMMASK(23),  "mm23" )

REGDEF(XMM24,  24+XMMBASE,  XMMMASK(24),  "mm24" )
REGDEF(XMM25,  25+XMMBASE,  XMMMASK(25),  "mm25" )
REGDEF(XMM26,  26+XMMBASE,  XMMMASK(26),  "mm26" )
REGDEF(XMM27,  27+XMMBASE,  XMMMASK(27),  "mm27" )
REGDEF(XMM28,  28+XMMBASE,  XMMMASK(28),  "mm28" )
REGDEF(XMM29,  29+XMMBASE,  XMMMASK(29),  "mm29" )
REGDEF(XMM30,  30+XMMBASE,  XMMMASK(30),  "mm30" )
REGDEF(XMM31,  31+XMMBASE,  XMMMASK(31),  "mm31" )

#endif // !TARGET_AMD64

REGDEF(K0,     0+KBASE,    KMASK(0),     "k0"   )
REGDEF(K1,     1+KBASE,    KMASK(1),     "k1"   )
REGDEF(K2,     2+KBASE,    KMASK(2),     "k2"   )
REGDEF(K3,     3+KBASE,    KMASK(3),     "k3"   )
REGDEF(K4,     4+KBASE,    KMASK(4),     "k4"   )
REGDEF(K5,     5+KBASE,    KMASK(5),     "k5"   )
REGDEF(K6,     6+KBASE,    KMASK(6),     "k6"   )
REGDEF(K7,     7+KBASE,    KMASK(7),     "k7"   )

REGDEF(STK,    8+KBASE,    0x0000,       "STK"  )

#elif defined(TARGET_ARM)
 #include "registerarm.h"

#elif defined(TARGET_ARM64)
 #include "registerarm64.h"

#elif defined(TARGET_LOONGARCH64)
 #include "registerloongarch64.h"

#else
  #error Unsupported or unset target architecture
#endif // target type
/*****************************************************************************/
#undef  REGDEF
#undef  REGALIAS
#undef  XMMMASK
/*****************************************************************************/

// clang-format on
