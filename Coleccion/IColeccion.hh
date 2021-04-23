#pragma once
#include <cstddef>


class IColeccion {

    public:
    virtual int& operator[](const std::size_t i) = 0;
    virtual std::size_t length() = 0;
    virtual void remove(const std::size_t i) =0;
    virtual void push (int v) = 0;
    virtual ~IColeccion() {}


};

bool buscar(IColeccion& colection, int numero);
void agregarSiNoExiste (IColeccion& colection, int numero);
void ordenar(IColeccion& colection);
