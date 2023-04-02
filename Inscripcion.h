#ifndef INSCRIPCION
#define INSCRIPCION
#include <iostream>
#include <string.h>
#include "DtFecha.h"
#include "DtSocio"
#include "Clase.h"

#define MAX_INSCRIPCIONES 50

// Trabajo Obligatorio 1
// Inscripcion.h
// Modulo de la clase Inscripcion.

using namespace std;

class Inscripcion{
private:
    //Atributo
    DtFecha fecha;
    //Pseudoatributo
    Socio socio;
    Clase clase;
public:
    Inscripcion();
    Inscripcion(DtFecha fecha, Socio socio, Clase clase);
    DtFecha getFecha();
    void setFecha(DtFecha fecha);
    Socio getSocio();
    void setSocio(Socio socio);
    Clase getClase();
    void setClase(Clase clase);
    ~Inscripcion();
};

#endif