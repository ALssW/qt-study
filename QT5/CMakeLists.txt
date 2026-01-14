cmake_minimum_required(VERSION 4.1)
project(qt-study-qt5)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

# 添加子目录
add_subdirectory(01_stater)
add_subdirectory(02_SignalAndSlot)
add_subdirectory(03_QtSource)
add_subdirectory(04_QtDialog)

