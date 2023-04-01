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

/*class DtFecha{
  private:
    int dia;
    int mes;
    int anio;
  public:
    DtFecha();
    DtFecha(int,int,int);
    void setDia(int dia);
    int getDia();
    void setMes(int mes);
    int getMes();
    void setAnio(int anio);
    int getAnio();
    ~DtFecha();*/