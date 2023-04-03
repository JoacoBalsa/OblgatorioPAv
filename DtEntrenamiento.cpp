#include "DtEntrenamiento.h"
#include "Turno.h"
#include "DtClase.h"
#include <string.h>
#include <iostream>

using namespace std;

DtEntrenamiento::DtEntrenamiento(){}

DtEntrenamiento::DtEntrenamiento(int id, string n, turno t, bool enRam):DtClase(id, n, t){
    this->enRambla = enRam;
}

bool DtEntrenamiento::getRambla(){
    return this->enRambla;
}

void DtEntrenamiento::setRambla(bool r){
    this->enRambla = r;
}

DtEntrenamiento::~DtEntrenamiento(){}