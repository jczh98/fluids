cmake_minimum_required(VERSION 3.1.4)

set(CMAKE_CXX_STANDARD 17)

project(fluids VERSION 0.1.0)

enable_testing()

add_executable(fluids 
    src/main.cc
    )

target_include_directories(fluids
    PUBLIC
    external/eigen
    )

