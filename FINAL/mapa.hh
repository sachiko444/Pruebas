#pragma once

#include <string>
#include <vector>
#include <iostream>

class Coord;

enum Terreno {
    Tierra,  //0
    Mar      //1 
};

class Mapa {
    
    public:
        bool operator==(Coord coordenadas);
        bool agregar(std::string country, Coord coordenadas);
        bool quitar(std::string country, Coord coordenadas);
        void imprimir();

        std::vector <std::string> _country;
        std::vector <std::vector <Coord> > _coordenadas;  //vector dentro de vector
    

};

class Coord {

    public:
        Coord(int latitud, int longitud): _latitud(latitud), _longitud(longitud) {}

        bool operator==(Coord coordenadas) {
            
            if(coordenadas._latitud==_latitud && coordenadas._longitud == _longitud) { 
                return true;
            } else {
                return false;
            }

        }

        int _latitud;
        int _longitud;

};
