# Build project

cmake_minimum_required(VERSION 3.20)

project(Blinky
        LANGUAGES CXX C ASM
        VERSION 0.1)

set(HWR_CONFIG blinky)

add_subdirectory(PDK)
add_subdirectory(Source)
