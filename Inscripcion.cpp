#include "Inscripcion.h"
#include "Socio.h"
#include "DtClase.h"
#include "DtFecha.h"
#include <iostream>
#include <string.h>

// Trabajo Obligatorio 1
// Inscripcion.cpp
// Modulo de implementacion de la clase Inscripcion.

using namespace std;

Inscripcion::Inscripcion(){}

Inscripcion::Inscripcion(DtFecha fecha, Socio* socio){
    this->fecha = fecha;
    this->socio = socio;
}

DtFecha Inscripcion::getFecha(){
    return this->fecha;
}

void Inscripcion::setFecha(DtFecha fecha){
    this->fecha = fecha;
}

Socio* Inscripcion::getSocio(){
    return this->socio;
}

void Inscripcion::setSocio(Socio* socio){
    this->socio = socio;
}

Inscripcion::~Inscripcion(){}