#pragma once

#include "IVehiculo.hh"
#include "Mapa.hh"

class Vehiculo : public IVehiculo {

    public:
    Vehiculo(const Mapa& mapa); //const & para no crear copia del map

    bool mover(const Direccion direccion) override;
    void imprimir() override;
    bool colocarVehiculo() override;

    protected:
    Mapa _mapa;
    virtual bool puedeNavegarHacia(const int i, const int j);
    virtual bool posicionInicial(int& posX, int& posY) = 0;

    private:

    int _posX;
    int _posY;
};


//const & para no crear copia del map
//es bool ya q no todos los movimientos van a ser validos
//si vehiculo puede navegar (coordenadas)
//posicion actual de vehiculo