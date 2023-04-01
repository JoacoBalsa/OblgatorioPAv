#ifndef DTFECHA
#define DTFECHA
#include <iostream>
#include <string.h>

// Trabajo Obligatorio 1
// Fecha.h
// Modulo de la clase Fecha.

using namespace std;

class DtFecha{
private:
    int dia;
    int mes;
    int anio;
public:
    DtFecha(); //Constructor por defecto 
    DtFecha(int d, int m, int a); //Constructor por parametros
    DtFecha(Fecha &fec); //Constructor por copia
    void setFecha(int d, int m, int a); //Constructor por fecha
    Fecha *getFecha();
    ~DtFecha();
};

#endif;