#include "Industrias.h"
#include <iostream>
#include <iomanip>

Sucursal::Sucursal(std::string nombre) : nombre(nombre) {}

void Sucursal::agregarProducto(const Producto& producto) {
    productos.push_back(producto);
}

void Sucursal::mostrarResumen() const {
    std::cout << "\n--- Sucursal: " << nombre << " ---\n";
    float totalSucursal = 0;
    for (const auto& producto : productos) {
        producto.mostrarProducto();
        totalSucursal += producto.getTotalConIVA();
    }
    std::cout << "Total de ventas (con IVA): Q" << std::fixed << std::setprecision(2) << totalSucursal << "\n";
}
