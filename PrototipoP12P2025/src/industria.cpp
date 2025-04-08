#include "industria.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
using namespace std;
//genera las empresas
Industria::Industria(string nombre) {
    this->nombre = nombre;
    for (int i = 0; i < 5; i++) {
        empresas[i] = "Empresa " + to_string(i + 1);
    }
    generarDatos();
}
//genera los datos de las empresas
void Industria::generarDatos() {
    srand(time(0));
    for (int i = 0; i < 5; i++) {
        double suma = 0;
        for (int j = 0; j < 4; j++) {
            ventas[i][j] = rand() % 1000 + 1; // en miles de quetzales
            suma += ventas[i][j];
        }
        promedios[i] = suma / 4.0;
    }
}
//muestra los resultados y realiza los calculos de estas misma
void Industria::mostrarDatos() {
    cout << "\nIndustria: " << nombre << endl;
    cout << "---------------------------------------\n";
    for (int i = 0; i < 5; i++) {
        cout << empresas[i] << " -> ";
        for (int j = 0; j < 4; j++) {
            cout << ventas[i][j] << "Q  ";
        }
        cout << "| Promedio: " << fixed << setprecision(2) << promedios[i] << "Q\n";
    }

    cout << "Mayor Venta: " << getEmpresaMayorVenta() << endl;
    cout << "Menor Venta: " << getEmpresaMenorVenta() << endl;
    cout << "Promedio General de la Industria: " << getPromedioGeneral() << "Q\n";
}

double Industria::getPromedioGeneral() {
    double suma = 0;
    for (int i = 0; i < 5; i++) {
        suma += promedios[i];
    }
    return suma / 5.0;
}

string Industria::getNombre() {
    return nombre;
}

string Industria::getEmpresaMayorVenta() {
    int idx = 0;
    for (int i = 1; i < 5; i++) {
        if (promedios[i] > promedios[idx]) {
            idx = i;
        }
    }
    return empresas[idx];
}

string Industria::getEmpresaMenorVenta() {
    int idx = 0;
    for (int i = 1; i < 5; i++) {
        if (promedios[i] < promedios[idx]) {
            idx = i;
        }
    }
    return empresas[idx];
}


