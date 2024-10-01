//
// Created by Angie on 30/9/2024.
//

#include "Mensaje.h"

Mensaje::Mensaje(std::string msj){
  mensaje = msj;
}

std::string Mensaje::getMensaje(){
  return mensaje;
}

void Mensaje::setMensaje (std::string msj){
  mensaje = msj;
}

ListaDoble<string> Mensaje::gethistorialChat() {
  return historialMensajes;
}