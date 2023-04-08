#ifndef DTFECHA
#define DTFECHA
#include <iostream>
#include <string.h>

// Trabajo Obligatorio 1
// DtFecha.h
// Modulo de definicion del DataType Fecha.

using namespace std;

class DtFecha{
private:
    int dia;
    int mes;
    int anio;
public:
    DtFecha(); 
    DtFecha(int d, int m, int a); 
    DtFecha(DtFecha &fec); 
    void setDia(int d);
    void setMes(int m);
    void setAnio(int a); 
    int getDia();
    int getMes();
    int getAnio();
    ~DtFecha();
};

#endif