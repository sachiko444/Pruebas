#pragma once

#include <string>

class Diccionario {

    public:
        void imprimir();
        void agregar(std::string palabra, std::string def);
        std::string buscar(std::string palabra);
        std::string* enumerar(char caracter);

    private:
        std::string* _palabras = new std::string[1];
        std::string* _definiciones = new std::string[1];
        int _numPalabras = 0;
};