#include "Espacio2d.h"

#include <iostream>

int main(int argc, char** argv) {

    Espacio2d espacio;

    std::cout << "Obtener:\n";
    // Esto imprime 0 a que se reserva la memoria automaticamente
    std::cout << " (1.5, 3.14) = " << espacio[1.5][3.14] << "\n";

    std::cout << "\n";
    std::cout << "Asignar:\n";
    espacio[1.5][3.14] = 2.3333333333333333;
    espacio[2.7][5.67] = 8.5;
    espacio[2.7][5.88] = 7.6;
    espacio[68.2][66.2] = 87;
    
    std::cout << " (1.5, 3.14) = " << espacio[1.5][3.14] << "\n";
    std::cout << " (2.7, 5.67) = " << espacio[2.7][5.67] << "\n";
    std::cout << " (2.7, 5.88) = " << espacio[2.7][5.88] << "\n";
    std::cout << " (68.2, 66.2) = " << espacio[68.2][66.2] << "\n";

    std::cout << "\n";
    std::cout << "Seleccionar:\n";
    float* busqueda = new float[3];

    /*
    Este metodo coloca 8.5, 7.6 y 0 en el array "busqueda"
    */
    espacio.seleccionar(2.8, 5, 3, busqueda, 3);
    
    for (int i = 0; i < 3; i++) {
        std::cout << " " << i << ". " << busqueda[i] << "\n";
    }
    
    std::cout << "\n";
    std::cout << "Trasladar:\n";
    espacio.trasladar(-3.8, 1);
    
    std::cout << " (-2.3, 4.14) = " << espacio[-2.3][4.14] << "\n";
    std::cout << " (-1.1, 6.67) = " << espacio[-1.1][6.67] << "\n";
    std::cout << " (-1.1, 6.88) = " << espacio[-1.1][6.88] << "\n";
    std::cout << " (64.4, 67.2) = " << espacio[64.4][67.2] << "\n";
    
}