#include <iostream>
#include "main.h"
#define MAX_SOCIOS 10
#define MAX_CLASES 5
♪
using namespace std; 

// Colecciones de socios y clases
struct Socios {
    Socio* s[MAX_SOCIOS];
    int tope;
} colSocio;

struct Clases {
    Clase* c[MAX_CLASES];
    int tope;
}   colClase;

// Funciones
void agregarSocio(string ci, string nombre){
    
}

void menu(){
  cout << "▓▓▓▓▓▓▒▒▒▒▒▒░░ Laboratorio 1 ░▒▒▒▒▒▒▓▓▓▓▓▓" << endl;
  cout << "▓▓▓▓▓▓▒▒▒▒▒▒░░░░░░ MENU ░░░░░░▒▒▒▒▒▒▓▓▓▓▓▓" << endl;
  cout << "1. Agregar Socio" << endl;
  cout << "2. Agregar Clase" << endl;
  cout << "3. Agregar Inscripcion" << endl;
  cout << "4. Borrar Inscripcion" << endl;
  cout << "5. Salir" << endl;
  cout << "▓▓▓▓▓▓▒▒▒▒▒▒░░░░░░ MENU ░░░░░░▒▒▒▒▒▒▓▓▓▓▓▓" << endl;
  cout << "OPCION: ";
}

// Main
int main(){
    colClase.tope = 0;
    colSocio.tope = 0;
    int opc;
    menu();
    cin >> opc;
    while(opc != 5){
        switch (opc){
        case 1: cout << "Agrego socio" << endl;
                break;
        case 2: cout << "Agrego clase" << endl;
                break;
        case 3: cout << "Agrego Inscripcion" << endl;
                break;
        case 4: cout << "Borro Inscripcion" << endl;
                break;
        }
        menu();
        cin >> opc;
    }
    cout << "Me voy a la mierda" << endl;
    return 0;
}