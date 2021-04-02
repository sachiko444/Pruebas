#pragma once

#include <string>

enum Pieza {
    Vacio,
    Cero,
    Equis
};

class Totito {

    public:
        bool ponerPieza(std::string casilla);
        int comprobacion();
        void imprimirTurno();

    private:
        int nombreAIndice(std::string casilla);

        Pieza _posiciones[9] = {Vacio, Vacio, Vacio, Vacio, Vacio, Vacio, Vacio, Vacio, Vacio};
        int _turno = 1;
        int _jugador = 1;

};