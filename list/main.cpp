#include <iostream>

#include "Lista.hh"

int main(int argc, char** argv) {

    Lista l(1, new Lista(2, new Lista(3)));
    
    std::cout << "la lista es: " <<l.to_string() << "\n";
    std::cout << "suma de lista: " << l.sumatoria() << "\n";
    std::cout << "longitud de lista: " << l.largo() << "\n";

    std::cout << "el elemento 1 es: " << l[1] << "\n";

    int byValue = 0;
    std::string sValue = "hola gente";
    std::cout << "by value before " << byValue << ", " << sValue << "\n";


    l.byValue(byValue, sValue);

    std::cout << "by value after " << byValue << ", " << sValue << "\n";


    int byRef = 0;
    std::string sRef = "hola mundo";

    std::cout << "by ref before " << byRef << ", " << sRef << "\n";

    l.byReference(byRef, sRef);

    std::cout << "by ref after " << byRef << ", " << sRef << "\n";


    int resultado;
    if(l.tryGet(2, resultado)) {

        std::cout << "El valor es: " << resultado << "\n";
    }
    else {
        std::cout << "El indice no existe \n";
    }

}