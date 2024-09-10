cmake_minimum_required(VERSION 3.28)
project(chroma LANGUAGES C)

set(CMAKE_C_STANDARD 99)
set(CMAKE_C_STANDARD_REQUIRED ON)

set(SRC_FILES
    src/file.c
    src/line.c
)

add_executable(chroma src/main.c ${SRC_FILES})