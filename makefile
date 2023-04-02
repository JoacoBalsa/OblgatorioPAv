main: DtSocio.o DtFecha.o DtClase.o DtSpinning.o DtEntrenamiento.o Clase.o Entrenamiento.o Spinning.o Inscripcion.o Socio.o  main.o
	g++ DtSocio.o DtFecha.o DtClase.o DtSpinning.o DtEntrenamiento.o Clase.o Entrenamiento.o Spinning.o Inscripcion.o Socio.o  main.o -o sistema

DtSocio.o: DtSocio.cpp

DtFecha.o: DtFecha.cpp

DtClase.o: DtClase.cpp

DtSpinning.o: DtSpinning.cpp

DtEntrenamiento.o: DtEntrenamiento.cpp

Clase.o: Clase.cpp

Entrenamiento.o: Entrenamiento.cpp

Spinning.o: Spinning.cpp

Inscripcion.o: Inscripcion.cpp

Socio.o: Socio.cpp

main.o: main.cpp

clean:
	rm -rf *.o sistema
	clear