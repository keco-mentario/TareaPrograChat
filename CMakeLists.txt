cmake_minimum_required(VERSION 3.28)
project(Mediador)

set(CMAKE_CXX_STANDARD 17)

add_executable(Mediador main.cpp
        Mediador.h
        Colaborador.h
        ChatMediador.cpp
        ChatMediador.h
        Usuario.cpp
        Usuario.h)
