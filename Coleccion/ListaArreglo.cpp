#include "ListaArreglo.hh"
#include <cstddef>
#include <iostream>





int& ListaArreglo::operator[](const std::size_t i) {

    return _content[i];

}

std::size_t ListaArreglo::length() {

    int size = 0;
    for(int i=0; i<_tam; i++) {
        size++;
    }

    return size;

}

void ListaArreglo::remove(const std::size_t i) {

    int turno = 0;
    int* temp = new int[_tam -1];

    for(int j=0; j<_tam; j++) {
        if (_content[j] != i) {
            temp[turno] = _content[j];
            turno++;
        }
    }
    
    delete[] _content;
    _content = temp;
    _tam--;
}


void ListaArreglo::push (int v) {

    int* temp = new int[_tam + 1];
    temp[_tam] = v;

    for(int i = 0; i < _tam; i++) {
        temp[i] = _content[i];
    }

    delete[] _content;
    _content = temp;
    _tam++;
}


ListaArreglo::~ListaArreglo() {
}