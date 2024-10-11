//
// Created by bryan on 29/9/2024.
//

#include "ControladoraMenu.h"

ControladoraMenu::ControladoraMenu() {
    mediando = new ChatMediador();
    archivoMensaje ="Historial.txt";
    archivoUsuarios = "usuarios.txt";
}

ControladoraMenu::~ControladoraMenu() {
    if (mediando!=nullptr) delete mediando;
}

ChatMediador * ControladoraMenu::getChatMediador () {
    return mediando;
}

int ControladoraMenu::controlMenu(){ return Interfaz::menu(); }
void ControladoraMenu::control0() { //Este es el control mas importante.
    int op = 0;
    do {
        op = Interfaz::menu();
        switch (op) {
            case 1: control1(); break;
            case 2: control2(); break;
            case 3: control3(); break;
            case 4: control4(); break;
            case 5: control5(); break;
            case 6: control6(); break;
            case 7: control7(); break;
            case 8: control8(); break;
            default: control9();
        };
        system("pause");
    } while (op != 8);
}

void ControladoraMenu::control1() {
       // Interfaz::conectarse();
        std::string nombre;
        std::cout <<"Digite su nombre: ";
        std::cin >> nombre;
        Usuario usuario1 (mediando, nombre);
        mediando->registrar(&usuario1);
}

void ControladoraMenu::control2() {
    //Interfaz::verUsuariosConectados();
    cout << mediando->mostrarConectados()<<endl;
}

void ControladoraMenu::control3() {
    //Interfaz::verHistorialDeChat();
    cout <<mediando->mostrarHistorialChat();
}

void ControladoraMenu::control4() {
    //Interfaz::enviarMensajeATodos();
    Usuario usuario1 (mediando, "Alicia");
    mediando->registrar(&usuario1);
    usuario1.enviar ("Hola a todos");
}

void ControladoraMenu::control5() {
    //Interfaz::enviarMensajeAlPrivado();
    Usuario usuario2 (mediando, "Cheshire cat");
    Usuario usuario3 (mediando, "Sombrerero loco");
    usuario2.enviar ("Hola Alicia");
    usuario3.enviar ("Todos estamos locos!");
    mediando->enviarMensajePrivado ("hola",&usuario2, &usuario3);
}

void ControladoraMenu::control6() {
    //Interfaz::cargarTodosLosArchivos();
    mediando->cargaChats(archivoMensaje, mediando);
    mediando->cargaParticipantes(archivoUsuarios, mediando);
}

void ControladoraMenu::control7() {
   // Interfaz::escribirDatosEnLosArchivos();
    mediando->guardaChats(archivoMensaje, mediando);
    mediando->guardaParticipantes(archivoUsuarios, mediando);
}

void ControladoraMenu::control8() {
    Interfaz::despedida();
}

void ControladoraMenu::control9() {
    Interfaz::msjErrorRango();
}
