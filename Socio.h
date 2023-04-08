#ifndef SOCIO 
#define SOCIO
#include <string>
#include <iostream>
#include <string>

// Trabajo Obligatorio 1
// Socio.h
// Modulo de definicion de la clase Socio.

using namespace std;

class Socio{
private:
    int CI;
    string nombre;
public:
    Socio();
    Socio(int CI, string nombre);
    int getCI();
    void setCI(int CI);
    string getNombre();
    void setNombre(string nombre);
    ~Socio();
};

#endif