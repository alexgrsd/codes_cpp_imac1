cmake_minimum_required(VERSION 3.10)
set(CMAKE_CXX_STANDARD 17)

project(TD05)

# On indique que l'on veut créer un exécutable "ex01" compilé à partir du fichier td04_ex01.cpp
add_executable(ex01 src/ex1.cpp)

add_executable(ex02 src/ex2.cpp)