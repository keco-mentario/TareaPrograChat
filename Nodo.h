//
// Created by ESCINF on 22/08/2024.
//

#ifndef NODO_H
#define NODO_H

#endif //NODO_H

template <class T>
class Nodo {
public:
    Nodo (const T& valor);
    T get_valor() const;
    void set_valor(const T &valor);
    Nodo<T> * get_siguiente() const;
    void set_siguiente(Nodo<T> *siguiente);
    Nodo<T> * get_anterior() const;
    void set_anterior(Nodo<T> *anterior);
    //~Nodo();
private:
    T valor;
    Nodo<T> *siguiente;
    Nodo<T> *anterior;

};


template<class T>
Nodo<T>::Nodo(const T& valor) {
    this -> valor =  valor;
    anterior = nullptr;
    siguiente = nullptr;
}

template<class T>
T Nodo<T>::get_valor() const {
    return valor;
}

template<class T>
void Nodo<T>::set_valor(const T &valor) {
    this->valor = valor;
}

template<class T>
Nodo<T> * Nodo<T>::get_siguiente() const {
    return siguiente;
}

template<class T>
void Nodo<T>::set_siguiente(Nodo<T> *siguiente) {
    this->siguiente = siguiente;
}

template<class T>
Nodo<T> * Nodo<T>::get_anterior() const {
    return anterior;
}

template<class T>
void Nodo<T>::set_anterior(Nodo<T> *anterior) {
    this->anterior = anterior;
}


