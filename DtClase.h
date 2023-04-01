#ifndef DTCLASE
#define DTCLASE
#include <iostream>
#include <string>
#include "Turno.h"

// Trabajo Obligatorio 1
// DtClase.h
// Modulo del DataType Clase.

class DtClase{
private:
    int id;
    string nombre;
    turno turno;
public:
    DtClase();
    DtClase(int id, string nombre, turno turno);
    int getID();
    void setID(int id);
    string getNombre();
    void setNombre(string nombre);
    turno getTurno();
    void setTurno(turno turno);
    virtual ~DtClase();
};

#endif