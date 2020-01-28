/*
 * Versatypes.h
 *
 *  Created on: Jan 3, 2015
 *      Author: Dean
 */

#include <Versatypes.h>

// ************************************************************************
// VersaType16
uint16_t VersaType16::asUInt16()const {
    return u16;
}
int16_t VersaType16::asInt16()const {
    return i16;
}
uint16_t VersaType16::getValue() const {
    return u16;
}

bool VersaType16::operator==(const VersaType16 &rhs) const{
    return (u16==rhs.u16);
}

VersaType16::VersaType16(uint16_t newU16):u16(newU16){}

// ************************************************************************
// VersaType32
uint32_t VersaType32::asUInt32()const {return u32;}
int32_t VersaType32::asInt32()const {return i32;}
uint32_t VersaType32::getValue() const {return u32;}

VersaType32::VersaType32(uint32_t newU32):u32(newU32){}

bool VersaType32::operator==(const VersaType32 &rhs) const {
    return false;
}


// ************************************************************************
// VersaType64
VersaType64::VersaType64(uint64_t newU64):u64(newU64){}
uint64_t VersaType64::asUInt64()const {
    return u64;
}
int64_t VersaType64::asInt64()const {
    return i64;
}
uint64_t VersaType64::getValue() const {
    return u64;
}

bool VersaType64::operator==(const VersaType64 &rhs) const{
    return (u64==rhs.u64);
}
