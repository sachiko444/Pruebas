#pragma once 
#include <cstddef>

template<typename T> //describe variable generica //T se convierte en un Type
class Array {

//los genericos deben implementar su metodo en el .hh


    public:
    Array(const std::size_t size) : _size(size), _valores(new T[size]) {}

    T& operator[](const std::size_t i) { 

        return _valores[i];
    }



//SI EXISTE EN VARIABLE
    bool existe(const T& tuvalor) {  
        for(int i = 0; i<_size; i++) {
            if(_valores[i] == tuvalor) {
                return true;
            }
        }
        return false;
    }



//AGREGAR NUEVO ELEMENTO AL ARRAY GENERICO
    void push(T tuvalor) { 
        T* temp = new T[_size +1];
        temp[0] = tuvalor;

        for(int i= 0; i<_size; i++) {
            temp[i+1] = _valores[i];
        }

        delete[] _valores;
        _valores = temp;
        _size++;
    }


    private:
    std::size_t _size;
    T* _valores;

};




