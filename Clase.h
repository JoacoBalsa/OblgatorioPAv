#ifndef CLASE
#define CLASE
#include <iostream>
#include <string.h>
#include "DtClase.h"
#include "Inscripcion.h"

// Trabajo Obligatorio 1
// Clase.h
// Modulo de la clase Clase.

class clase{
private:
    //Atributos
    int id;
    string nombre;
    turno turno;
    // Pseudoatributos
    Inscripcion *inscripciones[MAX_INSCRIPCIONES]; 
public:
    virtual int cupo()=0;
};

#endif