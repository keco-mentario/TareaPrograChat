//
// Created by Angie on 30/9/2024.
//

#ifndef MENSAJE_H
#define MENSAJE_H
#include "Usuario.h"


class Mensaje {
private:
  Usuario * usuario;
  std::string mensaje;
public:
  Mensaje(std::string);
  std::string getMensaje();
  void setMensaje (std::string);
};



#endif //MENSAJE_H
