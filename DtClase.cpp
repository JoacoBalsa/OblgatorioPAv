#include "DtClase.h"
#include <string.h>
#include <iostream>
#include "DtSpinning.h"
#include "DtEntrenamiento.h"

// Trabajo Obligatorio 1
// DtClase.cpp
// Modulo de impplementacion del DataType Clase.

using namespace std;

DtClase::DtClase(){}

DtClase::DtClase(int id, string nombre, turno turno){
    this->id = id;
    this->nombre = nombre;
    this->t = turno;
}

DtClase::DtClase(DtClase &clase){
    this->id = clase.id;
    this->nombre = clase.nombre;
    this->t = clase.t;
}

int DtClase::getID(){
    return this->id;
}

void DtClase::setID(int id){
    this->id = id;
}

string DtClase::getNombre(){
    return this->nombre;
}

void DtClase::setNombre(string nombre){
    this->nombre = nombre;
}

turno DtClase::getTurno(){
    return this->t;
}

void DtClase::setTurno(turno turno){
    this->t = turno;
}

DtClase::~DtClase(){}