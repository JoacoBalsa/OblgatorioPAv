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
DtSpinning::~DtSpinning(){}