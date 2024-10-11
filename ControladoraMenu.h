//
// Created by bryan on 29/9/2024.
//

#ifndef CONTROLADORAMENU_H
#define CONTROLADORAMENU_H

#include "Archivo.h"
#include "ChatMediador.h"
#include "Interfaz.h"

class ControladoraMenu {
    private:
	ChatMediador * mediando;
	string archivoMensaje;
	string archivoUsuarios;
    public:
    ControladoraMenu();;
    virtual ~ControladoraMenu();
    // Gets
	ChatMediador * getChatMediador ();

    int controlMenu();
    void control0(); //Este es el control mas importante.
	void control1();
    void control2();
    void control3();
    void control4();
    void control5();
	void control6();
	void control7();
	void control8();
	void control9();


};



#endif //CONTROLADORAMENU_H
