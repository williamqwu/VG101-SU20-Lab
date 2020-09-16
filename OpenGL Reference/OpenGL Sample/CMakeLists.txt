cmake_minimum_required(VERSION 2.7)

project(GLtest)

set(CMAKE_C_STANDARD 14)

set(CMAKE_C_FLAGS "-Wall -Werror")

find_package(OPENGL REQUIRED)
include_directories(${OPENGL_INCLUDE_DIR})

find_package(GLUT REQUIRED)
include_directories(${GLUT_INCLUDE_DIR})


add_executable(gltest glmain.cpp shape.cpp home.cpp ${SOURCES})
target_link_libraries(gltest ${GLUT_LIBRARY} ${OPENGL_LIBRARY} m)