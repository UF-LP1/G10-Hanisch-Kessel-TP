#include "cDisfraces.h"
#include <iostream>
using namespace std;

cDisfraces::cDisfraces(std::string _nombre, float _precio, bool _alquiler, int _tiempoAlquiler)
    : cArticulos(_nombre, _precio), alquiler(_alquiler), tiempoAlquiler(_tiempoAlquiler) {}

cDisfraces::~cDisfraces() {}

void cDisfraces::getAlquiler() {
    return precio;
    cout << "el precio de alquiler de cada disfraz es de: $" << /*precio*/<<"por dia"endl;
}

int cDisfraces::getTiempoAlquiler(_tiempoAlquiler) {
    return tiempoAlquiler*//cantDias; 
}

void cDisfraces::mostrarInformacion() {
    cout << "Nombre: " << getNombre() << endl;
    cout << "Precio: $" << getPrecio() << endl;
    if (alquiler) {
        cout << "Alquiler: Disponible" << endl;
        cout << "Tiempo de alquiler: " << tiempoAlquiler << " d�as" << endl;
    }
    else {
        std::cout << "Alquiler: No disponible" << std::endl;
    }
}
