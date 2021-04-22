#include "totito.h"

#include <iostream>

int main() {
    Totito juegomegaepicoXD;

    while(juegomegaepicoXD.comprobacion() == 0) {
        juegomegaepicoXD.imprimirTurno();

        std::string casilla;
        std::cout << "hola amigo que casilla quieres :))?\n";
        std::cout << "solo ponla no tengas miedo :)\n";
        std::cout << "CASILLA: ";
        std::cin >> casilla;

        while(!juegomegaepicoXD.ponerPieza(casilla)) { //cuando sea false
            std::cout << "bruh\n";
            std::cout << "CASILLA: ";
            std::cin >> casilla;
        }
    }

    juegomegaepicoXD.imprimirTurno();

    int ganador = juegomegaepicoXD.comprobacion();
    if (ganador == 3) {
        std::cout << "wowwwwwwwwww, yall guys suck\n";
    } else {
        std::cout << "damn el jugador " << ganador << " won:)) gg ezzzzz \n";
    }
}