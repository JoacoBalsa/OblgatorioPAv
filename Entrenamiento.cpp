#include "Entrenamiento.h"
#include <iostream>
#include <string.h>

// Trabajo Obligatorio 1
// Entrenamiento.cpp
// Modulo de definicion de la clase Entrenamiento.

using namespace std;

Entrenamiento::Entrenamiento(){}

Entrenamiento::Entrenamiento(int id, string n, turno t, bool enRam):Clase(id,n,t){
    this->enRambla = enRam;
}

bool Entrenamiento::getRambla(){
    return this->enRambla;
}

void Entrenamiento::setRambla(bool r){
    this->enRambla = r;
}

int Entrenamiento::cupo(){
    if(this->enRambla)
        return 20;
    else
        return 10;
}

Entrenamiento::~Entrenamiento(){}