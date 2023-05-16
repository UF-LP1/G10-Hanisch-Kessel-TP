#pragma once
#include "cArticulos.h"

class cVelas : public cArticulos {
private:
    int cantidad;

public:
    cVelas(std::string _nombre, float _precio, int _cantidad);
    ~cVelas();
    int getCantidad();
    void mostrarInformacion();
};

