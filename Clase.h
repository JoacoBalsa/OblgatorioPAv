#ifndef CLASE
#define CLASE
#include <iostream>
#include <string.h>
#include "DtClase.h"
#include "Inscripcion.h"

// Trabajo Obligatorio 1
// Clase.h
// Modulo de la clase Clase.

class Clase{
private:
    //Atributos
    int id;
    string nombre;
    turno turno;
    // Pseudoatributos
    Inscripcion *inscripciones[MAX_INSCRIPCIONES]; 
public:
    Clase();
    Clase(int id, string nombre, turno turno, Inscripcion *insc[MAX_INSCRIPCIONES]);
    int getID();
    void setID(int id);
    string getNombre();
    void setNombre(string nombre);
    turno getTurno();
    void setTurno(turno turno);
    Inscripcion getInscripcion();
    void setInscripcion(Inscripcion insc);
    virtual ~Clase();
    virtual int cupo()=0;
};

#endif