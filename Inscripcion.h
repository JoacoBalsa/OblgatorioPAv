#ifndef INSCRIPCION
#define INSCRIPCION
#include <iostream>
#include <string.h>
#include "DtFecha.h"
#include "Socio.h"
#include "DtClase.h"

#define MAX_INSCRIPCIONES 50

// Trabajo Obligatorio 1
// Inscripcion.h
// Modulo de definicion de la clase Inscripcion.

using namespace std;

class Inscripcion{
private:
    //Atributo
    DtFecha fecha;
    //Pseudoatributos
    Socio* socio;
public:
    Inscripcion();
    Inscripcion(DtFecha fecha, Socio* socio);
    DtFecha getFecha();
    void setFecha(DtFecha fecha);
    Socio* getSocio();
    void setSocio(Socio* socio);
    ~Inscripcion();
};

#endif