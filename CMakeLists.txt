cmake_minimum_required(VERSION 3.10)

project(vector)

set(CMAKE_C_STANDARD 23)
set(CMAKE_C_STANDARD_REQUIRED ON)

add_executable(vector
    src/main.c
)

include_directories(include)