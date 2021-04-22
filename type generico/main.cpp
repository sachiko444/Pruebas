#include "Array.hh"
#include "Dictionary.hh"
#include <iostream>
#include <string>

int main(int argc, char** argv) {

//array variable INT
    Array<int> array(5); //hay q especificar que tipo sera el array
//strArray variable STRING
    Array<std::string> strArray(3);
//variable VECTOR
    Array<Vector> vecs(3);





//OPERATOR
    array[0] = 5;
    array[1] = 10;
    strArray[1] = "helo";

    std::cout << "array[0] = " << array[0]<< "\n";
    std::cout << "strArray[1] = " <<strArray[1] << "\n";


//EXISTE
    if(array.existe(5)) {

        std::cout << "esto se deberia imprimir \n";
    } else {
        std::cout << "noooooooooo \n";
    }

    if(strArray.existe("helo")) {

        std::cout << "si existe \n";
    } else {
        std::cout << "https://www.youtube.com/watch?v=dQw4w9WgXcQ \n";
    }


//PUSH
    array.push(3);
    std::cout <<  array[0] <<" \n";
    std::cout <<  array[1] <<" \n";
    std::cout <<  array[2] <<" \n";
    std::cout <<  array[3] <<" \n";



//VECTOR
    vecs[0] = Vector(1,4);
    Vector v2(1,1);


    if(!vecs.existe(v2)) {
        std::cout << "no existe (1,1) \n";
    }





//DICTIONARY 

Dictionary<int, std::string> d;
d.agregar(42, "helo");

d[42] = "hola";

std::cout << "La palabra 42 significa: " << d[42] << "\n";

Dictionary<std::string, int> d2;

std::cout << "La palabra hey significa: " << d2["hey"] << "\n";

}