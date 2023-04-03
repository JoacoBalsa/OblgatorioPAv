#ifndef MAIN
#define MAIN
#include "string"
#include "DtClase.h"
#include "Clase.h"
#include "DtEntrenamiento.h"
#include "DtFecha.h"
#include "DtSocio.h"
#include "DtSpinning.h"
#include "Entrenamiento.h"
#include "Inscripcion.h"
#include "Socio.h"
#include "Spinning.h"
#include "Turno.h"

void agregarSocio(string ci, string nombre);
//Crea un nuevo socio en el sistema. En caso de ya existir, levanta la excepcion std::invalid_argument

void agregarClase(DtClase& clase);

#endif