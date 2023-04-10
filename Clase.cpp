#include "Clase.h"
#include <iostream>
#include <string.h>
#include "Turno.h"

// Trabajo Obligatorio 1
// Clase.cpp
// Modulo de implementacion de la clase Clase.

using namespace std;

Clase::Clase(){}

Clase::Clase(int id, string nombre, turno t){
    this->id = id;
    this->nombre = nombre;
    this->t = t;
    this->cantIns = 0;
}

int Clase::getID(){
    return this->id;
}

void Clase::setID(int id){
    this->id = id;
}

string Clase::getNombre(){
    return this->nombre;
}

void Clase::setNombre(string nombre){
    this->nombre = nombre;
}

turno Clase::getTurno(){
    return this->t;
}

void Clase::setTurno(turno turno){
    this->t = turno;
}

int Clase::getCantIns(){
    return this->cantIns;
}

Inscripcion* Clase::getInscripcion(int ci, int &i){
    i = 0;
    while(i < this->getCantIns() && this->ins[i]->getSocio()->getCI() != ci)
        i++;
    return this->ins[i];
}

void Clase::setInscripcion(Inscripcion* ins){
    this->ins[this->cantIns] = ins;
    this->cantIns++;
}

void Clase::elimInsc(int ciS){
    Inscripcion* swap;
    int i;
    swap = this->getInscripcion(ciS, i);
    swap = this->ins[i];
    this->ins[i] = this->ins[this->cantIns];
    this->ins[this->cantIns] = swap;
    delete this->ins[this->cantIns];
    this->cantIns--;
}

Clase::~Clase(){}