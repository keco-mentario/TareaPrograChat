//
// Created by bryan on 29/9/2024.
//

#include "Excepciones.h"

excepcionRango::excepcionRango(int min, int max) {
    _minimo = min;
    _maximo = max;
}

excepcionRango::~excepcionRango() {
}
//------------------------------------------------------

excepcionRangoInferior::excepcionRangoInferior(int min, int max, int val)
    : excepcionRango(min, max) {
    _valor = val;
}

excepcionRangoInferior::~excepcionRangoInferior() {
}

std::string excepcionRangoInferior::toString() {
    std::stringstream s;
    s << "El valor " << _valor << " es menor al minimo permitido." << std::endl;
    return s.str();
}

void excepcionRangoInferior::set_Valor(int val) {
    _valor = val;
}

//----------------------------------------------------

excepcionRangoSuperior::excepcionRangoSuperior(int min, int max, int val)
    : excepcionRango(min, max) {
    _valor = val;
}

excepcionRangoSuperior::~excepcionRangoSuperior() {
}

std::string excepcionRangoSuperior::toString() {
    std::stringstream s;
    s << "El valor " << _valor << " es mayor al maximo permitido." << std::endl;
    return s.str();
}

void excepcionRangoSuperior::set_Valor(int val) {
    _valor = val;
}

//-----------------------------------------------------

std::string excepcionValor::toString() {
    return "El valor digitado no es un numero entero.";
}
