#include "Cola.hh"

Cola::Cola(int i) : Lista(i) {}

Cola::~Cola(){}

void Cola::queue(int i) { //agrega nuevo valor al inicio

    Lista* nueva = new Lista(_valor, _resto);
    _valor = i;
    _resto = nueva;

}

int Cola::dequeue() { //Retorna y quita el ultimo valor de lista 
    
    int respuesta = (*this)[this->largo()-1]; 

    this->eliminar(this->largo() - 1);

    return respuesta;

    
}