//
// Created by Angie on 28/9/2024.
//

#include "ChatMediador.h"
#include "Colaborador.h"


ChatMediador::ChatMediador() {
    colaboradores = new ListaDoble<Colaborador>();
}

void ChatMediador::registrar(Colaborador *colaborador)  {
    colaboradores->agregarInicio(colaborador);
}


void ChatMediador::enviar(const std::string &mensaje, Colaborador *remitente) {
    Nodo<Colaborador>* actual = colaboradores->get_cabeza();
    while (actual != nullptr) {
        Colaborador* colaborador = actual->get_valor();
        if (colaborador != remitente) {
            colaborador->recibir(mensaje);
        }
        actual = actual->get_siguiente();
    }
}

void ChatMediador::enviarMensajePrivado(const std::string &mensaje, Colaborador *receptor, Colaborador *emisor) {
    Nodo<Colaborador>* actual = colaboradores->get_cabeza();
    while (actual != nullptr) {
        Colaborador* colaborador = actual->get_valor();
        if ((colaborador != emisor) && (colaborador == receptor) ){
            colaborador->recibir(mensaje);
        }
        if ((colaborador == emisor) && (colaborador != receptor) ){
            colaborador->enviarPrivado(mensaje);
        }
        actual = actual->get_siguiente();
    }
}

string ChatMediador::mostrarConectados() {
    stringstream s;
    s << colaboradores->imprimirLista();
    return s.str();
}