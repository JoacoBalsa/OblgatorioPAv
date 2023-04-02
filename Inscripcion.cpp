#include "Inscripcion.h"
Inscripcion::Inscripcion(){}
Inscripcion::Inscripcion(DtFecha fecha, Socio socio, Clase clase){
    this->fecha = fecha;
    this->socio = socio;
    this->clase = clase;
}
DtFecha Inscripcion::getFecha(){
    return this->fecha;
}
void Inscripcion::setFecha(DtFecha fecha){
    this->fecha = fecha;
}
Socio Inscripcion::getSocio(){
    return this->socio;
}
void Inscripcion::setSocio(Socio socio){
    this->socio = socio;
}
Clase Inscripcion::getClase(){
    return this->clase;
}
void Inscripcion::setClase(){
    this->clase = clase;
}

Inscripcion::~Inscripcion(){}