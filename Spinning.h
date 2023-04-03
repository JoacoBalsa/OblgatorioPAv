#ifndef SPINNING 
#define SPINNING 
#include <iostream>
#include <string>
#include "DtClase.h"
#include "Clase.h"

// Trabajo Obligatorio 1
// Socio.h
// Modulo de la clase Socio.

using namespace std;

class Spinning: public Clase{
private:
    int cantBicicletas;
public:
    Spinning(); 
    Spinning(int id, string nombre, turno turno, int cantBicicletas); 
    int getCantBicicletas(); 
    void setCantBicicletas(int cantBicicletas); 
    int cupo(); 
    ~Spinning();
};

#endif