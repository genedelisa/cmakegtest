# set minimum cmake version
cmake_minimum_required(VERSION 3.14.0 FATAL_ERROR)

# the test cmakelists.txt
message("running test cmakelists.txt")

include(googletest)

#set_target_properties(gtest PROPERTIES FOLDER lib)
#set_target_properties(gtest_main PROPERTIES FOLDER lib)
#set_target_properties(gmock PROPERTIES FOLDER lib)
#set_target_properties(gmock_main PROPERTIES FOLDER lib)

set(Source 
    main_tests.cpp
)

# since we use the name multiple times here
set(TheTestTarget tests)

add_executable(${TheTestTarget}
    ${Source}
)

target_include_directories(${TheTestTarget} 
    PUBLIC 
        ../src
        ../lib/googletest/googletest/include
)

# add_subdirectory("${PROJECT_SOURCE_DIR}/lib/googletest" "lib/googletest")

# Prevent overriding the parent project's compiler/linker
# settings on Windows
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)

target_link_libraries(${TheTestTarget} 
    PUBLIC 
        gtest
        gtest_main
        accountLib
)

gtest_discover_tests(${TheTestTarget})
