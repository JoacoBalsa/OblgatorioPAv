#ifndef INSCRIPCION
#define INSCRIPCION
#include <iostream>
#include <string.h>
#include "Fecha.h"
#include "DtSocio"

#define MAX_INSCRIPCIONES 50

// Trabajo Obligatorio 1
// Inscripcion.h
// Modulo de la clase Inscripción.

using namespace std;

class Inscripcion{
private:
    //Atributo
    Fecha fecha;
    //Pseudoatributo
    Socio socio;
};

#endif