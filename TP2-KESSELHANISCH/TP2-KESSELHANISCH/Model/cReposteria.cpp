#include "cReposteria.h"
#include <iostream>

cReposteria::cReposteria(std::string _nombre, float _precio, int _stock)
    : cArticulos(_nombre, _precio, _stock) {}

cReposteria::~cReposteria() {}

void cReposteria::mostrarInformacion() {
    std::cout << "Nombre: " << getNombre() << std::endl;
    std::cout << "Precio: $" << getPrecio() << std::endl;
}