#pragma once
#include <string>

class cArticulos {
protected:
    std::string nombre;
    float precio;
    static int stock;

public:
    cArticulos(std::string _nombre, float _precio);
    virtual ~cArticulos();
    std::string getNombre();
    float getPrecio();
    static int getStock();
    static void setStock(int _stock);
    virtual void mostrarInformacion() = 0;
};
