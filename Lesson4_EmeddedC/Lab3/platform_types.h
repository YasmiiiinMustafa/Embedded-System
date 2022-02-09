/*
 * platform_types.h
 *
 *  Created on: Jan 2, 2022
 *      Author: yasmine mostafa
 */

#ifndef PLATFORM_TYPES_H_
#define PLATFORM_TYPES_H_

#include<stdint.h>
#include<stdbool.h>

#define CPU_TYPE        CPU_TYPE_32
#define CPU_BIT_ORDER   MSB_FIRST
#define CPU_BYTE_ORDER  HIGH_BYTE_FIRST


#ifndef _Bool
#define _Bool unsigned char
#endif

#ifndef FALSE
#define FALSE          (boolean)false
#endif
#ifndef TRUE
#define TRUE           (boolean)true
#endif

typedef _Bool              boolean;
typedef char               char_t;
typedef signed char        sint8;
typedef unsigned char      uint8;
typedef short              sint16;
typedef unsigned short     uint16;
typedef int                sint32;
typedef unsigned int       uint32;
typedef long long          sint64;
typedef unsigned long long uint64;


typedef volatile sint8  vint8_t;
typedef volatile uint8  vuint8_t;

typedef volatile sint16  vint16_t;
typedef volatile uint16  vuint16_t;

typedef volatile sint32  vint32_t;
typedef volatile uint32  vuint32_t;

typedef volatile sint64  vint64_t;
typedef volatile uint64  vuint64_t;


#endif /* PLATFORM_TYPES_H_ */
