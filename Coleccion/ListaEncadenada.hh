#pragma once

#include "IColeccion.hh"
#include <cstddef>



class ListaEncadenada : public IColeccion{

    public:
    ListaEncadenada(int valor, ListaEncadenada* resto);
    int& operator[](const std::size_t i) override;
    std::size_t length() override;
    void remove(const std::size_t i) override;
    void push (int v) override;
    ~ListaEncadenada() ;  

    private:
    int _valor;

    ListaEncadenada* _resto;
};