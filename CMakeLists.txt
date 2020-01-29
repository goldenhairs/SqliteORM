cmake_minimum_required(VERSION 3.15)
project(SolepersonORM)

set(CMAKE_CXX_STANDARD 17)

#add_compile_options(-l sqlite3)

add_executable(SolepersonORM main.cpp Model.cpp Model.h)