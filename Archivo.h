#ifndef ARCHIVO_H
#define ARCHIVO_H

#include "ChatMediador.h"

class Archivo {
public:
    static void guardarChats (string nombreArchivo, Colaborador * mediador);
    static void cargarChats (string nombreArchivo, Colaborador *mediador);
    static void guardarParticipantes (string nombreArchivo, Colaborador * mediador);
    static void cargarParticipantes (string nombreArchivo, Colaborador * mediador);
};


#endif //ARCHIVOMANAGER_H