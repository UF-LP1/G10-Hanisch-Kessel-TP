#pragma once
#include "cArticulos.h"

class cGolosinas : public cArticulos {
private:
    std::string sabor;
     int stock;
public:
    cGolosinas(std::string _nombre, float _precio, int _stock, std::string _sabor);
    ~cGolosinas();
    std::string getSabor();
    void mostrarInformacion();
    
    
};
