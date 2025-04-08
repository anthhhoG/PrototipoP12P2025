#include "idustria.h"
#include "utilidades.h"
// ...

void Industria::generarDatos() {
    for (int i = 0; i < 5; i++) {
        double suma = 0;
        for (int j = 0; j < 4; j++) {
            ventas[i][j] = generarAleatorio(1, 1000); // usando función de utilidades
            suma += ventas[i][j];
        }
        promedios[i] = suma / 4.0;
    }
}

void Industria::mostrarDatos() {
    imprimirSeparador(nombre);
    // ...
}

