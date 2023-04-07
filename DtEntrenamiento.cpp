#include "DtEntrenamiento.h"
#include "Turno.h"
#include "DtClase.h"
#include <string.h>
#include <iostream>

using namespace std;

DtEntrenamiento::DtEntrenamiento(){}

DtEntrenamiento::DtEntrenamiento(int id, string n, turno t, bool enRam):DtClase(id, n, t){
    this->enRambla = enRam;
}

DtEntrenamiento::DtEntrenamiento(DtEntrenamiento &entrenamiento):DtClase(entrenamiento){
    this->enRambla = entrenamiento.enRambla;
}

bool DtEntrenamiento::getRambla(){
    return this->enRambla;
}

void DtEntrenamiento::setRambla(bool r){
    this->enRambla = r;
}

ostream& operator <<(ostream& salida, DtEntrenamiento& entrenamiento){
    if(entrenamiento.getRambla())
        salida <<"ID: " << entrenamiento.getID() << endl << "Nombre: " << entrenamiento.getNombre() << endl << "Turno: " << entrenamiento.getTurno() << endl <<  "En rambla: Si";
    else
        salida <<"ID: " << entrenamiento.getID() << endl << "Nombre: " << entrenamiento.getNombre() << endl << "Turno: " << entrenamiento.getTurno() << endl <<  "En rambla: No";
  return salida;
}

DtEntrenamiento::~DtEntrenamiento(){}