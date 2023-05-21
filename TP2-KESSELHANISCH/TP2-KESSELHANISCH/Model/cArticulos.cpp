#include "cArticulos.h"



cArticulos::cArticulos(std::string _nombre, float _precio, int _stock) : nombre(_nombre), precio(_precio), stock(_stock) {  }


cArticulos::~cArticulos() { }

std::string cArticulos::getNombre() {
    return nombre;
}

float cArticulos::getPrecio() {
    return precio;
}
int cArticulos::getStock() {
    return stock;
}


