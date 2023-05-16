#pragma once
#include "cArticulos.h"

class cGlobos : public cArticulos {
private:
    std::string color;

public:
    cGlobos(std::string _nombre, float _precio, std::string _color);
    ~cGlobos();
    std::string getColor();
    void mostrarInformacion();
    void setStock(int _stock);
};