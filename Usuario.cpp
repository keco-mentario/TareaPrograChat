//
// Created by ESCINF on 23/09/2024.
//

#include "Usuario.h"

#include "Mediador.h"

Usuario::Usuario(Mediador * const mediador, const std::string &nombre)
        : Colaborador(mediador, nombre) {
}

void Usuario::enviar(const std::string &mensaje)  {
    std::cout << get_nombre () << " envia: "<< mensaje <<std::endl<<std::endl;
    mediador->enviar(mensaje, this);
}

void Usuario::recibir(const std::string &mensaje)  {
    std::cout <<get_nombre ()<<" recibo: "<< mensaje<<std::endl;
}