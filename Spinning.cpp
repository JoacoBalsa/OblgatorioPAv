#include "Spinning.h"
#include <iostream>
#include <string.h>

// Trabajo Obligatorio 1
// Spinning.cpp
// Modulo de definicion de la clase Spinning.

using namespace std;

Spinning::Spinning(){}

Spinning::Spinning(int id, string nombre, turno turno, int cantBicicletas):Clase(id,nombre,turno){
    this->cantBicicletas = cantBicicletas;
}

int Spinning::getCantBicicletas(){
    return this->cantBicicletas;
}

void Spinning::setCantBicicletas(int cantBicicletas){
    this->cantBicicletas = cantBicicletas;
}

int Spinning::cupo(){
    return this->cantBicicletas;
}

Spinning::~Spinning(){}