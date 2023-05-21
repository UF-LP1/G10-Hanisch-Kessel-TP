#ifndef CVAJILLA_H
#define CVAJILLA_H
#include <iostream>
#include "cArticulos.h"

class cVajilla : public cArticulos {
private:
    std::string color;
  
public:
    cVajilla(const std::string& nombre, float precio, int _stock, const std::string& color);

    std::string getColor();
    
    
    void mostrarInformacion();
};

#endif //_CVAJILLA_H