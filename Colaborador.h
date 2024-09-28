
#ifndef COLABORADOR_H
#define COLABORADOR_H
#include <sstream>

class Mediador;

class Colaborador {
protected:
    Mediador * mediador;
    std::string nombre;
public:
    virtual void enviar (const std::string &mensaje) = 0;
    virtual void recibir (const std::string &mensaje) = 0;
    virtual void enviarPrivado (const std::string &mensaje) = 0;

    const std::string & get_nombre() const ;
    void set_nombre(const std::string &nombre) ;
    Colaborador(Mediador * const mediador, const std::string &nombre);
};

#endif //COLABORADOR_H
