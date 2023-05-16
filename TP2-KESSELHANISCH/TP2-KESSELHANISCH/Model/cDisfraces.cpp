#include "cDisfraces.h"
#include <iostream>

cDisfraces::cDisfraces(std::string _nombre, float _precio, bool _alquiler, int _tiempoAlquiler)
    : cArticulos(_nombre, _precio), alquiler(_alquiler), tiempoAlquiler(_tiempoAlquiler) {}

cDisfraces::~cDisfraces() {}

bool cDisfraces::getAlquiler() {
    return alquiler;
}

int cDisfraces::getTiempoAlquiler() {
    return tiempoAlquiler;
}

void cDisfraces::mostrarInformacion() {
    std::cout << "Nombre: " << getNombre() << std::endl;
    std::cout << "Precio: $" << getPrecio() << std::endl;
    if (alquiler) {
        std::cout << "Alquiler: Disponible" << std::endl;
        std::cout << "Tiempo de alquiler: " << tiempoAlquiler << " días" << std::endl;
    }
    else {
        std::cout << "Alquiler: No disponible" << std::endl;
    }
}
