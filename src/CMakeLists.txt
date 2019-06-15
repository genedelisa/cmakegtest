# set minimum cmake version
cmake_minimum_required(VERSION 3.14.0 FATAL_ERROR)

message("cmake source")
set(Source 
    main.cpp
    Account.cpp
    Account.hpp
)

# create a static library
set(TheLibraryName accountLib)
add_library(${TheLibraryName} STATIC ${Source})
target_include_directories(${TheLibraryName} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

# create the executable
# huh. the linker doesn't like if you define the target as a variable
#set(TheProgramName account)
#add_executable(${theProgramName} 
add_executable(account
    main.cpp
)

# link the library to the executable
# https://cmake.org/cmake/help/latest/command/target_link_libraries.html
target_link_libraries(account
    PRIVATE ${TheLibraryName}
)

set_target_properties(${theProgramName} PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin"
)




