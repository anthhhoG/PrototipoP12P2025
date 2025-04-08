#include "utilidades.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

int generarAleatorio(int minimo, int maximo) {
    return rand() % (maximo - minimo + 1) + minimo;
}

void imprimirSeparador(string titulo) {
    cout << "\n=======================================\n";
    if (!titulo.empty()) {
        cout << ">> " << titulo << " <<\n";
        cout << "=======================================\n";
    }
}

void limpiarPantalla() {
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
}
