#pragma once

#include <vector>
#include <cstddef>

class Intermedio;
class Objeto;

class Espacio2d {

    public:
        Intermedio operator[](const float x);
        void seleccionar(float x, float y, float r, float* resultado, std::size_t tamano);
        void trasladar(float dx, float dy);

        float& get(const float x, const float y);

    private:
        std::vector<Objeto*> _objetos;

};

class Intermedio {

    public:
        Intermedio(Espacio2d* espacio, float x): _espacio(espacio), _x(x) {}

        float& operator[](const float y);

    private:
        Espacio2d* _espacio;
        float _x;

};

class Objeto {

    public:
        Objeto(float x, float y): x(x), y(y) {}

        float x;
        float y;

        float mag = 0;

};