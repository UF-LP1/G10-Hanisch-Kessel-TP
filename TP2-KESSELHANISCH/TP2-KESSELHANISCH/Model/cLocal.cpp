#include<iostream>
#include "cLocal.h"
void cLocal::setHorarioSabado(std::string horario) {
    horarioSabado = horario;
}

std::string cLocal::getHorarioSemana() {
    return horarioSemana;
}

std::string cLocal::getHorarioSabado() {
    return horarioSabado;
}
void cLocal::agregarArticulo(cArticulos* articulo) {
    inventario.push_back(articulo);
}

void cLocal::mostrarInventario() {
    std::cout << "Inventario del local:" << std::endl;
    for (cArticulos* articulo : inventario) {
        std::cout << "- " << articulo->getNombre() << std::endl;
    }
}


