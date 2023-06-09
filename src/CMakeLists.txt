cmake_minimum_required(VERSION 3.21)

add_executable(
        operationsSimulator
        main.cpp
)

target_include_directories(
        operationsSimulator PUBLIC
        ${MY_HEADER_DIR}
)