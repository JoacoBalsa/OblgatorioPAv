#include <iostream>
#include "main.h"
#define MAX_SOCIOS 10
#define MAX_CLASES 10

// Trabajo Obligatorio 1
// main.cpp
// Modulo implementacion del main.

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
void menuAgregarSocio(){
    if(colSocio.tope < MAX_SOCIOS){ //Se fija que no se haya alcanzado el maximo de socios en el gimnasio.
        string ci, nombre;
        cout << "▓▓▓▓▓▓▒▒▒▒▒▒▒░░░░░░░░░░░░░░░▒▒▒▒▒▒▓▓▓▓▓▓" << endl;
        cout << "▓▓▓▓▓▓▒▒▒▒▒▒▒ AGREGAR SOCIO ▒▒▒▒▒▒▓▓▓▓▓▓" << endl;
        cout << "Ingrese un Nombre para el socio: ";
        cin >> nombre;
        cout << "Ingrese una CI: ";
        cin >> ci;
        if(existeSocio(stoi(ci)))
            throw std::invalid_argument("Socio ya registrado\n");
        cout << endl;
        agregarSocio(ci, nombre);
    }else
        throw std::invalid_argument("Limite de socios excedido\n");   
}

void agregarSocio(string ci, string nombre){
    Socio* nuevoS = new Socio(stoi(ci), nombre);
    colSocio.s[colSocio.tope] = nuevoS;
    colSocio.tope++;
    cout << "Socio registrado exitosamente" << endl;
    /*int i = 0;
    while(i < colSocio.tope && colSocio.s[i]->getCI() != stoi(ci)) //Llega hasta el final del arreglo de socios y se fija que no haya un socio ya registrado con esa C.I
        i++;
    if(i == colSocio.tope){ //Si llego al final quiere decir que no se repitio la C.I
        colSocio.tope++;
        Socio* nuevoS = new Socio(stoi(ci), nombre);
        colSocio.s[i] = nuevoS;
        cout << "Socio registrado exitosamente" << endl;
    }else
        throw std::invalid_argument("Socio ya registrado\n");*/
}

