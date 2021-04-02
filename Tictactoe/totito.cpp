#include "totito.hh"

#include <iostream>



char pos[9];
bool libre = true; 

for(int i = 0; i < 10; i++ ) {
    pos[i] = '_';
}


void Totito::imprimir() {
    std::cout << pos[0] << pos[1] << pos[2] << "\n";
    std::cout << pos[3] << pos[4] << pos[5] << "\n";
    std::cout << pos[6] << pos[7] << pos[8] << "\n";
}


void Totito::colocar(int _colocar) {


    

    for(int i = 0; i < 10; i++ ) {
        if(pos[i] == '_') {
            libre; 
        }
        if(pos[i] == libre) {
            if(jugador == p1) {
                for(int p=0; p<10; p++) {
                    if(_colocar == p) {
                        pos[p] = "o"; 
                                
                    }
                }
            }
            else if (jugador == p2) {
                for(int p=0; p<10; p++) {
                    if(_colocar == p) {
                        pos[p] = "x"; 
                    }
                }
            }
        } else {
            std::cout << "ocupado dumbass \n";
            std::cin << _colocar;
        }
    }

}

bool Totito::win() {
    if(pos[1] == "o" && pos[2] == "o" && pos[3] == "o") {
        return true; }
    else if(pos[4] == "o" && pos[5] == "o" && pos[6] == "o") {
        return true; } 
    else if(pos[7] == "o" && pos[8] == "o" && pos[9] == "o") {
        return true; }
    else if(pos[1] == "o" && pos[4] == "o" && pos[7] == "o") {
        return true; }
    else if(pos[2] == "o" && pos[5] == "o" && pos[8] == "o") {
        return true; }
    else if(pos[3] == "o" && pos[6] == "o" && pos[9] == "o") {
        return true; }
    else if(pos[1] == "o" && pos[5] == "o" && pos[9] == "o") {
        return true; }
    else if(pos[3] == "o" && pos[5] == "o" && pos[7] == "o") {
        return true; }
    
    else if(pos[1] == "x" && pos[2] == "x" && pos[3] == "x") {
        return true; }
    else if(pos[4] == "x" && pos[5] == "x" && pos[6] == "x") {
        return true; } 
    else if(pos[7] == "x" && pos[8] == "x" && pos[9] == "x") {
        return true; }
    else if(pos[1] == "x" && pos[4] == "x" && pos[7] == "x") {
        return true; }
    else if(pos[2] == "x" && pos[5] == "x" && pos[8] == "x") {
        return true; }
    else if(pos[3] == "x" && pos[6] == "x" && pos[9] == "x") {
        return true; }
    else if(pos[1] == "x" && pos[5] == "x" && pos[9] == "x") {
        return true; }
    else if(pos[3] == "x" && pos[5] == "x" && pos[7] == "x") {
        return true; }

    else {
        return false;
    }
     
}


void Totito::jugador(int p1, int p2) {

    int& player = 0;

    bool even = if( player % 2 == 0) {
        true; 
    } else {false;}

    if(player == even) {
        return p1;
    } else {
        return p2;
    }

}