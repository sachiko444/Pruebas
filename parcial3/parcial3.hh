#pragma once 
#include <string>

class Matriz {

    public:
    Matriz(int columnas, int filas);
    std::string to_string(float** _matrix);
    bool sumar(Matriz operando, Matriz resultado);
    bool multiplicar(Matriz operando, Matriz resultado);


    private:
    float** _matrix;
    int _columnas;
    int _filas;
};