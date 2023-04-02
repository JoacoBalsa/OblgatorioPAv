#include "DtFecha.h"

DtFecha::DtFecha(){}

DtFecha::DtFecha(int d, int m, int a){
    if((d > 31 || d < 1) || (m > 12 || m < 1) || (a < 1900))
        throw invalid_argument("Fecha no valida!\n");
    else{
        this->dia = d;
        this->mes = m;
        this->anio = a;
    }
}

DtFecha::DtFecha(Fecha &fec){
    this->dia = fec->dia;
    this->mes = fec->mes;
    this->anio = fec->anio;
}

void DtFecha::setFecha(int d, int m, int a){
    if((d > 31 || d < 1) || (m > 12 || m < 1) || (a < 1900))
        throw invalid_argument("Fecha no valida!\n");
    else{
        this->dia = d;
        this->mes = m;
        this->anio = a;
    }
}

DtFecha DtFecha::getFecha(){
    return this;
};

DtFecha~DtFecha(){}