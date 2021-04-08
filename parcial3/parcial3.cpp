#include "parcial3.hh"
#include <iostream>


float Matriz::Matriz(int columnas, int filas) : _columnas(columnas), _filas(filas) {
    float** _matrix = new float*[columnas];

    for(int i = 0; i < columnas; i++) {
        _matrix[i] = new int[filas];
    }

}


std::string Matriz::to_string(float** _matrix) {

    std::string _matriS = "";
    for(int i = 0; i <= _columnas; i++) {
        for(int j = 0; j <= _filas; j++) {
            _matriS.append(std::to_string(_matrix[i][j]);
            _matriS.append(", ");
        }
        _matriS.append("\n");
    }
    return _matriS;
}




float Matriz::sumar(Matriz operando, Matriz resultado) {

    if(_columnas == operando._columnas && _filas == operando._filas) {
        for(int i = 0; i <= _columnas; i++) {
            for(int j = 0; j <= _filas; j++) {
                resultado [i][j] = operando[i][j] + _matrix[i][j];
            }
        }
        return true;   
    } else {
        return false;
    }
}

float Matriz::multiplicar(Matriz operando, Matriz resultado) {

    if(columnas == operando._columnas && _filas == operando._filas) {
        for(int i = 0; i <= _columnas; i++) {
            for(int j = 0; j <= _filas; j++) {
                resultado [i][j] = operando[i][j] * _matrix[i][j];
            }
        }
        return true;   
    } else {
        return false;
    }
}