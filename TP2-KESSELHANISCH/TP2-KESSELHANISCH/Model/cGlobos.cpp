#include "cGlobos.h"
#include <iostream>

cGlobos::cGlobos(std::string _nombre, float _precio, int _stock, std::string _color)
    : cArticulos(_nombre, _precio,_stock), color(_color){
}

cGlobos::~cGlobos() {  }

std::string cGlobos::getColor() {
    return color;
}


void cGlobos::mostrarInformacion() {
    std::cout << "Nombre: " << getNombre() << std::endl;
    std::cout << "Precio: $" << getPrecio() << std::endl;
    std::cout << "Color: " << color << std::endl;
    
}
