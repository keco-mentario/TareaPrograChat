//
// Created by Angie on 28/9/2024.
//

#ifndef MEDIADOR_H
#define MEDIADOR_H

#include "Colaborador.h"

class Mediador {
public:
    virtual void registrar (Colaborador* colaborador) = 0;
    virtual void enviar (const std:: string & mensaje, Colaborador* remitente) = 0;
};

#endif //MEDIADOR_H
