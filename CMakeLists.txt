cmake_minimum_required(VERSION 3.20)
project(ComputingIIILab CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Every .cpp in this folder becomes its own runnable program.
# CONFIGURE_DEPENDS makes CMake notice new lab files automatically.
file(GLOB LAB_SOURCES CONFIGURE_DEPENDS "${CMAKE_CURRENT_SOURCE_DIR}/*.cpp")

foreach(src ${LAB_SOURCES})
    get_filename_component(lab_name ${src} NAME_WE)

    # Target names can't contain spaces or hyphens.
    string(REPLACE " " "_" target_name ${lab_name})
    string(REPLACE "-" "_" target_name ${target_name})

    add_executable(${target_name} ${src})
endforeach()
