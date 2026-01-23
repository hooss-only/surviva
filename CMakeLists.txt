cmake_minimum_required(VERSION 3.16)
project(surviva)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/$<CONFIGURATION>")
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/$<CONFIGURATION>")
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

add_subdirectory(lib EXCLUDE_FROM_ALL)

add_executable(surviva WIN32)

target_link_libraries(surviva PRIVATE SDL3_image::SDL3_image SDL3::SDL3)

add_subdirectory(src)
