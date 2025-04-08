//Desarrollado por Anthony Hetzael Suc Gomez
//Carne: 9959-24-389
//serie 4
#include <iostream> //librerias
#include <iomanip>
#include "industria.h"
#include "utilidades.h"
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0)); // Inicializar generación de números aleatorios

    int opcion;
    do {
        limpiarPantalla(); // Limpia consola

        Industria industria1("Camara de Industria");
        Industria industria2("Camara de la Construcción");
        Industria industria3("Camara de Transporte");

        industria1.mostrarDatos();
        industria2.mostrarDatos();
        industria3.mostrarDatos();

        // Comparar promedios
        Industria mejor = industria1;  // Comienza con la primera industria y las siguietes
        if (industria2.getPromedioGeneral() > mejor.getPromedioGeneral())
            mejor = industria2;

        if (industria3.getPromedioGeneral() > mejor.getPromedioGeneral())
            mejor = industria3;

        cout << ">> " << mejor.getNombre() << " con promedio de Q ";
        cout << fixed << setprecision(2) << mejor.getPromedioGeneral() << endl;

        cout << "Desea repetir el proceso? (1 = Si, 0 = No): ";
        cin >> opcion;

    } while (opcion == 1);

    return 0;
}
