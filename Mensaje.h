//
// Created by Angie on 30/9/2024.
//

#ifndef MENSAJE_H
#define MENSAJE_H
#include "Usuario.h"
#include "ListaDoble.h"


class Mensaje {
private:
  Usuario * usuario;
  std::string mensaje;
  ListaDoble<string> historialMensajes;
public:
  Mensaje(std::string);
  std::string getMensaje();
  void setMensaje (std::string);
  ListaDoble<string> gethistorialChat();
};



#endif //MENSAJE_H
