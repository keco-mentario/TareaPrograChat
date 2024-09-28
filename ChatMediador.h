//
// Created by Angie on 28/9/2024.
//

#ifndef CHATMEDIADOR_H
#define CHATMEDIADOR_H


#include "Mediador.h"
#include "ListaDoble.h"


class ChatMediador: public Mediador {
private:
    ListaDoble<Colaborador*> colaboradores;
public:
    void registrar(Colaborador *colaborador) override;
    void enviar(const std::string &mensaje, Colaborador *remitente) override;
};



#endif //CHATMEDIADOR_H
