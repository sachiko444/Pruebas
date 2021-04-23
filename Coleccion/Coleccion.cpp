#include "IColeccion.hh"
#include <cstddef>
#include <iostream>


bool buscar(IColeccion& colection, int numero) {

    for(int i= 0; i< colection.length(); i++) {
        if(colection[i] == numero) {
            return true;
        } 
        
    }

    return false;
}

void agregarSiNoExiste (IColeccion& colection, int numero) {

    if(!buscar(colection,numero)) {
        colection.push(numero);
    }

}

void ordenar(IColeccion& colection) {

    bool ordenado = true;
    for(int i = 0; i < (colection.length() -1); i++) {
        
        int a = colection[i];
        int b = colection[i+1];
        
        if(a > b) {
            ordenado = false;
            colection[i] = b;
            colection[i+1] = a;
        }
    }

    if(!ordenado) {
        ordenar(colection);
    }
}