cmake_minimum_required(VERSION 3.0)
project(cpp_example
    LANGUAGES CXX)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra -Wshadow -Wnon-virtual-dtor -pedantic -Wcast-align")
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_subdirectory(apps)
add_subdirectory(src)

enable_testing()
add_subdirectory(tests)
