
#pragma once
#include "cArticulos.h"

class cDisfraces : public cArticulos {
private:
    bool alquiler;
   unsigned int tiempoAlquiler;
    int stock;
public:
    cDisfraces(std::string _nombre, float _precio, int _stock, bool _alquiler, int _tiempoAlquiler);
    ~cDisfraces();
    bool getAlquiler();
    int getTiempoAlquiler(unsigned int tiempoAlquiler);
    void mostrarInformacion();
 
    
};
