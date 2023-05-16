#pragma once
#include "cArticulos.h"

class cReposteria : public cArticulos {
public:
    cReposteria(std::string _nombre, float _precio);
    ~cReposteria();
    void mostrarInformacion();
};
