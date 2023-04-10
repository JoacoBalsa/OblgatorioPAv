#ifndef CLASE
#define CLASE
#include <iostream>
#include <string>
#include "DtClase.h"
#include "Inscripcion.h"
#include "Turno.h"

// Trabajo Obligatorio 1
// Clase.h
// Modulo de definicion la clase Clase.

using namespace std;

class Clase{
private:
    //Atributos
    int id;
    string nombre;
    turno t;
    //Pseudoatributos
    Inscripcion* ins[MAX_INSCRIPCIONES];
    int cantIns;
public:
    Clase();
    Clase(int id, string nombre, turno t);
    int getID();
    void setID(int id);
    string getNombre();
    void setNombre(string nombre);
    turno getTurno();
    void setTurno(turno t);
    Inscripcion* getInscripcion(int ci, int &i);
    void elimInsc(int ciS);
    void setInscripcion(Inscripcion* ins);
    int getCantIns();
    virtual ~Clase();
    virtual int cupo() = 0;
};

#endif



