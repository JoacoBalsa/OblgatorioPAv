#ifndef DTSPINNING
#define DTSPINNING
#include <iostream>
#include <string.h>
#include "DtClase.h"
#include "Clase.h"

class DtSpinning: public DtClase{
private:
    int cantBicicletas;
public:
    DtSpinning(); 
    DtSpinning(int id, string nombre, turno turno, int cantBicicletas); 
    int getCantBicicletas(); 
    void setCantBicicletas(int cantBicicletas); 
    int cupo(); 
    ~DtSpinning(); 
};

#endif