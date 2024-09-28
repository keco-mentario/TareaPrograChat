//
// Created by Angie on 28/9/2024.
//
#include  <iostream>
#include "Usuario.h"
#include "Mediador.h"

Usuario::Usuario(): Colaborador(mediador, nombre) {
    mediador = nullptr;
    nombre = "";

}

Usuario::Usuario(Mediador * const mediador, const std::string &nombre)
        : Colaborador(mediador, nombre) {
}

void Usuario::enviar(const std::string &mensaje)  {
    cout << get_nombre () << " envia: "<< mensaje <<std::endl<<std::endl;
    mediador->enviar(mensaje, this);
}

void Usuario::enviarPrivado(const std::string &mensaje) {
    cout << get_nombre () << " envia: "<< mensaje <<std::endl<<std::endl;
    mediador->enviarMensajePrivado(mensaje, this, this);
}

void Usuario::recibir(const std::string &mensaje)  {
    std::cout <<get_nombre ()<<" recibio: "<< mensaje<<std::endl;
}