#pragma once
#include "cArticulos.h"

class cGlobos : public cArticulos {
private:
    std::string color;
     int stock;
public:
    cGlobos(std::string _nombre, float _precio, int _stock, std::string _color);
    ~cGlobos();
    std::string getColor();
    void mostrarInformacion();
    
    
};