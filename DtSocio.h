#ifndef DTSOCIO
#define DTSOCIO
#include <string>

// Trabajo Obligatorio 1
// DTSocio.h
// Modulo del DataType Socio.

class DtSocio{
    private:
        int CI;
        string nombre;
    public:
        DtSocio();
        DtSocio(int CI, string nombre);
        int getCI();
        void setCI(int CI);
        string getNombre();
        void setNombre(string nombre);
        ~DtSocio();
};

#endif