cmake_minimum_required(VERSION 3.16)

if(CMAKE_CURRENT_SOURCE_DIR STREQUAL CMAKE_SOURCE_DIR)
    project(cpp_can_isotp CXX)
endif()

add_library(cpp_can_isotp STATIC
    "${CMAKE_CURRENT_SOURCE_DIR}/src/cpp-can-isotp.cpp"
)
target_include_directories(cpp_can_isotp PUBLIC
    "${CMAKE_CURRENT_SOURCE_DIR}/include"
    "${CMAKE_CURRENT_SOURCE_DIR}/include/arduino"
)
target_link_libraries(cpp_can_isotp PUBLIC
    fmt
    etl
    esp32_can
    can_common
)
