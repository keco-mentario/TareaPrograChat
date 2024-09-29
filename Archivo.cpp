//
// Created by Angie on 28/9/2024.
//

#include "Archivo.h"

#include<iostream>
#include<fstream>

using namespace std;

void Archivo::guardarChats(string nombreArchivo, Colaborador* colaboradores) {
        ofstream archivo;

        try {
            // Intentar abrir el archivo
            archivo.open(nombreArchivo, std::ios::out);
            if (!archivo.is_open()) {
                throw std::runtime_error("No se pudo abrir el archivo: " + nombreArchivo);
            }

            Nodo<Colaborador> aux = colaboradores;
            /*
            int index = 0;
            while (aux != nullptr) {
                aux = aux->getSiguiente();
                if (aux != nullptr) {
                    archivo << aux-> getObjeto()->getTipo()<<";"<<
                     aux-> getObjeto()->getTitulo()<<";"<<
                     aux-> getObjeto()->getAutor()<<";";
                    if (aux-> getObjeto()->getTipo() == "Libro") {
                        const Libro* libro = dynamic_cast<Libro*>(aux-> getObjeto());
                        archivo << libro->getNumPaginas()<<endl;
                    } else if(aux-> getObjeto()->getTipo() == "Revista") {
                        const Revista* rev = dynamic_cast<Revista*>(aux-> getObjeto());
                        archivo << rev->getNumEdicion()<<endl;
                    }
                }
                index++;
            }

            archivo.close();// cierro el archivo
*/
         } catch (const std::exception& e) {
            std::cerr << "Ocurrio un error: " << e.what() << std::endl;
            if (archivo.is_open()) {
                archivo.close();
            }
        }
}



void Archivo::cargarChats(string nombreArchivo, Colaborador * mate) {
    ifstream archivo;
    try {
        archivo.open(nombreArchivo, std::ios::in);
        if (!archivo.is_open()) {
            throw std::runtime_error("No se pudo abrir el archivo: " + nombreArchivo);
        }
        string lineas;
        while (getline(archivo,lineas)) {
            stringstream ss(lineas);
            string tipos, titulos, autores, numPaginas, numEdiciones;
            int nPagina, nEdicion;

            getline(ss, tipos, ';');
            getline(ss, titulos, ';');
            getline(ss, autores, ';');

           /* if (tipos == "Libro") {
                getline(ss, numPaginas);
                nPagina = stoi(numPaginas);
                mate->getArchivo()->insertFirst(new Libro ( titulos, autores, nPagina));

            } else if (tipos == "Revista") {
                getline(ss, numEdiciones);
                nEdicion = stoi(numEdiciones);
                mate->getArchivo()->insertFirst(new Libro ( titulos, autores, nEdicion));
            }else {
                cout<<"Tipo incorrecto de datos en el archivo, estos no fueron ingresados";
            }*/

        }
    } catch (const std::exception& e) {
        // Manejo de excepciones: mostrar error y hacer limpieza si es necesario
        std::cerr << "Ocurrio un error al cargar el catalogo: " << e.what() << std::endl;
        if (archivo.is_open()) {
            archivo.close();
        }
    }
}