#include <iostream>

#include "Lista.hh"

int main(int argc, char** argv) {

    Lista l(1, new Lista(2, new Lista(3)));
    
    std::cout << "la lista es: " <<l.to_string() << "\n";
    std::cout << "suma de lista: " << l.sumatoria() << "\n";
}