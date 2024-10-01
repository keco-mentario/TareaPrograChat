//
// Created by Angie on 28/9/2024.
//

#include "ChatMediador.h"
#include "Colaborador.h"


ChatMediador::ChatMediador() {
    colaboradores = new ListaDoble<Colaborador>();
   // historialMensajes = new ListaDoble<string>;
}

void ChatMediador::registrar(Colaborador *colaborador)  {
    colaboradores->agregarInicio(colaborador);
}


void ChatMediador::enviar(const std::string &mensaje, Colaborador *remitente) {
    Nodo<Colaborador>* actual = colaboradores->get_cabeza();
    std::string mensajeCompleto = remitente->get_nombre() + ": " + mensaje;
    historialMensajes.agregarInicio(&mensajeCompleto);
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
    std::string mensajeCompleto = receptor->get_nombre() + ": " + mensaje;
    historialMensajes.agregarInicio(&mensajeCompleto);
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

void ChatMediador::guardaChats(string nombreArchivo,ListaDoble<std::string>& mensajes) {
    Archivo::guardarChats(nombreArchivo, mensajes);
}

/*
void ChatMediador::cargaChats(string nombreArchivo,ChatMediador *mediador) {
    Archivo::cargarChats(nombreArchivo, mediador);
}*/


void ChatMediador::guardaParticipantes(string nombreArchivo,ChatMediador * mediador) {
    Archivo::guardarParticipantes(nombreArchivo, mediador);
}

void ChatMediador::cargaParticipantes(string nombreArchivo,ChatMediador *mediador) {
    Archivo::cargarParticipantes(nombreArchivo, mediador);
}

ListaDoble<Colaborador>* ChatMediador::getColaboradores() {
    return colaboradores;
}

