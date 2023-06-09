#include <iostream>
#include "DtSpinning.h"
#include <string.h>

// Trabajo Obligatorio 1
// DTSpinning.cpp
// Modulo de implementacion del DataType Spinning.

using namespace std;

DtSpinning::DtSpinning(){}

DtSpinning::DtSpinning(int id, string nombre, turno turno, int cantBicicletas):DtClase(id,nombre,turno){
    this->cantBicicletas = cantBicicletas;
}

DtSpinning::DtSpinning(DtSpinning &Spinning):DtClase(Spinning){
    this->cantBicicletas = Spinning.cantBicicletas;
}

int DtSpinning::getCantBicicletas(){
    return this->cantBicicletas;
}

void DtSpinning::setCantBicicletas(int cantBicicletas){
    this->cantBicicletas = cantBicicletas;
}

ostream& operator <<(ostream& salida,DtSpinning& spinning){
  salida <<"ID: " << spinning.getID() << endl << "Nombre: " << spinning.getNombre() << endl;
  switch (spinning.getTurno())
        {
        case 0:
            salida << "Turno: Manana" << "\nCantidad de bicicletas: " << spinning.getCantBicicletas();
            break;
        case 1: 
            salida << "Turno: Tarde" << "\nCantidad de bicicletas: " << spinning.getCantBicicletas();
            break;
        case 2:
            salida << "Turno: Noche" << "\nCantidad de bicicletas: " << spinning.getCantBicicletas();
            break;
        } 
  return salida;
}

DtSpinning::~DtSpinning(){}