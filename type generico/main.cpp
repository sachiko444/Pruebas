#include <iostream>
#include <map>
#include <memory>
#include <string>
#include <vector>

#include "Vector.hh"

//SMART POINTERS
void transfer(std::shared_ptr<Vector> elShared) {

    std::cout << "el shared es: " << elShared->to_string() << "\n";
}

class Dummy {

    public:
    std::shared_ptr<Vector> sVec;
};








int main(int argc, char** argv) {


//array variable INT
    Array<int> array(5); //hay q especificar que tipo sera el array
//strArray variable STRING
    Array<std::string> strArray(3);
//variable VECTOR
    Array<Vector> vecs(3);
//variable VECTOR LIBRERIA
     std::vector<Vector> vecz(3);
//variable MAP
    std::map<std::string, Vector> mVecs;




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
    vecs[0] = Vector(1,1);
    Vector v2(1,2);


    if(!vecs.existe(v2)) {
        std::cout << "no existe (1,1) \n";
    }


//VECTOR LIBRERIA

    //vecz.reserve(3);

    vecz.push_back(Vector(1,1));
    vecz.push_back(Vector(1,2));
    vecz.emplace_back(1,3);

    std::cout << "valor en 2 es: " << vecz[2].x() << "," << vecz[2].y() << "\n";

    for(Vector& elemento : vecz) {
        std::cout << "El valor es: " << elemento.x() << " , " << elemento.y() << "\n";
    
        elemento = Vector();
    }

    for(Vector& elemento : vecz) {
        std::cout << "El valor es: " << elemento.x() << " , " << elemento.y() << "\n";
    
    }




//MAP VECTOR

    mVecs["hola"] = Vector(1,2);
    mVecs.emplace(
        std::piecewise_construct,
        std::forward_as_tuple("adios"),
        std::forward_as_tuple(1,3)
    );
    std::cout << "el indice 'hola' es " << mVecs["hola"].to_string() << "\n";
    
    std::cout << "el indice 'adios' es " << mVecs["adios"].to_string() << "\n";


//UNIQUE PTR

    std::unique_ptr<Vector> uVec = std::make_unique<Vector>(2,3);
    std::unique_ptr<Vector> oVec;
    uVec.swap(oVec);



//SHARED PTR

    std::shared_ptr<Vector> sVec = std::make_shared<Vector>(2,3);
    transfer(sVec);
    std::cout << "El shared " << sVec->to_string() << "\n";
    
    //std::cout << "El unique es: " << oVec->to_string() << "\n";

    Dummy dummy;

    {
        std::shared_ptr<Vector> sp = std::make_shared<Vector>(1,2);
        dummy.sVec = sp;
    }

    std::cout << "El final \n";






//DICTIONARY 

Dictionary<int, std::string> d;
d.agregar(42, "helo");

d[42] = "hola";

std::cout << "La palabra 42 significa: " << d[42] << "\n";

Dictionary<std::string, int> d2;

std::cout << "La palabra hey significa: " << d2["hey"] << "\n";

}