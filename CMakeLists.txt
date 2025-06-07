cmake_minimum_required(VERSION 3.31.2)

project(App CXX)

set(CMAKE_CXX_STANDARD 23)

set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(COMPILE_OPTIONS -Wall -Wextra -Wpedantic -g)

include(FetchContent)

FetchContent_Declare(
  json
  URL https://github.com/nlohmann/json/releases/download/v3.11.3/json.tar.xz
  SOURCE_DIR ${CMAKE_SOURCE_DIR}/third_party/json
)

FetchContent_MakeAvailable(json)

file(GLOB SOURCES ./source/*.cpp)

list(REMOVE_ITEM SOURCES ./source/main.cpp)

add_executable(${PROJECT_NAME} ./source/main.cpp ${SOURCES})

target_include_directories(${PROJECT_NAME} PRIVATE ./include)

target_compile_options(${PROJECT_NAME} PRIVATE ${COMPILE_OPTIONS})

target_link_libraries(${PROJECT_NAME} PRIVATE nlohmann_json::nlohmann_json)
