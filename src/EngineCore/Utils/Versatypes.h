/*
 * Versatypes.h
 *
 *  Created on: Jan 3, 2015
 *      Author: Dean
 */

#ifndef SRC_UTIL_TYPES_VERSATYPES_H_
#define SRC_UTIL_TYPES_VERSATYPES_H_
#include "BitFields.h"

#ifdef __cplusplus
#include <functional>
#endif

#ifdef __cplusplus
union VersaType16{
#else
typedef union{
#endif
	uint8_t u8[2];
	uint16_t u16;
	struct{
		uint8_t lo;
		uint8_t hi;
	}u8n;
	struct{
		int8_t lo;
		int8_t hi;
	}i8n;
	int16_t i16;
#ifdef __cplusplus
	inline const uint16_t asUInt16(){
		return u16;
	}
	inline const int16_t asInt16(){
		return i16;
	}
//	VersaType16(uint16_t newU16=0):u16(newU16){}
	uint16_t getValue() const {
	    return u16;
	}
};
inline bool operator==(const VersaType16 &lhs, const VersaType16 &rhs){
	return (lhs.getValue()==rhs.getValue());
}
#else
}VersaType16;
#endif


#ifdef __cplusplus
union VersaType32{
#else
typedef union{
#endif
	uint8_t u8[4];
	uint16_t u16[2];
	struct{
		uint16_t lo;
		uint16_t hi;
	}u16n;
	uint32_t u32;
	int32_t i32;
	union VersaType16 v16[2];
	struct{
	  union VersaType16 lo;
	  union VersaType16 hi;
	}v16n;

	float  f;
#ifdef __cplusplus
	inline const uint32_t asUInt32(){return u32;}
	inline const int32_t asInt32(){return i32;}
	inline uint32_t getValue() const {return u32;}
//	VersaType32(uint32_t newU32=0UL):u32(newU32){}
};
inline bool operator==(const VersaType32 &lhs, const VersaType32 &rhs){
	return (lhs.getValue()==rhs.getValue());
}
#else
}VersaType32;
#endif

#ifdef __cplusplus
union VersaType64{
#else
typedef union{
#endif
	uint8_t u8[8];
	uint16_t u16[4];
	struct{
		uint16_t lol;
		uint16_t loh;
		uint16_t hil;
		uint16_t hih;
	}u16n;
	uint32_t u32[2];
	struct{
		uint32_t lo;
		uint32_t hi;
	}u32n;
	uint64_t u64;

	int8_t i8[8];
	int16_t i16[4];
	struct{
		int16_t lol;
		int16_t loh;
		int16_t hil;
		int16_t hih;
	}i16n;

	int32_t i32[2];
	struct{
		int32_t lo;
		int32_t hi;
	}i32n;

	int64_t i64;

	VersaType32 v32[2];
	struct{
	  VersaType32 lo;
	  VersaType32 hi;
	}v32n;

	double d;
#ifdef __cplusplus
	inline const uint64_t asUInt64(){
		return u64;
	}
	inline const int64_t asInt64(){
		return i64;
	}
	uint64_t getValue() const {
	    return u64;
	}

//	VersaType64(uint64_t newU64=0ULL):u64(newU64){}
};
inline bool operator==(const VersaType64 &lhs, const VersaType64 &rhs){
	return (lhs.getValue()==rhs.getValue());
}
#else
}VersaType64;
#endif

#ifdef __cplusplus
namespace std {
    template <>
        class hash<VersaType32>{
        public :
        size_t operator()(const VersaType32 &x ) const{
            return hash<uint32_t>()(x.u32);
        }
    };
}
namespace std {
    template <>
        class hash<VersaType64>{
        public :
        size_t operator()(const VersaType64 &x ) const{
            return hash<uint64_t>()(x.u64);
        }
    };
}

#endif




#endif /* SRC_UTIL_TYPES_VERSATYPES_H_ */
