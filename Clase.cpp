#include "Clase.h"

Clase::Clase(){}
Clase::Clase(int id, string nombre, turno turno){
    this->id = id;
    this->nombre = nombre;
    this->turno = turno;
}
int Clase::getID(){
    return this->id;
}
int Clase::setID(int id){
    this->id = id;
}
string Clase::getNombre(){
    return this->nombre;
}
void Clase::setNombre(string nombre){
    this->nombre = nomrbe;
}
turno Clase::getTurno(){
    return this->turno;
}
void Clase::setTurno(turno turno){
    this->turno = turno;
}
Clase::~Clase(){}