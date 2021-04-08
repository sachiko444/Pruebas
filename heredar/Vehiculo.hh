#pragma once

#include "Mapa.hh"

enum Direccion {
    Arriba,
    Abajo,
    Derecha,
    Izquierda
};


class Vehiculo {

    public:
    Vehiculo(const Mapa& mapa, const int posX, const int posY); //const & para no crear copia del map
    bool mover(const Direccion direccion); //es bool ya q no todos los movimientos van a ser validos



    private:
    const Mapa _mapa; //no va a cambiar [const]

    int _posX; //posicion actual de vehiculo
    int _posY;

    bool puedeNavegarHacia(const int i, const int j); //si vehiculo puede navegar (coordenadas)
};