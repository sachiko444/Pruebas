#include "Cola.hh"

Cola::Cola(int i) : Lista(i) {}

Cola::~Cola(){}

void Cola::queue(int i) { //agrega nuevo valor al inicio

    Lista* nueva = new Lista(_valor, _resto);
    _valor = i;
    _resto = nueva;

}

int Cola::dequeue() { //Retorna y quita el ultimo valor de lista 

    Lista* nueva = new Lista(_valor, _resto);
    
    while(_resto != nullptr) {
        _valor = _resto->get_valor();
        _resto = _resto->get_resto();
    }
    int respuesta = _valor;
    return respuesta;

    nueva->eliminar(nueva->largo() - 1);
}