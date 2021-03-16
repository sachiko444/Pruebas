#include "Lista.hh"

Lista::Lista(int valor, Lista* resto) : _valor(valor), _resto(resto) {}

Lista::Lista(int valor) : _valor(valor), _resto(nullptr) {}

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
