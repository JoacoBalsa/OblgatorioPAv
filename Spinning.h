#ifndef SPINNING 
#define SPINNING 
#include <iostream>
#include <string>
#include "DtClase.h"
#include "Clase.h"

// Trabajo Obligatorio 1
// Spinning.h
// Modulo de definicion de la clase Spinning.

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