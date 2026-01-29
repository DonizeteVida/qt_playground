cmake_minimum_required(VERSION 3.10.0)
project(qt_helloworld VERSION 0.1.0 LANGUAGES C CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_AUTORCC ON)

find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Core Widgets Gui Qml Quick QuickControls2)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Core Widgets Gui Qml Quick QuickControls2)

qt_standard_project_setup()

add_subdirectory(widgets/helloworld)
add_subdirectory(quick/helloworld)
