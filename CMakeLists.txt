cmake_minimum_required(VERSION 3.5)
project(FoglioDiCalcolo)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp Observer.h Subject.h Cell.cpp Cell.h SumFormula.cpp SumFormula.h MaxFormula.cpp MaxFormula.h MinFormula.cpp MinFormula.h MeanFormula.cpp MeanFormula.h)
add_executable(FoglioDiCalcolo ${SOURCE_FILES})


find_package( Qt5Widgets REQUIRED )
find_package( Qt5Gui REQUIRED )
find_package( Qt5Core REQUIRED )
target_link_libraries(FoglioDiCalcolo Qt5::Widgets)
INCLUDE_DIRECTORIES("C:\\Qt\\5.7\\msvc2015_64\\include\\QtWidgets")
