//
// Created by Angie on 28/9/2024.
//

#ifndef CHATMEDIADOR_H
#define CHATMEDIADOR_H


#include "Mediador.h"
#include "ListaDoble.h"
#include "Usuario.h"
#include "Mensaje.h"
#include "Archivo.h"

class Mensaje;

class ChatMediador: public Mediador {
private:
    ListaDoble<Colaborador>* colaboradores;
    ListaDoble<Mensaje>* historial;
    Mensaje * mensajes;
public:
    ChatMediador();
    void registrar(Colaborador *colaborador) override;
    void enviar(const std::string &mensaje, Colaborador *remitente) override;
    void enviarMensajePrivado(const std::string &mensaje, Colaborador *remitente, Colaborador *emisor);
    string mostrarConectados();
    void guardaChats(string nombreArchivo,ChatMediador*);
    void cargaChats(string nombreArchivo,ChatMediador *);
    void guardaParticipantes(string nombreArchivo,ChatMediador *);
    void cargaParticipantes(string nombreArchivo,ChatMediador *);
    ListaDoble<Colaborador>* getColaboradores();
    ListaDoble<Mensaje>* getHistorialMensajes();
};



#endif //CHATMEDIADOR_H
