#pragma once
#include <string>
#include<vector>

class cArticulos {
protected:
    std::string nombre;
    float precio;
    int stock;
    std::vector<cArticulos*> inventario;
public:
    cArticulos(std::string _nombre, float _precio, int _stock);
    virtual ~cArticulos();
    std::string getNombre();
    float getPrecio();
    int getStock();
    virtual void mostrarInformacion() = 0;
};
