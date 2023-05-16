
#pragma once
#include "cArticulos.h"

class cDisfraces : public cArticulos {
private:
    bool alquiler;
    int tiempoAlquiler;

public:
    cDisfraces(std::string _nombre, float _precio, bool _alquiler, int _tiempoAlquiler);
    ~cDisfraces();
    bool getAlquiler();
    int getTiempoAlquiler();
    void mostrarInformacion();
};
