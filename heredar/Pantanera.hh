#include "Vehiculo.hh"

class Pantanera : public Vehiculo {

    public:
    Pantanera(const Mapa& mapa, const int posX, const int posY);

    protected:
    bool puedeNavegarHacia(const int i, const int j) override;
};