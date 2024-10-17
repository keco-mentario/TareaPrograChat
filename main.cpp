
#include <iostream>

#include "ChatMediador.h"
#include "ControladoraMenu.h"
#include "Usuario.h"

int main () {
    ControladoraMenu* sistema = new ControladoraMenu();
    sistema->control0();
    delete sistema;

    return 0;
}