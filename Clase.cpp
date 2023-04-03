#include "Clase.h"
#include <iostream>
#include <string.h>
#include "Turno.h"

using namespace std;

Clase::Clase(){}
Clase::Clase(int id, string nombre, turno t){
    this->id = id;
    this->nombre = nombre;
    this->t = t;
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
Clase::~Clase(){}