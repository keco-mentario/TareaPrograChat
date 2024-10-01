#ifndef ARCHIVO_H
#define ARCHIVO_H

#include "ChatMediador.h"
class ChatMediador;

class Archivo {
public:
    static void guardarChats (string nombreArchivo, const ListaDoble<std::string>& mensajes);
    static void cargarChats (string nombreArchivo, ChatMediador *mediador, string mensaje);
    static void guardarParticipantes (string nombreArchivo, ChatMediador * mediador);
    static void cargarParticipantes (string nombreArchivo, ChatMediador * mediador);
};


#endif //ARCHIVOMANAGER_H