
#include <iostream>

#include "ChatMediador.h"
#include "Usuario.h"

int main () {
    ChatMediador mediador;

    Usuario usuario1 (&mediador, "Alicia");
    Usuario usuario2 (&mediador, "Cheshire cat");
    Usuario usuario3 (&mediador, "Sombrerero loco");

    mediador.registrar(&usuario1);
    mediador.registrar(&usuario2);
    mediador.registrar(&usuario3);

    usuario1.enviar ("Hola a todos");
    usuario2.enviar ("Hola Alicia");
    usuario3.enviar ("Todos estamos locos!");
    cout <<endl;
    mediador.enviarMensajePrivado ("hola",&usuario2, &usuario3);
    mediador.enviarMensajePrivado ("que tal",&usuario3, &usuario2);
    return 0;
}