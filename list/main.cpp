#include <iostream>

#include "Lista.hh"

#include "Pila.hh"

#include "Cola.hh"

int main(int argc, char** argv) {

    
    /*
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

 

    Lista l2 = l;
    int ix = 1;

    //l[ix] = 3;

    std::cout << "Lista 1: " << l[ix] << "\n";
    std::cout << "Lista 2: " << l2[ix] << "\n";


    if(l == l2) {
        std::cout << "son iguales \n";
    }
    else {
        std::cout << "no son iguales \n";
    }

Lista l3(1, new Lista(2));
    if(l > l3) {
        std::cout << "si es mayor \n";
    }
    else {
        std::cout << "no es mayor \n";
    }

*/

//CON PILA

Lista l(1, new Lista(2, new Lista(3)));

Pila p(42);


int resultado;
bool existe = p.tryGet(0, resultado);

std::cout << "El numero pila es: " << resultado << "\n";
std::cout << "El numero existe: " <<existe << "\n"; 

p.push(4);
p.push(7);

std::cout << "Pop!" << p.pop() << "\n";
std::cout << "Pop!" << p.pop() << "\n";

//CON COLA

Cola c(43);

c.queue(5);
c.queue(7);

std::cout << "dqueue: " << c.dequeue() << "\n";
std::cout << "dqueue: " << c.dequeue() << "\n";



}



