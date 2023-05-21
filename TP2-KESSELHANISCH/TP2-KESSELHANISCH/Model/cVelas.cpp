#include "cVelas.h"
#include <iostream>

cVelas::cVelas(std::string _nombre, float _precio, int _stock, int _cantidad)
    : cArticulos(_nombre, _precio,_stock), cantidad(_cantidad){}

cVelas::~cVelas() {}

int cVelas::getCantidad() {
    return cantidad;
}


void cVelas::mostrarInformacion() {

    std::cout << "Nombre: " << getNombre() << std::endl;
    std::cout << "Precio: $" << getPrecio() << std::endl;
    std::cout << "Cantidad: " << cantidad << std::endl;
}
