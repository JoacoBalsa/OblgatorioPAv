#ifndef DTSPINNING
#define DTSPINNING
#include <iostream>
#include <string>
#include "DtClase.h"
#include "Clase.h"

// Trabajo Obligatorio 1
// DtSpinning.h
// Modulo de implementacion del DataType Spinning.

using namespace std;

class DtSpinning: public DtClase{
private:
    int cantBicicletas;
public:
    DtSpinning(); 
    DtSpinning(int id, string nombre, turno turno, int cantBicicletas);
    DtSpinning(DtSpinning &Spinning); 
    int getCantBicicletas(); 
    void setCantBicicletas(int cantBicicletas); 
    friend ostream& operator <<(ostream&, DtSpinning&);
    ~DtSpinning(); 
};

#endif