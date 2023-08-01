//#ifndef WINDOWS_COMMON_HPP
//#define WINDOWS_COMMON_HPP
//
//#define DECLSPEC_IMPORT __declspec(dllimport)
//#define WINBASEAPI DECLSPEC_IMPORT
//#define WINAPI __stdcall
//
//#define NULL 0
//
//typedef void* HANDLE;
//typedef unsigned long DWORD;
//
//#endif
#ifndef WINDOWS_CONSOLE_API_HPP
#define WINDOWS_CONSOLE_API_HPP

#include "windows_common_def.hpp"

extern "C"
{
    //WINBASEAPI
    //    HANDLE
    //    WINAPI
    //    GetStdHandle(
    //        DWORD nStdHandle
    //    );
}

namespace cpp
{
}

#endif