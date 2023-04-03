#include <iostream>
#include "main.h"
#define MAX_SOCIOS 10
#define MAX_CLASES 5

using namespace std; 

// Colecciones de socios y clases
struct Socios {
    Socio* s[MAX_SOCIOS];
    int tope;
} colSocio;

struct Clases {
    DtClase* c[MAX_CLASES];
    int tope;
}   colClase;

// Funciones
void menuAgregarSocio(){
    if(colSocio.tope < MAX_SOCIOS){
        string ci, nombre;
        cout << "Ingrese un Nombre para el socio: ";
        cin >> nombre;
        cout << "Ingrese una CI: ";
        cin >> ci;
        cout << endl;
        agregarSocio(ci, nombre);
    }else
        throw std::invalid_argument("Limite de socios excedido\n");   
}

void agregarSocio(string ci, string nombre){
    int i = 0;
    while(i < colSocio.tope && colSocio.s[i]->getCI() != stoi(ci))
        i++;
    if(i == colSocio.tope){
        colSocio.tope++;
        Socio* nuevoS = new Socio(stoi(ci), nombre);
        colSocio.s[i] = nuevoS;
        cout << "Socio registrado exitosamente" << endl;
    }else
        throw std::invalid_argument("Socio ya registrado\n");
}

void menuAgregarClase(){
    if(colClase.tope < MAX_CLASES){
        int id, aux,i = 0;
        string nom, enRam;
        turno t;
        DtClase c;
        cout << "Ingrese un id para la clase: ";
        cin >> id;
        cout << "Ingrese un nombre para la clase: ";
        cin >> nom;
        cout << "Seleccione un turno para la clase: " << endl;
        cout << "1. Manana\n2. Tarde\n3.Noche"<< endl;
        cin >> aux;
        switch (aux)
        {
        case 1: t = Manana;
            break;
        case 2: t= Tarde;
            break;
        case 3: t= Noche;
            break;
        default:
            throw std::invalid_argument("Turno invalido\n");
            break;
        }
        c.setID(id);
        c.setNombre(nom);
        c.setTurno(t);
        agregarClase(c);
    }else
        throw std::invalid_argument("Limite de clases excedido\n");
}

void agregarClase(DtClase& clase){
    int i = 0, aux, cantB;
    bool ram;
    string enRam;
    DtSpinning s;
    while(i < colClase.tope && colClase.c[i]->getID() != clase.getID())
        i++;
    if(i == colClase.tope){
        colClase.tope++;
        /*colClase.c[i]->setID(clase.getID());
        colClase.c[i]->setNombre(clase.getNombre());
        colClase.c[i]->setTurno(clase.getTurno());*/
        cout << "Seleccione modalidad" << endl;
        cout << "1.Spinning\n2.Entrenamiento" << endl;
        cin >> aux;
        switch (aux)
        {
        case 1: cout << "Cuantas bicicletas va a tener la clase: ";
                cin >> cantB;
                s = DtSpinning(clase.getID(), clase.getNombre(), clase.getTurno(), cantB);
                colClase.c[i]->setID(s.getID());
                colClase.c[i]->setNombre(s.getNombre());
                colClase.c[i]->setTurno(s.getTurno());
            break;
        case 2: cout << "¿Va a ser en la rambla la clase? ";
            cout << "\nSi/No"<< endl;
            cin >> enRam;
            if(enRam == "Si" || enRam == "si" || enRam == "SI")
                ram = true;
            else if (enRam == "No" || enRam == "no" || enRam == "NO")
                ram = false;
            else
                throw std::invalid_argument("Comando incorrecto\n");
                c = DtEntrenamiento(id, nom, t, ram);
            break;
        default:
            throw std::invalid_argument("Tipo de clase invalido\n");
            break;
        }
        cout << "Clase registrada exitosamente" << endl;
    }else
        throw std::invalid_argument("Clase ya registrada\n");
}

void agregarInscripcion(string ciSocio, int idClase, DtFecha fecha){

}

void borrarInscripcion (string ciSocio, int idClase){

}

void menu(){
    cout << "▓▓▓▓▓▓▒▒▒▒▒▒░░░░░░░░░░░░░░░░░░▒▒▒▒▒▒▓▓▓▓▓▓" << endl;
    cout << "▓▓▓▓▓▓▒▒▒▒▒▒░░ Laboratorio 1 ░▒▒▒▒▒▒▓▓▓▓▓▓" << endl;
    cout << "▓▓▓▓▓▓▒▒▒▒▒▒░░░░░░ MENU ░░░░░░▒▒▒▒▒▒▓▓▓▓▓▓" << endl;
    cout << "1. Agregar Socio" << endl;
    cout << "2. Agregar Clase" << endl;
    cout << "3. Agregar Inscripcion" << endl;
    cout << "4. Borrar Inscripcion" << endl;
    cout << "5. Salir" << endl;
    cout << "▓▓▓▓▓▓▒▒▒▒▒▒░░░░░░ MENU ░░░░░░▒▒▒▒▒▒▓▓▓▓▓▓" << endl;
    cout << "Ingrese una opcion: ";
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
        case 1: 
                try{
                    menuAgregarSocio();
                }
                catch(invalid_argument& e){
                    cout<< e.what() << endl;
                }
                break;
        case 2: 
                try{
                    menuAgregarClase();
                }
                catch(invalid_argument& e){
                    cout<< e.what() << endl;
                }
                break;
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