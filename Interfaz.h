//
// Created by bryan on 29/9/2024.
//

#ifndef INTERFAZ_H
#define INTERFAZ_H

#include <iostream>
#include <sstream>
#include "Excepciones.h"

class Interfaz {
public:

        static int menu();
        static void conectarse();
        static void verUsuariosConectados();
        static void verHistorialDeChat();
        static void enviarMensajeATodos();
        static void enviarMensajeAlPrivado();
        static void cargarTodosLosArchivos();
        static void escribirDatosEnLosArchivos();
        static void despedida();
        static void msjErrorRango();
        static void msjIngresoExistoso();
        static int obtenerValor(int, int);
        static int leerEntero();
        static double leerDouble();
};



#endif //INTERFAZ_H
