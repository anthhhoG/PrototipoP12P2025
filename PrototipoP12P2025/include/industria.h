#ifndef INDUSTRIA_H
#define INDUSTRIA_H

#include <string>
using namespace std;

class Industria {
private:
    string nombre;
    string empresas[5];
    double ventas[5][4]; // 5 empresas, 4 años
    double promedios[5];

public:
    Industria(string nombre);
    void generarDatos();
    void mostrarDatos();
    double getPromedioGeneral();
    string getNombre();
    string getEmpresaMayorVenta();
    string getEmpresaMenorVenta();
};

#endif

