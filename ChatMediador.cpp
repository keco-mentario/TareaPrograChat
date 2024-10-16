//
// Created by ESCINF on 23/09/2024.
//

#include "ChatMediador.h"

void ChatMediador::registrar(Colaborador *colaborador)  {
    colaboradores.push_back(colaborador);
}

void ChatMediador::enviar(const std::string &mensaje, Colaborador *remitente)  {
    for (auto& colaborador: colaboradores) {
        if(colaborador != remitente) {
            colaborador->recibir(mensaje);
        }
    }
}