#pragma once

#include <stdio.h>

#if defined(__GNUC__) && defined(__linux__)

    #include <stdint.h>

#elif defined(_MSC_VER) && defined(_WIN32)

    #include <inttypes.h>

#else 

    #error "Not Supported C++ Compiler !!!"

#endif 

#include <stddef.h>

namespace Dot{
    
    // unsigned integers
    typedef uint32_t ui32;
    typedef uint16_t ui16;
    typedef uint8_t  ui8 ;
    typedef uint64_t ui64;

    // signed integers types
    typedef int8_t   i8 ;
    typedef int16_t  i16;
    typedef int32_t  i32;
    typedef int64_t  i64;

    // ascii character type
    typedef char     ascii;
    
    // utf16 character type
    typedef wchar_t  utf16;
    
    // float's number types 
    typedef float    f32;
    typedef double   f64;


}