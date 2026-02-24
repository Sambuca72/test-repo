cmake_minimum_required(VERSION 3.24.2)

project(testproj CXX)

  

# Google Test

include(FetchContent)

FetchContent_Declare(

googletest

URL https://github.com/google/googletest/archive/refs/tags/v1.13.0.zip

)

  

FetchContent_MakeAvailable(googletest)

  

# Main executable with gtest

enable_testing()

add_executable(${PROJECT_NAME} main.cpp candle.cpp)

target_link_libraries(${PROJECT_NAME}

PRIVATE gtest_main gtest

)

  

add_test(NAME CandleTests COMMAND ${PROJECT_NAME})in.cpp candle.cpp)
