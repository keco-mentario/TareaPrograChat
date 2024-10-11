//
// Created by bryan on 29/9/2024.
//

#include "Interfaz.h"

int Interfaz::menu() {

    bool finalizado = false;

    int op;
    while (finalizado == false) {
        try {
            system("pause");
           // system("cls");
            std::cout << std::endl;
            std::cout << "-------------     CHAT     -----------" << std::endl;
            std::cout << "-------------------------------------------" << std::endl;
            std::cout << "---------------------MENU------------------" << std::endl;
            std::cout << "   1-  Conectarse.                           " << std::endl;
            std::cout << "   2-  Ver usuarios conectados.                      " << std::endl;
            std::cout << "   3-  Ver historial del chat.                           " << std::endl;
            std::cout << "   4-  Enviar mensaje a todos los usuarios. " << std::endl;
            std::cout << "   5-  Enviar mensaje a un usuario privado.      " << std::endl;
            std::cout << "   6-  Cargar datos de los archivos.                    " << std::endl;
            std::cout << "   7-  Escribir datos en los archivos." <<std::endl;
            std::cout << "   8-  Salir.                                     " << std::endl;
            std::cout << "-------------------------------------------" << std::endl;
            std::cout << "   Seleccione una opcion: ";
            op = obtenerValor(1, 8);
            finalizado = true;
        }
        catch (excepcionRango* e) {  // Errores de Rango Inf o de Rango Sup.
            std::cout << e->toString() << std::endl;
        }

        catch (excepcionValor* e) {
            std::cout << e->toString() << std::endl;
            std::cout << "Parece que no es un numero." << std::endl;
        }
        if (!finalizado) {
            std::cin.clear();
            std::cin.ignore(255, '\n');
        }
    }
    return op;
}

void Interfaz::conectarse() {

}

void Interfaz::verUsuariosConectados() {

}

void Interfaz::verHistorialDeChat() {
}

void Interfaz::enviarMensajeATodos() {
}

void Interfaz::enviarMensajeAlPrivado() {
}

void Interfaz::cargarTodosLosArchivos() {
}

void Interfaz::escribirDatosEnLosArchivos() {
}

void Interfaz::despedida() {
}

void Interfaz::msjErrorRango() {
}

void Interfaz::msjIngresoExistoso() {
}

int Interfaz::obtenerValor(int min, int max)
{
    int r = 0;
    std::cout << "Digitar una valor entre: " << min << " y " << max << ": ";
    if (std::cin >> r) {
        if (r < min) throw new excepcionRangoInferior(min, max, r);
        if (r > max) throw new excepcionRangoSuperior(min, max, r);
    }
    else {
        throw new excepcionValor();
    }
    return r;
}

int Interfaz::leerEntero() {
    int n;
    bool continuar = true;
    while (continuar == true) {
        if (std::cin >> n) {
            std::cin.clear();
            std::cin.ignore(1024, '\n');
            continuar = false;
            return n;

        }
        else {
            std::cout << '\a';
            std::cerr << "\n\t\t[ ERROR ] \n\tValor incorrecto... digite un numero -> : ";

            std::cin.clear();
            std::cin.ignore(1024, '\n');
        }
    }
}

double Interfaz::leerDouble() {
    double n;
    bool continuar = true;
    while (true) {
        if (std::cin >> n) {
            std::cin.clear();
            std::cin.ignore(1024, '\n');
            return n;
        }
        else {
            std::cout << '\a';
            std::cerr << "\n\t\t[ ERROR ] \n\tValor incorrecto... digite un numero -> : ";

            std::cin.clear();
            std::cin.ignore(1024, '\n');
        }
    }
}

