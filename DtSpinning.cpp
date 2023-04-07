#include <iostream>
#include "DtSpinning.h"
#include <string.h>

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
  salida <<"ID: " << spinning.getID() << endl << "Nombre: " << spinning.getNombre() << endl << "Turno: " << spinning.getTurno() << endl <<  "Cantidad de bicicletas: " << spinning.getCantBicicletas();
  return salida;
}
/*  Spinning& ola = dynamic_cast<Spinning&>(*colClase.c[0]);
    DtSpinning p = DtSpinning(ola.getID(), ola.getNombre(), ola.getTurno(), ola.getCantBicicletas());
    cout << p << endl;*/

DtSpinning::~DtSpinning(){}