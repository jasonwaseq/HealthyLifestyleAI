cmake_minimum_required(VERSION 3.10)
project(HealthyLifestyleAI)

set(CMAKE_CXX_STANDARD 17)

# Include directories
include_directories(include)

# Source files
set(SOURCES
    src/main.cpp
    src/CommandParser.cpp
    src/LinearRegression.cpp
    src/Recommendations.cpp
)

# Build the executable
add_executable(HealthyLifestyleAI ${SOURCES})
