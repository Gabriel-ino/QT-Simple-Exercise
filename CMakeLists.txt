cmake_minimum_required(VERSION 3.14)

project(untitled3 LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Core)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Core)

add_executable(untitled3
  main.cpp
  person.hpp
  person.cpp
  timer.hpp
  timer.cpp
)
target_link_libraries(untitled3 Qt${QT_VERSION_MAJOR}::Core)

install(TARGETS untitled3
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
