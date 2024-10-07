//
// Created by Angie on 28/9/2024.
//

#include "Archivo.h"

#include<iostream>
#include<fstream>

using namespace std;

void Archivo::guardarParticipantes(string nombreArchivo, ChatMediador* colaboradores) {
        ofstream archivo;

        try {
            // Intentar abrir el archivo
            archivo.open(nombreArchivo, std::ios::out);
            if (!archivo.is_open()) {
                throw std::runtime_error("No se pudo abrir el archivo: " + nombreArchivo);
            }

            ListaDoble<Colaborador>* lista = colaboradores->getColaboradores();
            Nodo<Colaborador>* actual = lista->get_cabeza();  // Obtén el nodo cabeza

            while (actual != nullptr) {
                Colaborador* colaborador = actual->get_valor();  // Obtén el objeto Colaborador desde el nodo
                archivo << colaborador->get_nombre() << std::endl;  // Ejemplo de guardar el nombre del colaborador

                // Podrías guardar también sus mensajes, dependiendo de cómo estén estructurados
                //archivo << "Mensajes: " << colaborador->getMensajes() << std::endl;  // Ejemplo

                actual = actual->get_siguiente();  // Avanza al siguiente nodo
            }

            archivo.close();
         } catch (const std::exception& e) {
            std::cerr << "Ocurrio un error: " << e.what() << std::endl;
            if (archivo.is_open()) {
                archivo.close();
            }
        }
}



void Archivo::cargarParticipantes(string nombreArchivo, ChatMediador * colaboradores) {
    ifstream archivo;
    try {
        archivo.open(nombreArchivo, std::ios::in);
        if (!archivo.is_open()) {
            throw std::runtime_error("No se pudo abrir el archivo: " + nombreArchivo);
        }
        string lineas;
        while (getline(archivo,lineas)) {
            stringstream ss(lineas);
            string nombre;
            getline(ss, nombre);
            ListaDoble<Colaborador>* lista = colaboradores->getColaboradores();
            Colaborador* nuevoColaborador = new Usuario();
            nuevoColaborador->set_nombre(nombre);
            lista->agregarInicio(nuevoColaborador);
        }
    } catch (const std::exception& e) {
        // Manejo de excepciones: mostrar error y hacer limpieza si es necesario
        std::cerr << "Ocurrio un error al cargar el catalogo: " << e.what() << std::endl;
        if (archivo.is_open()) {
            archivo.close();
        }
    }
}

void Archivo::cargarChats(const std::string &nombreArchivo, ChatMediador *mediador) {
    std::ifstream archivo(nombreArchivo);
    if (!archivo.is_open()) {
        std::cerr << "Error abriendo archivo para cargar chats." << std::endl;
        return;
    }
    ListaDoble<Mensaje>* historial = mediador->getHistorialMensajes();
    std::string linea;
    while (std::getline(archivo, linea)) {
        Mensaje mensaje(linea);
        Mensaje* nuevoMensaje = new Mensaje(mensaje);
       mediador->getHistorialMensajes()->agregarInicio(nuevoMensaje);
    }
    archivo.close();
}



void Archivo::guardarChats(const std::string nombreArchivo, ChatMediador *mediador) {
    std::ofstream archivo(nombreArchivo);
    if (!archivo.is_open()) {
        std::cerr << "Error abriendo archivo para guardar chats." << std::endl;
        return;
    }

    ListaDoble<Mensaje>* historial = mediador->getHistorialMensajes();
    Nodo<Mensaje>* actual = historial->get_cabeza();

    while (actual != nullptr) {
        Mensaje *mensaje = actual->get_valor();
        archivo << mensaje->getMensaje() << std::endl;
        actual = actual->get_siguiente();
    }

    archivo.close();
}
