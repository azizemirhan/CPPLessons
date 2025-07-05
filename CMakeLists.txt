cmake_minimum_required(VERSION 3.25)

project(MyCppProject LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_CXX_SCAN_FOR_MODULES ON)

find_package(fmt CONFIG REQUIRED)

add_executable(MyCppProject
    src/main.cpp
)

target_sources(MyCppProject
    PRIVATE
    FILE_SET CXX_MODULES
        TYPE CXX_MODULES
        FILES src/utilities.ixx
)

target_link_libraries(MyCppProject
    PRIVATE
        fmt::fmt
)
