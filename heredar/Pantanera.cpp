#include "Pantanera.hh"

Pantanera::Pantanera(const Mapa& mapa, const int posX, const int posY) : Vehiculo(mapa, posX, posY) {}

bool Pantanera::puedeNavegarHacia(const int i, const int j) {

    return
        Vehiculo::puedeNavegarHacia(i, j)
        && (_mapa[i][j] == Terreno::Tierra
        || _mapa[i][j] == Terreno::Agua);
}