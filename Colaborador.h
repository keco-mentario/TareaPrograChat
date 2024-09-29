//
// Created by ESCINF on 23/09/2024.
//

#ifndef COLABORADOR_H
#define COLABORADOR_H
#include <iostream>

class Mediador;

class Colaborador {
protected:
    Mediador * mediador;
    std::string nombre;
public:
    virtual void enviar (const std::string &mensaje) = 0;
    virtual void recibir (const std::string &mensaje) = 0;
    // aca lo que retorna es cnstante   // este segundo me impide cambiar nada dentro de esta función
    const std::string & get_nombre() const {
        return nombre;
    }
    //aca el const quiere decir que yo no puedo cambiar lo que viene en el parametro
    void set_nombre(const std::string &nombre) {
        this->nombre = nombre;
    }

    Colaborador(Mediador * const mediador, const std::string &nombre)
        : mediador(mediador),
          nombre(nombre) {
    }
};



#endif //COLABORADOR_H
