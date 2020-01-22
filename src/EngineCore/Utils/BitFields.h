/*
 * BitFields.h
 *
 *  Created on: Jan 3, 2015
 *      Author: Dean
 */

#ifndef UTIL_BITFIELDS_H_
#define UTIL_BITFIELDS_H_
#include "Defines.h"
typedef struct{
	uint8_t b0:1;
	uint8_t b1:1;
	uint8_t b2:1;
	uint8_t b3:1;
	uint8_t b4:1;
	uint8_t b5:1;
	uint8_t b6:1;
	uint8_t b7:1;
#ifdef __cplusplus
	const uint8_t asUInt8(){
		return *(uint8_t*)this;
	}
#endif
}Bits8;
typedef struct{
	uint16_t b0:1;
	uint16_t b1:1;
	uint16_t b2:1;
	uint16_t b3:1;
	uint16_t b4:1;
	uint16_t b5:1;
	uint16_t b6:1;
	uint16_t b7:1;
	uint16_t b8:1;
	uint16_t b9:1;
	uint16_t ba:1;
	uint16_t bb:1;
	uint16_t bc:1;
	uint16_t bd:1;
	uint16_t be:1;
	uint16_t bf:1;
#ifdef __cplusplus
	const uint16_t asUInt16(){
		return *(uint16_t*)this;
	}
#endif
}Bits16;

typedef struct{
	uint32_t b0:1;
	uint32_t b1:1;
	uint32_t b2:1;
	uint32_t b3:1;
	uint32_t b4:1;
	uint32_t b5:1;
	uint32_t b6:1;
	uint32_t b7:1;
	uint32_t b8:1;
	uint32_t b9:1;
	uint32_t ba:1;
	uint32_t bb:1;
	uint32_t bc:1;
	uint32_t bd:1;
	uint32_t be:1;
	uint32_t bf:1;
	uint32_t b10:1;
	uint32_t b11:1;
	uint32_t b12:1;
	uint32_t b13:1;
	uint32_t b14:1;
	uint32_t b15:1;
	uint32_t b16:1;
	uint32_t b17:1;
	uint32_t b18:1;
	uint32_t b19:1;
	uint32_t b1a:1;
	uint32_t b1b:1;
	uint32_t b1c:1;
	uint32_t b1d:1;
	uint32_t b1e:1;
	uint32_t b1f:1;
#ifdef __cplusplus
	const uint32_t asUInt32(){
		return *(uint32_t*)this;
	}
#endif
}Bits32;

typedef struct{
	uint64_t b0:1;
	uint64_t b1:1;
	uint64_t b2:1;
	uint64_t b3:1;
	uint64_t b4:1;
	uint64_t b5:1;
	uint64_t b6:1;
	uint64_t b7:1;
	uint64_t b8:1;
	uint64_t b9:1;
	uint64_t ba:1;
	uint64_t bb:1;
	uint64_t bc:1;
	uint64_t bd:1;
	uint64_t be:1;
	uint64_t bf:1;
	uint64_t b10:1;
	uint64_t b11:1;
	uint64_t b12:1;
	uint64_t b13:1;
	uint64_t b14:1;
	uint64_t b15:1;
	uint64_t b16:1;
	uint64_t b17:1;
	uint64_t b18:1;
	uint64_t b19:1;
	uint64_t b1a:1;
	uint64_t b1b:1;
	uint64_t b1c:1;
	uint64_t b1d:1;
	uint64_t b1e:1;
	uint64_t b1f:1;
	uint64_t b20:1;
	uint64_t b21:1;
	uint64_t b22:1;
	uint64_t b23:1;
	uint64_t b24:1;
	uint64_t b25:1;
	uint64_t b26:1;
	uint64_t b27:1;
	uint64_t b28:1;
	uint64_t b29:1;
	uint64_t b2a:1;
	uint64_t b2b:1;
	uint64_t b2c:1;
	uint64_t b2d:1;
	uint64_t b2e:1;
	uint64_t b2f:1;
	uint64_t b30:1;
	uint64_t b31:1;
	uint64_t b32:1;
	uint64_t b33:1;
	uint64_t b34:1;
	uint64_t b35:1;
	uint64_t b36:1;
	uint64_t b37:1;
	uint64_t b38:1;
	uint64_t b39:1;
	uint64_t b3a:1;
	uint64_t b3b:1;
	uint64_t b3c:1;
	uint64_t b3d:1;
	uint64_t b3e:1;
	uint64_t b3f:1;
#ifdef __cplusplus
	const uint64_t asUInt64(){
		return *(uint64_t*)this;
	}
#endif
}Bits64;

typedef struct{
	Bits8 lo;
	Bits8 hi;
#ifdef __cplusplus
	const uint16_t asUInt16(){
		return *(uint16_t*)this;
	}
#endif
}Bits16_8;

typedef struct{
	Bits8 lolo;
	Bits8 lohi;
	Bits8 hilo;
	Bits8 hihi;
#ifdef __cplusplus
	const uint32_t asUInt32(){
		return *(uint32_t*)this;
	}
#endif
}Bits32_8;


typedef struct{
	Bits16 lo;
	Bits16 hi;
#ifdef __cplusplus
	const uint32_t asUInt32(){
		return *(uint32_t*)this;
	}
#endif
}Bits32_16;

typedef struct{	//Included only for completeness
	Bits8 lololo;
	Bits8 lolohi;
	Bits8 lohilo;
	Bits8 lohihi;
	Bits8 hilolo;
	Bits8 hilohi;
	Bits8 hihilo;
	Bits8 hihihi;
#ifdef __cplusplus
	const uint64_t asUInt64(){
		return *(uint64_t*)this;
	}
#endif
}Bits64_8;		//No, I don't know why anyone would ever use this.

typedef struct{
	Bits16 lolo;
	Bits16 lohi;
	Bits16 hilo;
	Bits16 hihi;
#ifdef __cplusplus
	const uint64_t asUInt64(){
		return *(uint64_t*)this;
	}
#endif
}Bits64_16;

typedef struct{
	Bits32 lo;
	Bits32 hi;
#ifdef __cplusplus
	const uint64_t asUInt64(){
		return *(uint64_t*)this;
	}
#endif
}Bits64_32;

typedef union {
	//Bits8 array
	Bits8 a8[2];
	//Bits8 struct
	Bits16_8 s8;
	//Bits16
	Bits16 b16;
#ifdef __cplusplus
	const uint16_t asUInt16(){
		return *(uint16_t*)this;
	}
#endif
}UBits16;

typedef union {
	//Bits8 array
	Bits8 a8[4];
	//Bits8 struct
	Bits32_8 s8;
	//Bits16 array
	Bits16 a16[2];
	//Bits16 struct
	Bits32_16 s16;
	//Bits32
	Bits32 b32;
#ifdef __cplusplus
	const uint32_t asUInt32(){
		return *(uint32_t*)this;
	}
#endif
}UBits32;

typedef union {
	//Bits8 array
	Bits8 a8[4];
	//Bits8 struct
	Bits64_8 s8;
	//Bits16 array
	Bits16 a16[4];
	//Bits16 struct
	Bits64_16 s16;
	//Bits32
	Bits32 a32[2];
	//Bits32 struct
	Bits64_32 s32;
	//Bits64
	Bits64 b64;
#ifdef __cplusplus
	const uint64_t asUInt64(){
		return *(uint64_t*)this;
	}
#endif
}UBits64;


#endif /* UTIL_BITFIELDS_H_ */
