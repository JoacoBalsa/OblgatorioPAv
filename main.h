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

// Trabajo Obligatorio 1
// main.h
// Modulo de definicion del main.

void menuAgregarSocio();

void agregarSocio(string ci, string nombre);
//Crea un nuevo socio en el sistema.

void menuAgregarClase();

void agregarClase(DtClase& clase);
// Crea una nueva clase en el sistema.

void menuAgregarInscripcion();

bool existeSocio(int ci);
//Retorna true si ya existe un socio con la c.i pasada por parametro, false en c.c

bool existeClase(int id);
//Retorna true si ya existe una clase con la id pasada por parametro, false en c.c

bool existeInscripcion(int ciS, int idC);

bool cupoAlcanzado(int idC);
//Retorna true si la clase pasada por parametro ya alcanzo el cupo de inscripciones, false en c.c

bool diaValido(int dia);

bool mesValido(int mes);

bool anioValido(int anio);

void agregarInscripcion(string ciSocio, int idClase, DtFecha fecha);
// Crea una inscripcion de un socio a una clase.

void menuBorrarInscripcion();

void borrarInscripcion (string ciSocio, int idClase);
// Borra la inscripcion de un socio a una clase.

#endif