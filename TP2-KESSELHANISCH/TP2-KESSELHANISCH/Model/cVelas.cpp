#include "cVelas.h"
#include <iostream>

cVelas::cVelas(std::string _nombre, float _precio, int _cantidad)
    : cArticulos(_nombre, _precio), cantidad(_cantidad) {}

cVelas::~cVelas() {}

int cVelas::getCantidad() {
    return cantidad;
}

void cVelas::mostrarInformacion() {
    std::cout << "Nombre: " << getNombre() << std::endl;
    std::cout << "Precio: $" << getPrecio() << std::endl;
    std::cout << "Cantidad: " << cantidad << std::endl;
    std::cout << "Stock: " << getStock() << std::endl;
}
