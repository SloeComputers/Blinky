cmake_minimum_required(VERSION 3.20)

project(blinky
        LANGUAGES CXX C ASM
        VERSION 0.1)

set(HWR_CONFIG blinky)

add_subdirectory(Platform)

add_blinky_executable(blinky blinky.cpp)
