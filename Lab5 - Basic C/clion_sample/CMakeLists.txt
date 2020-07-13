cmake_minimum_required(VERSION 2.7)

project(hw4)

# Set the C standard to C11
set(CMAKE_C_STANDARD 11)

# Open all warnings and consider warnings as errors
set(CMAKE_C_FLAGS "-Wall -Werror")

# Add executable for different exercises
add_executable(ex1 ex1.c)
add_executable(ex2 ex2.c)
add_executable(ex3 ex3.c)
add_executable(ex4 ex4.c)
add_executable(ex5 ex5.c sum.c prod.c quo.c rem.c mpow.c)
# Be careful that when compiling several files for one project, you should put all the source files into one add_executable command.
# Probably the following command can also work:
# add_executable(test2 ${SOURCE_FILES})
# set(SOURCE_FILES main.cpp func.cpp)