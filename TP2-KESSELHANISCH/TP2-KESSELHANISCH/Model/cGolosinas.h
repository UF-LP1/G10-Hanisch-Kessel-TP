#pragma once
#include "cArticulos.h"

class cGolosinas : public cArticulos {
private:
    std::string sabor;

public:
    cGolosinas(std::string _nombre, float _precio, std::string _sabor);
    ~cGolosinas();
    std::string getSabor();
    void mostrarInformacion();
};
