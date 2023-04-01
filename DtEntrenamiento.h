#ifndef DTENTRENAMIENTO
#define DTENTRENAMIENTO
#include <iostream>
#include <string.h>

// Trabajo Obligatorio 1
// DtEntrenamiento.h
// Modulo del DataType Entrenamiento.

class DtEntrenamiento : public DtClase{
private:
    bool enRambla;
public:
    DtEntrenamiento();
    DtEntrenamiento(int id, string n, turno t, bool enRam);
    bool getRambla();
    void setRambla(bool r);
    ~DtEntrenamiento();
};

#endif