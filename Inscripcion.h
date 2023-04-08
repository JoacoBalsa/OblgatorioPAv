#ifndef INSCRIPCION
#define INSCRIPCION
#include <iostream>
#include <string.h>
#include "DtFecha.h"
#include "DtSocio.h"
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
    DtSocio socio;
    DtClase clase;
public:
    Inscripcion();
    Inscripcion(DtFecha fecha, DtSocio socio, DtClase clase);
    DtFecha getFecha();
    void setFecha(DtFecha fecha);
    DtSocio getSocio();
    void setSocio(DtSocio socio);
    DtClase getClase();
    void setClase(DtClase clase);
    ~Inscripcion();
};

#endif