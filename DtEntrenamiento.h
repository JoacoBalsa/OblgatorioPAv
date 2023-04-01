#ifndef DTENTRENAMIENTO
#define DTENTRENAMIENTO

class DtEntrenamiento : public Clase{
private:
    bool enRambla;
public:
    DtEntrenamiento();
    DtEntrenamiento(int id, string n, turno t, bool enRam);
    bool getRambla();
    void setRambla(bool r);
    ~DtEntrenamiento();
};


#endif