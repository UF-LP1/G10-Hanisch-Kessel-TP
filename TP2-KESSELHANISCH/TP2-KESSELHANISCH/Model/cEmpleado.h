#pragma once
#include "cTrabajador.h"
#include <string>
#include "cCliente.h"

class cEmpleado : public cTrabajador {
public:
    cEmpleado(std::string _nombre);
    ~cEmpleado();
    void llamarCliente(cCliente& cliente);
};