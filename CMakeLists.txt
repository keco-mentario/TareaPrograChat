cmake_minimum_required(VERSION 3.28.1)
project(TareaPrograChat)

set(CMAKE_CXX_STANDARD 14)

add_executable(TareaPrograChat
    main.cpp
        Colaborador.h
        Mediador.h
        ChatMediador.h
        ChatMediador.cpp
        Usuario.cpp
        Usuario.h
        Nodo.h
        ListaDoble.h
        Colaborador.cpp
        Archivo.h
        Archivo.cpp
        Mensaje.h
        Mensaje.cpp
        ControladoraMenu.cpp
        ControladoraMenu.h
        Excepciones.cpp
        Excepciones.h
        Interfaz.cpp
        Interfaz.h
)
