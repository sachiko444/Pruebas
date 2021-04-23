#include "ListaEncadenada.hh"
#include <cstddef>

#include <iostream>

ListaEncadenada::ListaEncadenada(int valor, ListaEncadenada* resto) :  _valor(valor), _resto(resto) {}



int& ListaEncadenada::operator[](const std::size_t i) {
    
    ListaEncadenada* valor = this;

    for(std::size_t j = i; j>0; j--) { //>0 porque empieza en 0
        
        if(valor==nullptr) {
            std::cout << "A punto de tronar \n";
        }
        
        valor = valor->_resto; 
    }

    return valor->_valor;

}






std::size_t ListaEncadenada::length() {

    int resultado = 0; 

    for(ListaEncadenada* i = this; i != nullptr; i= i->_resto) { //empieza desde primervalor y va aumentando
        resultado++;
    }

    return resultado; 
}




void ListaEncadenada::remove(const std::size_t i) {
    ListaEncadenada* actual = this;
    ListaEncadenada* previo = nullptr;

    for(int j = 0; j < i; j++) {  //avanzar hasta q actual sea el que quiero eliminar
        previo = actual; //previo es uno antes del que quiero eliminar
        actual = actual->_resto;
    }

    if(previo == nullptr) {  //si quiero eliminar el primer elemento
        ListaEncadenada* tmp = _resto; //para no tener fugas de memoria

        _valor = _resto->_valor; //en lugar de eliminar el primero, solo se traspasa de lugar como pop
        _resto = _resto->_resto;

        tmp->_resto=nullptr; //asignar nullptr a _resto
        delete tmp; //elimina ultimo valor
        return;
    }

    //si el que trato de eliminar no es el primer elemento de lista
    previo->_resto = actual->_resto; //actual=el que va despues de actual
    actual->_resto=nullptr; //asignar nullptr a actual
    delete actual; //eliminar actual


}


void ListaEncadenada::push (int v) {
    
    if (_resto == nullptr) { //si llega a final
        _resto = new ListaEncadenada(0, nullptr); //crea lista dentro de ultimo elemento

        _resto->_valor = v; //primer valor de nueva lista creada sera el v
    } else {
        _resto->push(v); //se repite hasta q llegue a nullptr
    }


}

ListaEncadenada::~ListaEncadenada() {
    delete _resto;
}