#ifndef ENTRENAMIENTO
#define ENTRENAMIENTO
#include <iostream>
#include <string.h>
#include "DtClase.h"
#include "Clase.h"

// Trabajo Obligatorio 1
// Entrenamiento.h
// Modulo de la clase Entrenamiento.

class Entrenamiento : public Clase{
private:
    bool enRambla;
public:
    Entrenamiento();
    Entrenamiento(int id, string n, turno t, bool enRam);
    bool getRambla();
    void setRambla(bool r);
    int cupo();
    ~Entrenamiento();
};

#endif