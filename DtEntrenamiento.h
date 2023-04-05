#ifndef DTENTRENAMIENTO
#define DTENTRENAMIENTO
#include <iostream>
#include <string>
#include "Turno.h"
#include "DtClase.h"

using namespace std;

// Trabajo Obligatorio 1
// DtEntrenamiento.h
// Modulo del DataType Entrenamiento.

class DtEntrenamiento : public DtClase{
private:
    bool enRambla;
public:
    DtEntrenamiento();
    DtEntrenamiento(int id, string n, turno t, bool enRam);
    DtEntrenamiento(DtEntrenamiento &entrenamiento);
    bool getRambla();
    void setRambla(bool r);
    friend ostream& operator <<(ostream&, DtEntrenamiento&);
    ~DtEntrenamiento();
};

#endif