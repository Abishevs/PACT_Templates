cmake_minimum_required(VERSION 3.10)
project(App)

# Set the C++ Standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Add .json commands for clang LSP
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# Add sources
set(SOURCES
    src/main.cpp
    src/controller/arm.cpp
)

# Create the executable
add_executable(App ${SOURCES})

# Include directories
target_include_directories(App PRIVATE src src/controller)

# Find Raylib
find_package(raylib REQUIRED)

# Link Raylib to the project
target_link_libraries(App PRIVATE raylib)

# Optional: Add warnings for GCC/Clang
if (CMAKE_CXX_COMPILER_ID MATCHES "GNU|Clang")
    target_compile_options(App PRIVATE -Wall -Wextra -Wpedantic)
endif()

