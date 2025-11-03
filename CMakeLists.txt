cmake_minimum_required(VERSION 3.14)
project(MyProject)

set(CMAKE_CXX_STANDARD 17)

# Главный код
add_library(calculator src/calculator.cpp)

# Тесты
add_subdirectory(tests)
