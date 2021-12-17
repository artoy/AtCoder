cmake_minimum_required(VERSION 3.21)
project(ABC)

set(CMAKE_CXX_STANDARD 14)

add_executable(ABC
        atcoderA.cpp
        atcoderB.cpp
        atcoderC.cpp
        atcoderD.cpp
        atcoderE.cpp
        atcoderF.cpp
        atcoderG.cpp
        atcoderH.cpp)

add_executable(atcoderA atcoderA.cpp)
add_executable(atcoderB atcoderB.cpp)
add_executable(atcoderC atcoderC.cpp)
add_executable(atcoderD atcoderD.cpp)
add_executable(atcoderE atcoderE.cpp)
add_executable(atcoderF atcoderF.cpp)
add_executable(atcoderG atcoderG.cpp)
add_executable(atcoderH atcoderH.cpp)