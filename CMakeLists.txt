cmake_minimum_required(VERSION 3.13.4)

project(CMAKE)

add_executable(${PROJECT_NAME} main.cpp)

add_subdirectory(modules)

target_include_directories(${PROJECT_NAME} PRIVATE modules)

target_link_libraries(${PROJECT_NAME} vector)

target_compile_features(${PROJECT_NAME} PRIVATE cxx_std_20)

set(CMAKE_CONFIGURATION_TYPES "Release" CACHE STRING "" FORCE)

set(CMAKE_CXX_FLAGS_RELEASE "-O2")