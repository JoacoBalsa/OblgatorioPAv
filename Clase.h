#ifndef CLASE
#define CLASE
#include <iostream>
#include <string>
#include "DtClase.h"
#include "Inscripcion.h"
#include "Turno.h"

// Trabajo Obligatorio 1
// Clase.h
// Modulo de la clase Clase.

using namespace std;

class Clase{
private:
    int id;
    string nombre;
    turno t;
public:
    Clase();
    Clase(int id, string nombre, turno t);
    int getID();
    void setID(int id);
    string getNombre();
    void setNombre(string nombre);
    turno getTurno();
    void setTurno(turno t);
    virtual ~Clase();
    virtual int cupo()=0;
};

#endif