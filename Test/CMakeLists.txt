cmake_minimum_required(VERSION 3.5)

add_subdirectory(./lib/googletest)
set(gtest_SOURCE_DIR, ./lib/googletest/)
include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

set(TEST_SOURCE_FILES runAllTests.cpp FormulaFixture.cpp MaxFormulaTest.cpp CellTest.cpp)
add_executable(runFormulaTests ${TEST_SOURCE_FILES})
target_link_libraries(runFormulaTests gtest gtest_main core)