#include <iostream>
#include <vector>

#include "mapa.hh"


int main(int argc, char** argv) {

    Mapa m;

    std::cout << "Se van a agregar ciertos paises con sus respectivas coordenadas \n";
    m.agregar("Piltover", Coord(4, 4));
    m.agregar("Piltover", Coord(1, 4));
    m.agregar("Piltover", Coord(3, 4));
    m.agregar("Mixco", Coord(7, 7));
    m.agregar("Legoland", Coord(2, 4));

    m.imprimir();
    std::cout << "\n";

    m.agregar("Mixco", Coord(4, 4));
    std::cout << "Se va a tratar de agregar (1,4) a Mixco la cual le pertenece a Piltover \n";
    std::cout << "Esto no deberia de permitirse y deberia quedar igual \n";
    m.imprimir();
    std::cout << "\n";


    std::cout << "Se va a quitar la coordenada (1,4) a Piltover y se va a agregar esa misma a Mixco \n";
    std::cout << "Ahora que se la quitamos a Piltover si deberia permitir tenerla en Mixco \n";
    m.quitar("Piltover", Coord(1,4));
    m.agregar("Mixco", Coord(1,4));

    m.imprimir();
    std::cout << "\n";

/*
    for(int i=0; i <m._country.size(); i++) {
        std::cout << m._country[i] << "  "; 

        for(int j = 0; j<m._coordenadas[i].size(); j++) {
            Coord coord = m._coordenadas[i][j];
            std::cout << "("<<coord._latitud << "," << coord._longitud << ")" << " ";
        }

        std::cout << "\n";
    }
*/
}