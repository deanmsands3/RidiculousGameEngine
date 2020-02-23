//
// Created by dean on 1/27/20.
//

#include <BitFields.h>

uint32_t Bits32_8::asUInt32() const{
    return *(uint32_t*)this;
}

uint32_t Bits32_16::asUInt32() const{
    return *(uint32_t*)this;
}

uint64_t Bits64_8::asUInt64() const {
    return *(uint64_t*)this;
}

uint16_t Bits16_8::asUInt16() {
    return *(uint16_t*)this;
}

uint64_t Bits64::asUInt64(){
    return *(uint64_t*)this;
}

uint32_t Bits32::asUInt32() {
    return *(uint32_t*)this;
}

uint16_t Bits16::asUInt16() {
    return *(uint16_t*)this;
}

uint8_t Bits8::asUInt8() {
    return *(uint8_t*)this;
}

uint64_t Bits64_16::asUInt64() const {
    return *(uint64_t*)this;
}

uint64_t Bits64_32::asUInt64() const {
    return *(uint64_t*)this;
}

uint16_t UBits16::asUInt16() const {
    return *(uint16_t*)this;
}

uint32_t UBits32::asUInt32() const {
    return *(uint32_t*)this;
}

uint64_t UBits64::asUInt64() const {
    return *(uint64_t*)this;
}
