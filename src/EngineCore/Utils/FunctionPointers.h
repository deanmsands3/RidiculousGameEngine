/*
 * FunctionPointers.h
 *
 *  Created on: Jan 3, 2015
 *      Author: Dean
 */

#ifndef SRC_UTIL_TYPES_FUNCTIONPOINTERS_H_
#define SRC_UTIL_TYPES_FUNCTIONPOINTERS_H_

#include "Defines.h"

typedef void (*voidFuncPtr)();
typedef void (*voidFloatFuncPtr)(float);
typedef void (*voidBooleanFuncPtr)(bool);
typedef void (*voidUint16FuncPtr)(uint16_t);
typedef void (*voidUint32FuncPtr)(uint32_t);
typedef uint16_t (*Uint16Uint16FuncPtr)(uint16_t);
typedef void (*TCallBack)(void*);






#endif /* SRC_UTIL_TYPES_FUNCTIONPOINTERS_H_ */
