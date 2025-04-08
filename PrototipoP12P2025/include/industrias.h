#ifndef SUCURSAL_H
#define SUCURSAL_H

#include <vector>
#include <string>

class Sucursal {
private:
    std::string nombre;
    std::vector<Producto> productos;

public:
    Sucursal(std::string nombre);

    void agregarProducto(const Producto& producto);
    void mostrarResumen() const;
};

#endif
