cmake_minimum_required(VERSION 2.8.12.2)
project(ApEx1Part2)

set(CMAKE_CXX_STANDARD 14)

add_executable(ApEx1Part2
        "ChebyshevDistance .cpp"
        "CanberraDistance.cpp"
        "Header.h"
        "Main.cpp"
        "Validation.cpp"
        "EuclideanDistance.cpp"
        "ManhattanDistance.cpp"
        "MinkowskiDistance.cpp")