void menuAgregarClase(){
    if(colClase.tope < MAX_CLASES){
        int id, aux opc, cantB;
        string nom, enRam;
        turno t;
        bool ram, repetida = true;
        DtEntrenamiento entrenamiento;
        DtSpinning spinning;

        cout << "▓▓▓▓▓▓▒▒▒▒▒▒▒░░░░░░░░░░░░░░░▒▒▒▒▒▒▓▓▓▓▓▓" << endl;
        cout << "▓▓▓▓▓▓▒▒▒▒▒▒▒ AGREGAR CLASE ▒▒▒▒▒▒▓▓▓▓▓▓" << endl;
        cout << "Ingrese un id para la clase: ";
        cin >> id;
        if(existeClase(id))
            throw std::invalid_argument("ID ya en uso\n");
        /*while(i < colClase.tope && colClase.c[i]->getID() != id){
            i++;
            if(i == colClase.tope)
                repetida = false;
        }
        if(colClase.tope != 0 && repetida)
            throw std::invalid_argument("ID ya en uso\n");*/
        cout << "Ingrese un nombre para la clase: ";
        cin >> nom;
        cout << "Seleccione un turno para la clase: " << endl;
        cout << "1. Manana\n2. Tarde\n3. Noche"<< endl;
        cin >> aux;
        switch (aux){
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
        cout << "Seleccione modalidad" << endl;
        cout << "1.Spinning\n2.Entrenamiento" << endl;
        cin >> opc;
        switch (opc){
            case 1: cout << "Ingrese la cantidad de bicicletas: ";
                    cin >> cantB;
                    if(cantB <= 50){
                        spinning = DtSpinning(id, nom, t, cantB);
                        agregarClase(spinning);
                    }else
                        throw std::invalid_argument("Limite de bicicletas excedido\n");
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
                    entrenamiento = DtEntrenamiento(id,nom,t,ram);
                    agregarClase(entrenamiento);
            break;
        }
    }else
        throw std::invalid_argument("Limite de clases excedido\n");
}

void agregarClase(DtClase& clase){
    try{//Trata de castear la clase pasada por parametro como Spinning y si no puede la castea como Entrenamiento
        DtSpinning& dts = dynamic_cast<DtSpinning&>(clase);
        Spinning *spinning = new Spinning (dts.getID(),
                                           dts.getNombre(),
                                           dts.getTurno(),
                                           dts.getCantBicicletas());
        colClase.c[colClase.tope] = spinning;
        colClase.tope++;
        cout << "Clase registrada con exito\n" << endl;                             
    } catch(bad_cast){
            DtEntrenamiento& dte = dynamic_cast<DtEntrenamiento&>(clase);
            Entrenamiento *entrenamiento = new Entrenamiento (dte.getID(),
                                                              dte.getNombre(),
                                                              dte.getTurno(),
                                                              dte.getRambla());
            colClase.c[colClase.tope] = entrenamiento;
            colClase.tope++;
            cout << "Clase registrada con exito\n" << endl;
    }
    /*DtClase *c = &clase;
    DtSpinning* dts = dynamic_cast<DtSpinning*>(c);
    if(dts != NULL){
        Spinning *spinning = new Spinning (dts->getID(),
                                           dts->getNombre(),
                                           dts->getTurno(),
                                           dts->getCantBicicletas());
        colClase.c[colClase.tope] = spinning;
        colClase.tope++;
        cout << "Clase registrada con exito\n" << endl;
    }else{                          
        DtEntrenamiento* dte = dynamic_cast<DtEntrenamiento*>(c);
        Entrenamiento *entrenamiento = new Entrenamiento (dte->getID(),
                                                          dte->getNombre(),
                                                          dte->getTurno(),
                                                          dte->getRambla());
        colClase.c[colClase.tope] = entrenamiento;
        colClase.tope++;
        cout << "Clase registrada con exito\n" << endl;
    } */  
}

bool existeSocio(int ci){
    int i = 0;
    while(i < colSocio.tope){ 
        if(ci == colSocio.s[i]->getCI())
            return true;
        i++;
    }
    return false;
}

bool existeClase(int id){
    int i = 0;
    while(i < colClase.tope){ 
        if(id == colClase.c[i]->getID())
            return true;
    }
    return false;
}

bool diaValido(int dia){
    if(dia > 0 && dia < 31)
        return true;
    else
        return false;
}

bool mesValido(int mes){
    if(mes > 0 && mes < 13)
        return true;
    else 
        return false;
}

bool anioValido(int anio){
    if(anio < 1900)
        return false;
    else    
        return true;
}

bool cupoAlcanzado(int idC){}

void menuAgregarInscripcion(){
    int idC, dia, mes, anio;
    string ciS;

    cout << "▓▓▓▓▓▓▒▒▒▒▒▒▒░░░░░░░░░░░░░░░░░░░░░▒▒▒▒▒▒▓▓▓▓▓▓" << endl;
    cout << "▓▓▓▓▓▓▒▒▒▒▒▒▒ AGREGAR INSCRIPCION ▒▒▒▒▒▒▓▓▓▓▓▓" << endl;
    cout << "CI del Socio: ";
    cin >> ciS;
    if(!existeSocio(ciS))                                           //Se fija que exista el socio de la inscripcion.
        throw std::invalid_argument("No existe ese socio.\n");
    cout << "ID de Clase: ";
    cin >> idC;
    if(!existeClase(idC))                                           //Se fija que exista la clase de la inscripcion.
        throw std::invalid_argument("No existe esa clase.\n");
    if(!existeInscripcion(ciS, idC))                                //Se fija que ese socio no este ya inscripto en esa clase.
        throw std::invalid_argument("Ese usuario ya esta inscripto en esa clase.\n");
    if(!cupoAlcanzado(idC))                                         //Se fija que todavia hayan cupos en esa clase.
        throw std::invalid_argument("No hay mas cupos en esa clase.\n");
    cout << "FECHA INICIO" << endl;
    cout << "DIA: ";
    cin >> dia;
    if(!diaValido(dia))                                             //Se fija que el dia ingresado sea valido.
        throw std::invalid_argument("Dia no valido.\n");
    cout << "MES: ";
    cin >> mes;
    if(!mesValido(mes))                                             //Se fija que el mes ingresado sea valido.
        throw std::invalid_argument("Mes no valido.\n");
    cout << "ANIO: ";
    cin >> anio;
    if(!anioValido(anio))                                           //Se fija que el anio ingresado sea valido.
        throw std::invalid_argument("Anio no valido.\n");
    DtFecha f = DtFecha(dia, mes, anio);
    agregarInscripcion(ciS, idC, f);
}

void agregarInscripcion(string ciSocio, int idClase, DtFecha fecha){

}

void borrarInscripcion (string ciSocio, int idClase){

}

void menu(){
    cout << "▓▓▓▓▓▓▒▒▒▒▒▒░░░░░░░░░░░░░░░░░░░▒▒▒▒▒▒▓▓▓▓▓▓" << endl;
    cout << "▓▓▓▓▓▓▒▒▒▒▒▒░░ Laboratorio 1 ░░▒▒▒▒▒▒▓▓▓▓▓▓" << endl;
    cout << "▓▓▓▓▓▓▒▒▒▒▒▒░░░░░░ MENU ░░░░░░░▒▒▒▒▒▒▓▓▓▓▓▓" << endl;
    cout << "1. Agregar Socio" << endl;
    cout << "2. Agregar Clase" << endl;
    cout << "3. Agregar Inscripcion" << endl;
    cout << "4. Borrar Inscripcion" << endl;
    cout << "5. Salir" << endl;
    cout << "\nIngrese una opcion: ";
    
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
            case 3:
                    try{
                        menuAgregarInscripcion();
                    }
                    catch(invalid_argument& e){
                        cout<< e.what() << endl;
                    }
                    break;
            case 4: 
                    try{
                        menuBorrarInscripcion();
                    }
                    catch(invalid_argument& e){
                        cout << e.what() << endl;
                    }
                    break;
            default:       //Opcion unicamente para ver si funciona la sobrecarga de operador y si registra bien las clases
                for(int i = 0; i < colClase.tope; i++){
                    try{
                    Spinning& clas = dynamic_cast<Spinning&>(*colClase.c[i]);
                    DtSpinning s = DtSpinning(clas.getID(), clas.getNombre(), clas.getTurno(), clas.getCantBicicletas());
                    cout << s << "\n-----------------" << endl;
                    }catch(bad_cast){
                        Entrenamiento& clas = dynamic_cast<Entrenamiento&>(*colClase.c[i]);
                        DtEntrenamiento e = DtEntrenamiento(clas.getID(), clas.getNombre(), clas.getTurno(), clas.getRambla());
                        cout << e << "\n-----------------" << endl;
                    }
                }
                break;
        }
        menu();
        cin >> opc;
    }
    cout << "Me voy a la mierda" << endl;
    return 0;
}

