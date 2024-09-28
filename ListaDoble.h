
#ifndef LISTADOBLE_H
#define LISTADOBLE_H

#include"Nodo.h"
using namespace std;


template <class T>
class ListaDoble {
private:
    Nodo <T> * cabeza;
    Nodo <T> * cola;
public:
    ListaDoble();
    ~ListaDoble();
    Nodo<T> * get_cabeza() const;
    void set_cabeza(Nodo<T> *cabeza);
    Nodo<T> * get_cola() const;

    void set_cola(Nodo<T> *cola);


    void agregarInicio ( T* valor);
    void agregarFinal (const T& valor);
    std::string imprimirLista ()const;


};


template<class T>
ListaDoble<T>::ListaDoble() {
    cabeza=nullptr;
    cola=nullptr;
}

template<class T>
ListaDoble<T>::~ListaDoble() {
    Nodo<T> * actual = cabeza;
    while (actual != nullptr) {
        Nodo<T> * siguiente = actual->get_siguiente();
        delete actual;
        actual = siguiente;
    }

}

template<class T>
Nodo<T> * ListaDoble<T>::get_cabeza() const {
    return cabeza;
}

template<class T>
void ListaDoble<T>::set_cabeza(Nodo<T> *cabeza) {
    this->cabeza = cabeza;
}

template<class T>
Nodo<T> * ListaDoble<T>::get_cola() const {
    return cola;
}

template<class T>
void ListaDoble<T>::set_cola(Nodo<T> *cola) {
    this->cola = cola;
}

template<class T>
void ListaDoble<T>::agregarInicio (T* valor) {
    Nodo <T> * nuevoNodo = new Nodo <T> (valor);
    if (cabeza == nullptr) {
        cabeza = cola = nuevoNodo; // le asigno la cabeza y el nodo el mismo valor
    } else {
        nuevoNodo->set_siguiente(cabeza);
        cabeza->set_anterior(nuevoNodo);
        cabeza = nuevoNodo;
    }
}

template<class T>
void ListaDoble<T>:: agregarFinal (const T& valor) {
    Nodo <T> * nuevoNodo = new Nodo <T> (valor);
    if (cabeza == nullptr) {
        cabeza = cola = nuevoNodo; // le asigno la cabeza y el nodo el mismo valor
    } else {
        nuevoNodo->set_anterior(cola);
        cola->set_siguiente(nuevoNodo);
        cola = nuevoNodo;

    }

}

template<class T>
std::string ListaDoble<T>::imprimirLista () const{
    stringstream ss;
    Nodo <T> * actual = cabeza;
    while (actual != nullptr) {
        ss << actual->imprimirValor()<<endl;
        actual = actual ->get_siguiente();
    }
    return ss.str();

}




#endif //LISTADOBLE_H
