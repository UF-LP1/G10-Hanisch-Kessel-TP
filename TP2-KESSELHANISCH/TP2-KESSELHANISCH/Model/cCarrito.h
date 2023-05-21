#pragma once
#include<iostream>
#include "cArticulos.h"
#include <vector>

class cCarrito {
private:
    std::vector<cArticulos*> listaArticulos;

public:
    cCarrito();
    ~cCarrito();
   
    bool quitarArticulo(std::string artiQui, std::vector<cArticulos*> listaArticulos);
    bool Buscar(std::vector<cArticulos*> articulo,std::string artiAgg,std:: vector<cArticulos*>listaArticulos);
    void mostrarCarrito();
    float calcularTotal();
};

