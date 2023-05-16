#include<iostream>
#include "cVajilla.h"

cVajilla::cVajilla(const std::string& nombre, int stock, float precio, const std::string & color) : cArticulos(nombre, precio), color(color) {}

std::string cVajilla::getColor()  {
    return color;
}

void cVajilla::mostrarInformacion() {
    std::cout << "Nombre: " << getNombre() << "\n";
    std::cout << "Tipo: Vajilla\n";
    std::cout << "Color: " << color << "\n";
    std::cout << "Stock: " << getStock() << "\n";
    std::cout << "Precio: $" << getPrecio() << "\n";
}
