# Автоматическое скачивание Google Test
include(FetchContent)

FetchContent_Declare(
  googletest
  GIT_REPOSITORY https://github.com/google/googletest.git
  GIT_TAG release-1.12.1
)

FetchContent_MakeAvailable(googletest)

# Исполняемый файл тестов
add_executable(run_tests test_calculator.cpp)

# Линкуем наши тесты с Google Test и основным кодом
target_link_libraries(run_tests 
    gtest_main 
    calculator
)

# Подключаем заголовки
target_include_directories(run_tests PRIVATE ${CMAKE_SOURCE_DIR}/src)
