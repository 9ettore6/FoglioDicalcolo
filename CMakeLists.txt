cmake_minimum_required(VERSION 3.5)
project(FoglioDiCalcolo)

add_subdirectory(Test)

set(CMAKE_PREFIX_PATH C:/Qt/5.4/mingw491_32)
INCLUDE_DIRECTORIES("C:/Qt/5.4/msvc2013_64/include/QtWidgets")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
set(SOURCE_FILES main.cpp Observer.h Subject.h Cell.h Cell.cpp SumFormula.cpp SumFormula.h MaxFormula.cpp MaxFormula.h MinFormula.cpp MinFormula.h MeanFormula.cpp MeanFormula.h Formula.h Formula.cpp Formula.h)
add_executable(FoglioDiCalcolo ${SOURCE_FILES})
find_package( Qt5Widgets REQUIRED )
find_package( Qt5Gui REQUIRED )
find_package( Qt5Core REQUIRED )
target_link_libraries(FoglioDiCalcolo Qt5::Widgets)


