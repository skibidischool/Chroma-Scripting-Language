cmake_minimum_required(VERSION 3.28)
project(chroma LANGUAGES C)

set(CMAKE_C_STANDARD 99)
set(CMAKE_C_STANDARD_REQUIRED ON)

add_executable(chroma src/main.c src/file.c)