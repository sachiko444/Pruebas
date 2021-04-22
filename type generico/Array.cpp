#include "Array.hh"

bool Vector::operator==(const Vector& other) const {
    return _x == other._x && _y == other._y;
}

//int Vector::x() 