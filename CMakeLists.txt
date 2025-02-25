cmake_minimum_required(VERSION 3.16)
project(PetSimulator)

set(CMAKE_CXX_STANDARD 17)

# Add PetSimulator executable
add_executable(PetSimulator main.cpp PetActions.cpp)

# Enable testing for the project
enable_testing()

# Fetch Google Test (gtest)
include(FetchContent)
FetchContent_Declare(
        googletest
        URL https://github.com/google/googletest/archive/5376968f6948923e2411081fd9372e71a59d8e77.zip
)
# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

# Add PetActionsTest executable for testing
add_executable(PetActionsTest test_petactions.cpp)
target_link_libraries(PetActionsTest gtest_main)

# Register the test with CTest
add_test(NAME PetActionsTest COMMAND PetActionsTest)

# Set Google Test to use colored output for easier reading
set(GTEST_COLOR "yes")
