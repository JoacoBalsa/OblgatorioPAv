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
    int id;
    string nombre;
    turno turno;
public:
    Clase();
    Clase(int id, string nombre, turno turno);
    int getID();
    void setID(int id);
    string getNombre();
    void setNombre(string nombre);
    turno getTurno();
    void setTurno(turno turno);
    virtual ~Clase();
    virtual int cupo()=0;
};

#endif