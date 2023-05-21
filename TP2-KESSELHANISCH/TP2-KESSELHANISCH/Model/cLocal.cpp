#include<iostream>
#include "cLocal.h"
cLocal::cLocal() {
    
}
void cLocal::setHorarioSabado(std::string horario) {
    horarioSabado = horario;
}

std::string cLocal::getHorarioSemana() {
    return horarioSemana;
}

std::string cLocal::getHorarioSabado() {
    return horarioSabado;
}

void cLocal::mostrarInventario() {
    std::cout << "Inventario del local:" << std::endl;
    for (cArticulos* articulo : inventario) {
        std::cout << "- " << articulo->getNombre() << "|| Stock disponible: " << articulo->getStock()<< std::endl;
    }
}
cLocal::~cLocal(){}


