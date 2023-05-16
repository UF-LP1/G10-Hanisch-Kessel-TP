#include "cGlobos.h"
#include <iostream>

cGlobos::cGlobos(std::string _nombre, float _precio, std::string _color)
    : cArticulos(_nombre, _precio), color(_color) {}

cGlobos::~cGlobos() {}

std::string cGlobos::getColor() {
    return color;
}
void cGlobos::setStock(int _stock) {
    this->stock = _stock;
}

void cGlobos::mostrarInformacion() {
    std::cout << "Nombre: " << getNombre() << std::endl;
    std::cout << "Precio: $" << getPrecio() << std::endl;
    std::cout << "Color: " << color << std::endl;
    std::cout << "Stock: " << getStock() << std::endl;
}
