
#include <iostream>

#include "ChatMediador.h"
#include "ControladoraMenu.h"
#include "Usuario.h"

int main () {

 ControladoraMenu* sistema = new ControladoraMenu();
 sistema->control0();

 delete sistema;
    /*string usuariosChat = "usuarios.txt";
    string historiaChat = "Historial.txt";

    ChatMediador mediador;

    Usuario usuario1 (&mediador, "Alicia");
    Usuario usuario2 (&mediador, "Cheshire cat");
    Usuario usuario3 (&mediador, "Sombrerero loco");


   mediador.registrar(&usuario1);
   mediador.registrar(&usuario2);
   mediador.registrar(&usuario3);
    cout << "usuarios conectados; "<<endl;
   cout << mediador.mostrarConectados()<<endl;

    mediador.guardaParticipantes( usuariosChat, &mediador);
    mediador.cargaParticipantes( usuariosChat, &mediador);

    cout << mediador.mostrarConectados()<<endl;

    usuario1.enviar ("Hola a todos");
    usuario2.enviar ("Hola Alicia");
    usuario3.enviar ("Todos estamos locos!");
    cout <<endl;
    mediador.enviarMensajePrivado ("hola",&usuario2, &usuario3);
    cout <<endl;
    mediador.enviarMensajePrivado ("que tal?",&usuario3, &usuario2);

    mediador.guardaChats(historiaChat, &mediador);
    mediador.cargaChats(historiaChat, &mediador);

     cout <<mediador.mostrarHistorialChat();*/

    return 0;
}