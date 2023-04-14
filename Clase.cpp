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

Inscripcion* Clase::getInscripcion(int ci, int &posIns){
    posIns = 0;
    while(posIns < this->getCantIns() && this->ins[posIns]->getSocio()->getCI() != ci) // Itera buscando ci
        posIns++;
    if(posIns >= this->getCantIns()) //Si posIns > a la cantidad de inscriptos quiere decir que el socio no esta inscripto.
        return NULL;
    else
        return this->ins[posIns];
}

void Clase::setInscripcion(Inscripcion* ins){
    this->ins[this->cantIns] = ins;
    this->cantIns++;
}

void Clase::elimInsc(int ciS){
    int i = 0;
    while(i < this->cantIns && this->ins[i]->getSocio()->getCI() != ciS)
        i++;
    this->ins[i] = this->ins[this->cantIns-1];
    this->ins[this->cantIns-1] = NULL;
    delete this->ins[this->cantIns-1];
    this->cantIns--;
}

Clase::~Clase(){}