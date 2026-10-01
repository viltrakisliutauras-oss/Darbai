cmake_minimum_required(VERSION 4.3)
project(Rugsejo_17_uzduotys)

set(CMAKE_CXX_STANDARD 20)

add_executable(Rugsejo_17_uzduotys main.cpp
        uzduotis2.cpp
        uzduotis2.h
        pavyzdziai2.cpp
        pavyzdziai2.h)
add_executable(new_target uzduotis2.cpp uzduotis2.h)
add_executable( pavyzdziai2.cpp pavyzdziai2.h)