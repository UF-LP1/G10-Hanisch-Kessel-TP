#include "cGolosinas.h"
#include <iostream>

cGolosinas::cGolosinas(std::string _nombre, float _precio, std::string _sabor)
    : cArticulos(_nombre, _precio), sabor(_sabor) {}

cGolosinas::~cGolosinas() {}

std::string cGolosinas::getSabor() {
    return sabor;
}

void cGolosinas::mostrarInformacion() {
    std::cout << "Nombre: " << getNombre() << std::endl;
    std::cout << "Precio: $" << getPrecio() << std::endl;
    std::cout << "Sabor: " << sabor << std::endl;
    std::cout << "Stock: " << getStock() << std::endl;
}
