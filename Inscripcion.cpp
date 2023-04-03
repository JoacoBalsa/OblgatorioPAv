#include "Inscripcion.h"
#include "DtSocio.h"
#include "DtClase.h"
#include "DtFecha.h"
#include <iostream>
#include <string.h>

using namespace std;

Inscripcion::Inscripcion(){}
Inscripcion::Inscripcion(DtFecha fecha, DtSocio socio, DtClase clase){
    this->fecha = fecha;
    this->socio = socio;
    this->clase = clase;
}
DtFecha Inscripcion::getFecha(){
    return this->fecha;
}
void Inscripcion::setFecha(DtFecha fecha){
    this->fecha = fecha;
}
DtSocio Inscripcion::getSocio(){
    return this->socio;
}
void Inscripcion::setSocio(DtSocio socio){
    this->socio = socio;
}
DtClase Inscripcion::getClase(){
    return this->clase;
}
void Inscripcion::setClase(DtClase clase){
    this->clase = clase;
}

Inscripcion::~Inscripcion(){}