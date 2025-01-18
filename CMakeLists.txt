cmake_minimum_required(VERSION 3.31.2)

project(App CXX)

set(CMAKE_CXX_STANDARD 23)

set(CMAKE_CXX_STANDARD_REQUIRED ON)

file(GLOB SOURCES ./src/*.cpp)

list(REMOVE_ITEM SOURCES ./src/main.cpp)

add_executable(${PROJECT_NAME} ./src/main.cpp ${SOURCE})

target_include_directories(${PROJECT_NAME} PRIVATE ./include)

target_compile_options(${PROJECT_NAME} PRIVATE -Wall -Wextra -Wpedantic)
