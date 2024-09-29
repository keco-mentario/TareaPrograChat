//
// Created by ESCINF on 23/09/2024.
//

#ifndef CHATMEDIADOR_H
#define CHATMEDIADOR_H
#include <vector>



#include "Mediador.h"


class ChatMediador: public Mediador {
private:
    std::vector<Colaborador*> colaboradores;
public:
    void registrar(Colaborador *colaborador) override;
    void enviar(const std::string &mensaje, Colaborador *remitente) override;
};



#endif //CHATMEDIADOR_H
