cmake_minimum_required(VERSION 3.10)
project(App)

set(CMAKE_CXX_STANDARD 17)

# Add .json commands for clang LSP
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# Source files
set(SOURCES
    src/main.cpp
)

# Add executable
add_executable(App ${SOURCES})

# Include directories
target_include_directories(App PRIVATE src)
