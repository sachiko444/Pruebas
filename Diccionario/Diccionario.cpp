#include "Diccionario.hh"

#include <iostream>



void Diccionario::agregar(std::string palabra, std::string def) {


    for(int i= 0; i < _numPalabras; i++) {
            if(palabra == _palabras[i]) {
                _definiciones[i] = def;
                return;
            }
        }

    std::string* temp = new std::string[_numPalabras + 1];
    std::string* temd = new std::string[_numPalabras + 1];

    temp[0] = palabra;
    temd[0] = def;

    for (int i = 0; i < _numPalabras; i++) { //copiar todas las palabras del glosario en temp
        temp[i+1] = _palabras[i];
        temd[i+1] = _definiciones[i];
    }

    delete[] _palabras;
    delete[] _definiciones;
    _palabras = temp;
    _definiciones = temd;
    _numPalabras++;
   
}


std::string Diccionario::buscar(std::string palabra) {

        for(int i= 0; i < _numPalabras; i++) {
            if(palabra == _palabras[i]) {
                return _definiciones[i];
            } 
        }
        return "";
}


std::string* Diccionario::enumerar(char caracter) {
    std::string* arr = new std::string[1]; //array vacio
    arr[0] = "";
    int l = 1;

    for(int i = 0; i < _numPalabras; i++) {
        if (_palabras[i][0] == caracter) {
            std::string* temp = new std::string[l + 1];

            temp[0] = _palabras[i];  //agrgar palabra en estado temp
            for(int k = 0; k < l; k++) {
                temp[k+1] = arr[k]; //temp: nuevo array que se le suma la nueva longitud. //temp[k+1] es como pushback
            } //temp uno mas grande para acomodar palabra

            delete[] arr; 
            arr = temp;

            l++;
        }
    }

    return arr;
}


void Diccionario::imprimir() {
    for(int i = 0; i < _numPalabras; i++) {
        std::cout << _palabras[i] << ":\n";
        std::cout << " - " << _definiciones[i] << "\n";
    }
}