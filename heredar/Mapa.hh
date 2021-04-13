#pragma once
#include <string>

enum Terreno {
    Tierra,
    Calle,
    Agua
};

class Mapa {

    public:
    Mapa(Terreno** terreno, const int largo, const int alto);

    int largo() const;            //const derecha ya que mapa se declaro como const en vehiculo.hh
    int alto() const;
    Terreno* operator[](std::size_t i);

    private:
    Terreno** _terreno;
    const int _alto;
    const int _largo;
};