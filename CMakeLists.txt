# set minimum cmake version
cmake_minimum_required(VERSION 3.14.0 FATAL_ERROR)

# cmake system variables 
# https://cmake.org/cmake/help/latest/manual/cmake-variables.7.html#variables-that-describe-the-system

project(cmakegtest
    VERSION 1.0.0
    LANGUAGES CXX
    DESCRIPTION "CMake with googletest project for C++."
    HOMEPAGE_URL "https://github.com/genedelisa/somerepo"
)

message("top level cmake ${PROJECT_SOURCE_DIR}")

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# On some platforms, this results in linking to a different library (e.g. -std=c++11 rather than -std=gnu++11). 
set(CMAKE_CXX_EXTENSIONS OFF)

#set(CMAKE_CXX_COMPILER /usr/bin/clang++)


if (CMAKE_HOST_APPLE)
  # do CMAKE_HOST_APPLE specific things
  message("Apple host")
else()
  # do something else
endif()

if("${CMAKE_CXX_COMPILER_ID}" STREQUAL "AppleClang")
  message(STATUS "compiler id is AppleClang")
  set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++17 -stdlib=libc++")
else()
  message(STATUS "The compiler ${CMAKE_CXX_COMPILER_ID} is not configured.")
endif()
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Werror -Wall -pedantic")

##################
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

##################
# who is playing. 
# each of these dirs have a CMakeLists.txt
add_subdirectory(src)

##################
# https://cmake.org/cmake/help/latest/command/option.html
option(PACKAGE_TESTS "Build the tests" ON)

if(PACKAGE_TESTS)
  message("Configuring testing")
  # well, duh
  enable_testing()
  add_subdirectory(test)
  # you set up a git submodule before running
  add_subdirectory(lib/googletest)
endif()
