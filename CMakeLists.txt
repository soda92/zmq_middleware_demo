cmake_minimum_required(VERSION 3.11)
project(zmq_middleware_demo)

# if(MSVC)
# include_directories(E:/Downloads/boost_1_54_0)
# else()
# include_directories(C:/msys64/mingw64/include)
# endif()
include_directories(D:/src/build_zmq/libzmq/include)


set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

add_subdirectory(test_systray)
