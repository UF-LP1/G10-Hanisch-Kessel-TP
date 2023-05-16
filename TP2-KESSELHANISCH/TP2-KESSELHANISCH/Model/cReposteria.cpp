#include "cReposteria.h"
#include <iostream>

cReposteria::cReposteria(std::string _nombre, float _precio)
    : cArticulos(_nombre, _precio) {}

cReposteria::~cReposteria() {}

void cReposteria::mostrarInformacion() {
    std::cout << "Nombre: " << getNombre() << std::endl;
    std::cout << "Precio: $" << getPrecio() << std::endl;
    std::cout << "Stock: " << getStock() << std::endl;
}