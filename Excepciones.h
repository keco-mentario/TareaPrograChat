//
// Created by bryan on 29/9/2024.
//

#ifndef EXCEPCIONES_H
#define EXCEPCIONES_H


#include <iostream>
#include <sstream>

class excepcionRango { // <<Abstracta>>  (up-cast)
protected:
    int _minimo;
    int _maximo;
public:
    excepcionRango(int, int);
    virtual ~excepcionRango();
    virtual void set_Valor(int) = 0;  // M.V.P.
    virtual std::string toString() = 0;
};

class excepcionRangoInferior : public excepcionRango {
private:
    int _valor;
public:
    excepcionRangoInferior(int, int, int);
    virtual ~excepcionRangoInferior();
    std::string toString();
    void set_Valor(int);
};

class excepcionRangoSuperior : public excepcionRango {
private:
    int _valor;
public:
    excepcionRangoSuperior(int, int, int);
    virtual ~excepcionRangoSuperior();
    std::string toString();
    void set_Valor(int);
};

class excepcionValor {
public:
    virtual std::string toString();

};


#endif //EXCEPCIONES_H
