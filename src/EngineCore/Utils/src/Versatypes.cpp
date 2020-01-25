/*
 * Versatypes.h
 *
 *  Created on: Jan 3, 2015
 *      Author: Dean
 */

#ifndef SRC_UTIL_TYPES_VERSATYPES_H_
#define SRC_UTIL_TYPES_VERSATYPES_H_
#include "BitFields.h"
#include <functional>

// ************************************************************************
// VersaType16
const VersaType16::uint16_t asUInt16(){
    return u16;
}
const VersaType16::int16_t asInt16(){
    return i16;
}
uint16_t VersaType16::getValue() const {
    return u16;
}

bool VersaType16::operator==(const VersaType16 &lhs, const VersaType16 &rhs){
    return (lhs.getValue()==rhs.getValue());
}
VersaType16(uint16_t newU16=0):u16(newU16){}

// ************************************************************************
// VersaType32
const VersaType32::uint32_t asUInt32(){return u32;}
const VersaType32::int32_t asInt32(){return i32;}
VersaType32::uint32_t getValue() const {return u32;}

VersaType32::VersaType32(uint32_t newU32=0UL):u32(newU32){}

inline bool operator==(const VersaType32 &rhs){
    return (getValue()==rhs.getValue());
}

namespace std {
    template<>
    size_t hash<VersaType32>::operator()(const VersaType32 &x) const {
        return hash<uint32_t>()(x.u32);
    }
}

// ************************************************************************
// VersaType64
VersaType64::VersaType64(uint64_t newU64=0ULL):u64(newU64){}
const VersaType64::uint64_t asUInt64(){
    return u64;
}
const VersaType64::int64_t asInt64(){
    return i64;
}
uint64_t VersaType64::getValue() const {
    return u64;
}

bool VersaType64::operator==(const VersaType64 &lhs, const VersaType64 &rhs){
    return (lhs.getValue()==rhs.getValue());
}

namespace std {
    template <>
    size_t hash<VersaType64>::operator()(const VersaType64 &x ) const{
        return hash<uint64_t>()(x.u64);
    }
}
