#include "totito.h"

#include <iostream>
#include <string>

int Totito::nombreAIndice(std::string casilla) {
    // para pasar de A1, B1, C3, etc. a 0-8
    if (casilla == "A1" || casilla == "a1") {
        return 0;
    }
    else if (casilla == "B1" || casilla == "b1") {
        return 1;
    }
    else if (casilla == "C1" || casilla == "c1") {
        return 2;
    }
    else if (casilla == "A2" || casilla == "a2") {
        return 3;
    }
    else if (casilla == "B2" || casilla == "b2") {
        return 4;
    }
    else if (casilla == "C2" || casilla == "c2") {
        return 5;
    }
    else if (casilla == "A3" || casilla == "a3") {
        return 6;
    }
    else if (casilla == "B3" || casilla == "b3") {
        return 7;
    }
    else if (casilla == "C3" || casilla == "c3") {
        return 8;
    }

    return -1; // casilla inválida
}

bool Totito::ponerPieza(std::string casilla) {
    int indice = nombreAIndice(casilla);

    if (indice != -1 && _posiciones[indice] == Vacio) {
        if (_jugador == 1) {
            _posiciones[indice] = Cero;
            _jugador = 2;
        } else {
            _posiciones[indice] = Equis;
            _jugador = 1;
        }

        _turno++;

        return true;
    } else {
        return false;
    }
}

int Totito::comprobacion() {
    // filas
    for(int i = 0; i < 9; i += 3) {
        if (_posiciones[i] != Vacio &&
            _posiciones[i] == _posiciones[i+1] &&
            _posiciones[i+1] == _posiciones[i+2]) {

            if (_turno % 2 == 0) {
                return 1;
            } else {
                return 2;
            }
        }
    }

    // columnas
    for(int i = 0; i < 3; i++) {
        if (_posiciones[i] != Vacio &&
            _posiciones[i] == _posiciones[i+3] &&
            _posiciones[i+3] == _posiciones[i+6]) {

            if (_turno % 2 == 0) {
                return 1;
            } else {
                return 2;
            }
        }
    }

    if (_posiciones[0] != Vacio &&
        _posiciones[0] == _posiciones[4] &&
        _posiciones[4] == _posiciones[8]) {

        if (_turno % 2 == 0) {
            return 1;
        } else {
            return 2;
        }
    }
    else if (_posiciones[2] != Vacio &&
        _posiciones[2] == _posiciones[4] &&
        _posiciones[4] == _posiciones[6]) {

        if (_turno % 2 == 0) {
            return 1;
        } else {
            return 2;
        }
    }

    if (_turno == 10) {
        return 3;
    }

    return 0;
}

void Totito::imprimirTurno() {
    if (_turno == 1) {
        std::cout << "Este es el tablero, las columnas las corresponden las letras y las filas los numeros, si cuando escoja una posicion, ponga la letra primero y luego el numero (por ejemplo: A1) \n";
    }

    char trampa[3] = {' ', 'O', 'X'};

    std::cout << "\n";
    std::cout << "TURNO " << _turno << "\n";
    std::cout << "    A     B     C  \n";
    std::cout <<"       |     |    \n";
    std::cout <<"1   " << trampa[_posiciones[0]] << "  |  " << trampa[_posiciones[1]] << "  |  " << trampa[_posiciones[2]] << "  \n";
    std::cout <<"       |     |    \n";
    std::cout <<" ------------------\n";
    std::cout <<"       |     |    \n";
    std::cout <<"2   " << trampa[_posiciones[3]] << "  |  " << trampa[_posiciones[4]] << "  |  " << trampa[_posiciones[5]] << "  \n";
    std::cout <<"       |     |    \n";
    std::cout <<" ------------------\n";
    std::cout <<"       |     |    \n";
    std::cout <<"3   " << trampa[_posiciones[6]] << "  |  " << trampa[_posiciones[7]] << "  |  " << trampa[_posiciones[8]] << "  \n";
    std::cout <<"       |     |    \n";
    std::cout << "\n";
}
