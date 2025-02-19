#include <stdio.h>
#include <signal.h>


#if defined(__GNUC__) || defined(__clang__) 

    #include <unistd.h>
    
    #if   defined(__x86_64__) || defined(__i386__)
        #define __dot_breakpoint __asm__("int3")
    #elif defined(__aarch64__) || defined(__arm__)
        #define __dot_breakpoint __asm__("brk #0")
    #else 
        #error "Not Supported CPU Architecture !!!"
    #endif 

#elif defined(_MSC_VER) 

    #define __dot_breakpoint __debugbreak()

#else 

    #error "Not Supported C++ Compiler !!!" 

#endif 
