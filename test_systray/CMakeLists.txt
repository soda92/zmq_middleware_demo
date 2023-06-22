cmake_minimum_required(VERSION 3.11)
project(test_systray)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTORCC ON)

find_package(Qt4 4.7.2 REQUIRED QtCore QtSql QtGui)

set(SOURCES
mainwindow.h
mainwindow.cpp
test_systray.cpp
resources.qrc
)

add_executable(test_systray WIN32 ${SOURCES})
target_link_libraries(test_systray PUBLIC Qt4::QtCore Qt4::QtGui Qt4::QtSql)
