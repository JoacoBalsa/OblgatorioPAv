#include "DtClase.h"
DtClase::DtClase(){}
DtClase::DtClase(int id, string nombre, turno turno){
    this->id = id;
    this->nombre = nombre;
    this->turno = turno;
}
int DtClase::getID(){
    return this->id;
}
int DtClase::setID(int id){
    this->id = id;
}
string DtClase::getNombre(){
    return this->nombre;
}
void DtClase::setNombre(string nombre){
    this->nombre = nomrbe;
}
turno DtClase::getTurno(){
    return this->turno;
}
void DtClase::setTurno(turno turno){
    this->turno = turno;
}
DtClase::~DtClase(){}