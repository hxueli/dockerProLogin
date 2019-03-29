#ifndef MY_BYTEORDER_INCLUDED
#define MY_BYTEORDER_INCLUDED

/* Copyright (c) 2001, 2014, Oracle and/or its affiliates. All rights reserved.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; version 2 of the License.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301  USA */


/*
  Function-like macros for reading and storing in machine independent
  format (low byte first). There are 'korr' (assume 'corrector') variants
  for integer types, but 'get' (assume 'getter') for floating point types.
*/
#if defined(__i386__) || defined(_WIN32)
#define MY_BYTE_ORDER_ARCH_OPTIMIZED
#include "byte_order_generic_x86.h"
#elif defined(__x86_64__)
#include "byte_order_generic_x86_64.h"
#else
#include "byte_order_generic.h"
#endif

#ifdef __cplusplus

static inline int16 sint2korr(const char *pT)
{
  return sint2korr(static_cast<const uchar*>(static_cast<const void*>(pT)));
}

static inline uint16    uint2korr(const char *pT)
{
  return uint2korr(static_cast<const uchar*>(static_cast<const void*>(pT)));
}

static inline uint32    uint3korr(const char *pT)
{
  return uint3korr(static_cast<const uchar*>(static_cast<const void*>(pT)));
}

static inline int32     sint3korr(const char *pT)
{
  return sint3korr(static_cast<const uchar*>(static_cast<const void*>(pT)));
}

static inline uint32    uint4korr(const char *pT)
{
  return uint4korr(static_cast<const uchar*>(static_cast<const void*>(pT)));
}

static inline int32     sint4korr(const char *pT)
{
  return sint4korr(static_cast<const uchar*>(static_cast<const void*>(pT)));
}

static inline ulonglong uint6korr(const char *pT)
{
  return uint6korr(static_cast<const uchar*>(static_cast<const void*>(pT)));
}

static inline ulonglong uint8korr(const char *pT)
{
  return uint8korr(static_cast<const uchar*>(static_cast<const void*>(pT)));
}

static inline longlong  sint8korr(const char *pT)
{
  return sint8korr(static_cast<const uchar*>(static_cast<const void*>(pT)));
}


static inline void int2store(char *pT, uint16 A)
{
  int2store(static_cast<uchar*>(static_cast<void*>(pT)), A);
}

static inline void int3store(char *pT, uint A)
{
  int3store(static_cast<uchar*>(static_cast<void*>(pT)), A);
}

static inline void int4store(char *pT, uint32 A)
{
  int4store(static_cast<uchar*>(static_cast<void*>(pT)), A);
}

static inline void int5store(char *pT, ulonglong A)
{
  int5store(static_cast<uchar*>(static_cast<void*>(pT)), A);
}

static inline void int6store(char *pT, ulonglong A)
{
  int6store(static_cast<uchar*>(static_cast<void*>(pT)), A);
}

static inline void int8store(char *pT, ulonglong A)
{
  int8store(static_cast<uchar*>(static_cast<void*>(pT)), A);
}

#endif  /* __cplusplus */

/*
  Function-like macros for reading and storing in machine format from/to
  short/long to/from some place in memory V should be a variable (not on
  a register) and M a pointer to byte.
*/
#ifdef WORDS_BIGENDIAN
#include "big_endian.h"
#else
#include "little_endian.h"
#endif

#endif /* MY_BYTEORDER_INCLUDED */
