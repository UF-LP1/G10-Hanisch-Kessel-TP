#include "cEmpleado.h"
#include <iostream>

cEmpleado::cEmpleado(std::string _nombre)
    : cTrabajador(_nombre) {}

cEmpleado::~cEmpleado() {}

void cEmpleado::llamarCliente(cCliente& cliente) {
    std::cout << "Empleado " << getNombre() << " llama al cliente " << cliente.getNombre() << ".\n";
}

