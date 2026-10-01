cmake_minimum_required(VERSION 3.20)
project(Phase2Libraries LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_library(math_lib STATIC calculator.cpp)

target_include_directories(math_lib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

add_executable(app main.cpp)

target_link_libraries(app PRIVATE math_lib)