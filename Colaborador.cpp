//
// Created by Angie on 28/9/2024.
//

#include "Colaborador.h"

const std::string& Colaborador::get_nombre() const {
    return nombre;
}

void Colaborador::set_nombre(const std::string &nombre) {
    this->nombre = nombre;
}

Colaborador::Colaborador(Mediador * const mediador, const std::string &nombre)
    : mediador(mediador),
      nombre(nombre) {
}

std::string Colaborador::mostrar () {
    std::stringstream ss;
    ss << get_nombre ();
    return ss.str();
}