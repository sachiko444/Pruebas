#include "Espacio2d.h"

#include <vector>
#include <cstddef>
#include <cmath>
#include <iostream>

#define EPS 9e-06

Intermedio Espacio2d::operator[](const float x) {
    return Intermedio(this, x);
}

void Espacio2d::seleccionar(float x, float y, float r, float* resultado, std::size_t tamano) {
    std::size_t ult = 0;
    for (Objeto* obj : _objetos) {
        if (ult >= tamano) {
            return;
        }

        float dx = obj->x - x;
        float dy = obj->y - y;

        if (dx*dx + dy*dy <= r*r) {
            resultado[ult] = obj->mag;

            ult++;
        }
    }
    
    for (std::size_t i = ult; i < tamano; i++) {
        resultado[i] = 0;
    }
}

void Espacio2d::trasladar(float dx, float dy) {
    for (Objeto* obj : _objetos) {
        obj->x += dx;
        obj->y += dy;
    }
}

float& Espacio2d::get(const float x, const float y) {
    for (Objeto* obj : _objetos) {
        if (std::abs(obj->x - x) < EPS && std::abs(obj->y - y) < EPS) {
        // if (obj->x == x && obj->y == y) {
            return obj->mag;
        }
    }

    Objeto* nuevo = new Objeto(x, y);

    _objetos.push_back(nuevo);

    return nuevo->mag;
}

float& Intermedio::operator[](const float y) {
    return _espacio->get(_x, y);
}