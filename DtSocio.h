#ifndef DTSOCIO
#define DTSOCIO
#include <string.h>
#include <iostream>

// Trabajo Obligatorio 1
// DTSocio.h
// Modulo de definicion del DataType Socio.

using namespace std;

class DtSocio{
private:
    int CI;
    string nombre;
public:
    DtSocio();
    DtSocio(int CI, string nombre);
    int getCI();
    void setCI(int CI);
    string getNombre();
    void setNombre(string nombre);
    ~DtSocio();
};

#endif