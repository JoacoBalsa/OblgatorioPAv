#ifndef DTSPINNING
#define DTSPINNING
#include "DtClase.h"

class DtSpinning: public DtClase{
private:
    int cantBicicletas;
public:
    DtSpinning(); //Constructor default
    DtSpinning(int id, string nombre, turno turno, int cantBicicletas); //Constructor por parametros
    int getCantBicicletas(); //Getter
    void setCantBicicletas(int cantBicicletas); //Setter
    int cupo(); //Operacion
    ~DtSpinning(); //Destructor
};

#endif