#pragma once 
#include <string>

template<typename TKey, typename TValue>
class Dictionary {

    public:
    void agregar(TKey word, TValue def) {

            
        for(int i= 0; i < _numPalabras; i++) {
            if(word == _word[i]) {
                _def[i] = def;
                return;
                }
            }

        TKey* temp = new TKey[_numPalabras + 1];
        TValue* temd = new TValue[_numPalabras + 1];

        temp[0] = word;
        temd[0] = def;

        for (int i = 0; i < _numPalabras; i++) { //copiar todas las palabras del glosario en temp
            temp[i+1] = _word[i];
            temd[i+1] = _def[i];
        }

        delete[] _word;
        delete[] _def;
        _word = temp;
        _def = temd;
        _numPalabras++;
        }
    
    




    TValue operator[](TKey word) { //buscar una palabra
    
        for(int i= 0; i < _numPalabras; i++) {
            if(word == _word[i]) {
                return _def[i];
            } 
        }

        //SI NO SE ENCUENTRA EN EL OPERATOR
        //EN LUGAR DE SEGMENTATION FAULT,
        //CREA UN ESPACIO NUEVO CON DEF VACIA
        TValue def;

        TKey* temp = new TKey[_numPalabras + 1];
        TValue* temd = new TValue[_numPalabras + 1];

        temp[0] = word;
        temd[0] = def;

        for (int i = 0; i < _numPalabras; i++) { //copiar todas las palabras del glosario en temp
            temp[i+1] = _word[i];
            temd[i+1] = _def[i];
        }

        delete[] _word;
        delete[] _def;
        _word = temp;
        _def = temd;
        _numPalabras++;
        return _def[0]; //RETORNA LA DEF VACIA
    
    }

    



    private:
    TKey* _word = new TKey[1];
    TValue* _def = new TValue[1];
    int _numPalabras = 0;

};
