#include "DtSocio.h"
#include <string.h>
#include <iostream>

using namespace std;

DtSocio::DtSocio(){}

DtSocio::DtSocio(int CI, string nombre){
    this->CI = CI;
    this->nombre = nombre;
}

int DtSocio::getCI(){
    return this->CI;
}

void DtSocio::setCI(int CI){
    this->CI = CI;
}

string DtSocio::getNombre(){
    return this->nombre;
}

void DtSocio::setNombre(string nombre){
    this->nombre = nombre;
}

DtSocio::~DtSocio(){}