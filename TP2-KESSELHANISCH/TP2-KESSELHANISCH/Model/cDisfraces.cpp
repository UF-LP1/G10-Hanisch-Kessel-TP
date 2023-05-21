#include "cDisfraces.h"
#include <iostream>
using namespace std;

cDisfraces::cDisfraces(std::string _nombre, float _precio, int _stock, bool _alquiler, int _tiempoAlquiler)
    : cArticulos(_nombre, _precio,_stock), alquiler(_alquiler), tiempoAlquiler(_tiempoAlquiler) {
    
}

cDisfraces::~cDisfraces() {  }

bool cDisfraces::getAlquiler() {
    return precio;
    cout << "el precio de alquiler de cada disfraz es de: $" << precio<<"por dia"<<endl;
}

int cDisfraces::getTiempoAlquiler(unsigned int tiempoAlquiler) {
    return tiempoAlquiler;//cantDias
}

void cDisfraces::mostrarInformacion() {
    cout << "Nombre: " << getNombre() << endl;
    cout << "Precio: $" << getPrecio() << endl;
    
    if (alquiler) {
        cout << "Alquiler: Disponible" << endl;
        cout << "Tiempo de alquiler: " << tiempoAlquiler << " días" << endl;
    }
    else {
        std::cout << "Alquiler: No disponible" << std::endl;
    }
}
