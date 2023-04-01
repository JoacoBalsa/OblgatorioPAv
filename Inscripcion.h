#ifndef INSCRIPCION
#define INSCRIPCION
#include <iostream>
#include <string.h>
#include "DtFecha.h"
#include "DtSocio"

#define MAX_INSCRIPCIONES 50

// Trabajo Obligatorio 1
// Inscripcion.h
// Modulo de la clase Inscripción.

using namespace std;

class Inscripcion{
private:
    //Atributo
    DtFecha fecha;
    //Pseudoatributo
    Socio socio;
public:
    Inscripcion();
    Inscripcion(DtFecha fecha, Socio socio);
    DtFecha getFecha();
    void setFecha(DtFecha fecha);
    Socio getSocio();
    void setSocio(Socio socio);
    ~Inscripcion();
};

#endif