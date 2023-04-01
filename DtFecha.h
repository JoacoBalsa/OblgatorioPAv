#ifndef DTFECHA
#define DTFECHA
#include <iostream>
#include <string.h>

// Trabajo Obligatorio 1
// DTFecha.h
// Modulo del DataType Fecha.

using namespace std;

class DtFecha{
private:
    int dia;
    int mes;
    int anio;
public:
    DtFecha(); 
    DtFecha(int d, int m, int a); 
    DtFecha(Fecha &fec); 
    void setFecha(int d, int m, int a); 
    Fecha *getFecha();
    ~DtFecha();
};

#endif;