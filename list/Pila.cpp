#include "Pila.hh"

Pila::Pila(int i) : Lista(i) {}

Pila::~Pila(){}

void Pila::push(int i) { //agrega nuevo valor al inicio

    Lista* nueva = new Lista(_valor, _resto);
    _valor = i;
    _resto = nueva;

}

int Pila::pop() { //Retorna y quita el primer valor (f.e.42) 

    int respuesta = _valor;

    if(_resto != nullptr) {
        
        Lista* tmp = _resto;

        _valor = _resto->get_valor(); //el 2 se convierte en 1
        _resto = _resto->get_resto(); //el 3 se convierte en 2

        tmp->terminar();
        //delete tmp;
    }

    return respuesta;
}
