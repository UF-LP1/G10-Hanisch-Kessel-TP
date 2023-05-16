#include "cArticulos.h"

int cArticulos::stock = 0;

cArticulos::cArticulos(std::string _nombre, float _precio) : nombre(_nombre), precio(_precio) { stock++; }

cArticulos::~cArticulos() { stock--; }

std::string cArticulos::getNombre() {
    return nombre;
}

float cArticulos::getPrecio() {
    return precio;
}

int cArticulos::getStock() {
    return stock;
}
void cArticulos::setStock(int _stock) {
    stock = _stock;
}
