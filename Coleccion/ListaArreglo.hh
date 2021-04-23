#pragma once

#include "IColeccion.hh"
#include <cstddef>


class ListaArreglo : public IColeccion{

    public:
    int& operator[](const std::size_t i) override;
    std::size_t length() override;
    void remove(const std::size_t i) override;
    void push (int v) override;
    ~ListaArreglo();  

    private:
    int* _content = new int[1];
    int _tam = 0;
};