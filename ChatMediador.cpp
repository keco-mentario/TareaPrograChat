//
// Created by Angie on 28/9/2024.
//

#include "ChatMediador.h"
#include "Usuario.h"
#include "Colaborador.h"

void ChatMediador::registrar(Colaborador *colaborador)  {
    colaboradores.agregarInicio(colaborador);
}


void ChatMediador::enviar(const std::string &mensaje, Colaborador *remitente) {
    Nodo<Colaborador*>* actual = colaboradores.get_cabeza();
    while (actual != nullptr) {
        Colaborador* colaborador = actual->get_valor();
        if (colaborador != remitente) {
            colaborador->recibir(mensaje);
        }
        actual = actual->get_siguiente();
    }
}