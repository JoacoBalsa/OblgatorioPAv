#include "Spinning.h"

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