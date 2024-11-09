cmake_minimum_required(VERSION 3.10)

set(PROJECT_NAME list_sort)
project(${PROJECT_NAME})

include_directories(${CMAKE_SORCE_DIR})

add_library(list_lib "list.h" "list.cpp")
add_executable(list_exe "main.cpp")

target_link_libraries(list_exe list_lib)
message(STATUS "Done")
