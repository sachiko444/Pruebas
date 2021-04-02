#pragma once



#include <string>


enum Estado {
    x,
    o,
    vacio
};

class Totito {

    public:
        void jugador(int p1, int p2);
        void colocar(int _colocar);
        bool win();
        void imprimir();



};