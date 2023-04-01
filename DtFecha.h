#ifndef DTFECHA
#define DTFECHA
#include <iostream>
#include <string.h>

// Trabajo Obligatorio 1
// Fecha.h
// Modulo de la clase Fecha.

using namespace std;

class Fecha{
private:
    int dia;
    int mes;
    int anio;
public:
    Fecha(); //Constructor por defecto 
    Fecha(int d, int m, int a); //Constructor por parametros
    Fecha(Fecha &fec); //Constructor por copia
    void setFecha(int d, int m, int a); //Constructor por fecha
    Fecha *getFecha();
    ~Fecha();
};

#endif;