#include "mapa.hh"
#include <vector>
#include <iostream>




bool Mapa::agregar(std::string country, Coord coordenadas) {

    for(int i=0; i<_country.size(); i++) {

        for(int j = 0; j<_coordenadas[i].size(); j++) {//revise la lista de coordenadas dentro de la lista de coordenadas
            if(coordenadas == _coordenadas[i][j]) { //si coordenadas ya existen 
                return false;
            }
        }
    }

    for(int i=0; i<_country.size(); i++) {

        if(country == _country[i]) { //si country ya existe
            _coordenadas[i].push_back(coordenadas);
            return true; 
        } 
    }

    _country.push_back(country); //crear nuevo espacio de nuevo country
                    
    std::vector <Coord> _newcoord;
    _newcoord.push_back(coordenadas); //a;adir nuevas coordenadas del country 

    _coordenadas.push_back(_newcoord);

    return true;

}




//Quitarle terreno: Esta operación permite quitarle un pedazo de terreno al pais. 
//En caso que parte o todo el terreno que se esta quitando no le pertence al pais, la operación debe fallar.


bool Mapa::quitar(std::string country, Coord coordenadas) {

    for(int i=0; i<_country.size(); i++) {

        if(country == _country[i]) { //si country existe

            for(int j = 0; j<_coordenadas[i].size(); j++) {

                if(coordenadas == _coordenadas[i][j]) { //si tiene esas coordenadas
                    _coordenadas[i].erase(_coordenadas[i].begin() + j);
                    return true;
                }
            }

        }
    }

    return false;

}







//IMPRIME

void Mapa::imprimir() {


        for(int i=0; i <_country.size(); i++) {
        std::cout << _country[i] << "  "; 

        for(int j = 0; j<_coordenadas[i].size(); j++) {
            Coord coord = _coordenadas[i][j];
            std::cout << "("<<coord._latitud << "," << coord._longitud << ")" << " ";
        }

        std::cout << "\n";
    }

}




