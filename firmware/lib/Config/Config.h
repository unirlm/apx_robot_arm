#pragma once

/** MODIFY WITH CAUTION （不要随意修改！！！）: 
 * May cause problems. */

# include <Arduino.h>

typedef signed char int8_t;     //8-bit有符号类型
typedef unsigned char uint8_t;  //8-bit无符号类型

typedef signed int int16_t;     //16-bit有符号类型
typedef unsigned int uint16_t;  //16-bit有符号类型

typedef signed long int int32_t;    //32-bit有符号类型
typedef unsigned long int uint32_t; //32-bit有符号类型

typedef signed long long int int64_t;       //64-bit有符号类型（可能无法使用）
typedef unsigned long long int uint64_t;    //64-bit有符号类型（可能无法使用）

//   ---------------------------------------    
#ifdef ARDUINO_AVR_UNO
#define DEBUG_ENABLE   0
#elif ARDUINO_AVR_MEGA2560
#define DEBUG_ENABLE   1
#define DEBUG_SERIAL    Serial3
#define DEBUG_BAUDRATE  9600
#endif

#define MAIN_SERIAL     Serial  

