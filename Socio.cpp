#include "Socio.h"
#include <iostream>
#include <string.h>

using namespace std;

Socio::Socio(){}

Socio::Socio(int CI, string nombre){
    this->CI = CI;
    this->nombre = nombre;
}

int Socio::getCI(){
    return this->CI;
}

void Socio::setCI(int CI){
    this->CI = CI;
}

string Socio::getNombre(){
    return this->nombre;
}

void Socio::setNombre(string nombre){
    this->nombre = nombre;
}

Socio::~Socio(){}