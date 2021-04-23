#include "ListaArreglo.hh"
#include "ListaEncadenada.hh"
#include "IColeccion.hh"

#include <iostream>
#include <cstddef>


int main() {
    ListaArreglo lista;
    lista.push(4);
    lista.push(8);
    lista.push(25);
    lista.push(2);
    lista.push(1);
    
    std::cout << "\n";
    std::cout << "length: " << lista.length() << "\n";
    for (int i = 0; i < lista.length(); i++) {
        std::cout << lista[i] << "\n";
    }
    
    if(buscar(lista, 25)) {
        std::cout << "25 existe en la lista\n";
    } else {
        std::cout << "25 no existe en la lista\n";
    }

    lista.remove(3);

    std::cout << "\n";
    std::cout << "length: " << lista.length() << "\n";
    for (int i = 0; i < lista.length(); i++) {
        std::cout << lista[i] << "\n";
    }
    
    if(buscar(lista, 25)) {
        std::cout << "25 existe en la lista\n";
    } else {
        std::cout << "25 no existe en la lista\n";
    }
    
    agregarSiNoExiste(lista, 16);
    agregarSiNoExiste(lista, 32);
    
    std::cout << "\n";
    std::cout << "length: " << lista.length() << "\n";
    for (int i = 0; i < lista.length(); i++) {
        std::cout << lista[i] << "\n";
    }
    
    ordenar(lista);
    
    std::cout << "\n";
    std::cout << "length: " << lista.length() << "\n";
    for (int i = 0; i < lista.length(); i++) {
        std::cout << lista[i] << "\n";
    }

    return 0;
}