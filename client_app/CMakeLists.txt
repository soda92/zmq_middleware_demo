cmake_minimum_required(VERSION 3.11)

find_package(Qt4 4.7.2 REQUIRED QtCore QtGui)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(SOURCES
mainwindow.h
mainwindow.cpp
main.cpp
application.qrc
)

add_executable(client_app WIN32 ${SOURCES})
target_link_libraries(client_app PUBLIC Qt4::QtCore Qt4::QtGui)
