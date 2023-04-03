#ifndef DTCLASE
#define DTCLASE
#include <iostream>
#include <string.h>
#include "Turno.h"

// Trabajo Obligatorio 1
// DtClase.h
// Modulo del DataType Clase.

using namespace std;

class DtClase{
private:
    int id;
    string nombre;
    turno t;
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