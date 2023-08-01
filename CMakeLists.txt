cmake_minimum_required(VERSION 3.26)

project(cpp_project)

set(CMAKE_CXX_STANDARD 20)

add_executable(cpp
    src/main.cpp
    src/system.hpp
    src/types.hpp
    src/windows_common_def.hpp
    src/windows_console_api.hpp
)