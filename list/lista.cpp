#include "Lista.hh"

#include <iostream>

Lista::Lista(int valor, Lista* resto) : _valor(valor), _resto(resto) {}

Lista::Lista(int valor) : _valor(valor), _resto(nullptr) {}

Lista::Lista(const Lista& otra) : _valor(otra._valor) {

    Lista* restoPtr = otra._resto;

    if(restoPtr != nullptr) {
        _resto = new Lista(*restoPtr);
    }
    else {
        _resto = nullptr;
    }

    std::cout << "Se esta copiando\n";

}


Lista::~Lista() {

    delete _resto;

    std::cout << "adios \n";
}

int Lista::get_valor() {

    return _valor;
}

Lista* Lista::get_resto() {

    return _resto;
}

std::string Lista::to_string() {

    std::string resultado;
    Lista* actual = this;

    while(actual != nullptr) {

        resultado.append(std::to_string(actual->_valor));
        resultado.append(", ");

        actual = actual->_resto;
    }

    return resultado;
}

int Lista::sumatoria() {

    int res = 0;
    Lista* actl = this;

    while(actl != nullptr) {
        res = res + actl->_valor;
        actl= actl->_resto; 
    }

    return res;

}

int Lista::largo() {
    int resultado = 0; 

    for(Lista* i = this; i != nullptr; i= i->_resto) { //empieza desde primervalor y va aumentando
        resultado++;
    }

    return resultado; 
}


int Lista::operator[](std::size_t ix) {

    Lista* valor = this;

    for(std::size_t i = ix; i>0; i--) { //>0 porque empieza en 0
        
        if(valor==nullptr) {
            std::cout << "A punto de tronar \n";
        }
        
        valor = valor->_resto; 
    }

    return valor->_valor;

} 


//ANOTHER WAY DE OPERADOR PERO SIN SEGMENTATION FAULT, SINO CON TEXTO EN RETURN
bool Lista::tryGet(std::size_t ix, int& respuesta) {

    Lista* valor = this;

    for(std::size_t i = ix; i > 0; i--) {
        if(valor == nullptr) {
            return false; 
        }

        valor = valor-> _resto;

    }

    respuesta = valor -> _valor;
    return true; 
}

void Lista::byValue(int valor, std::string st) {

    valor = 42;
    st[0] = 'A';
}

void Lista::byReference(int& valor, std::string& st) {

    valor = 42;
    st[0] = 'A';
}

//== SI TAMANIO LISTA ES MISMA LONGITUD
bool Lista::operator==(const Lista& otra) {

    if(_valor != otra._valor) { //primer numero de lista
        return false;
    }

    if(_resto == nullptr && otra._resto == nullptr) { //ya cuando llega a final de lista 
        return true;
    }

    if(_resto == nullptr || otra._resto == nullptr) { //si no terminan al mismo tiempo
        return false;
    }

    Lista& l1 = *_resto;
    Lista& l2 = *otra._resto;

    return l1 == l2;

}

//> SI TAMANIO LISTA ES MAYOR LONGITUD
bool Lista::operator>(const Lista& otra) {
    
    if(_resto != nullptr && otra._resto == nullptr) { 
        return true;
    }

    if(_resto == nullptr && otra._resto != nullptr) { //ya cuando llega a final de lista 
        return false;
    }
}