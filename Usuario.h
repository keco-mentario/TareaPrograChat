//
// Created by Angie on 28/9/2024.
//

#ifndef USUARIO_H
#define USUARIO_H

#include "Colaborador.h"


class Usuario:public Colaborador {
public:
    void enviar(const std::string &mensaje) override;
    void recibir(const std::string &mensaje) override;

    Usuario(Mediador * const mediador, const std::string &nombre);

private:

};


#endif //USUARIO_H
