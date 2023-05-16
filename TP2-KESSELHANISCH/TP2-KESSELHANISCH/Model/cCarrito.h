#pragma once
#include<iostream>
#include "cArticulos.h"
#include <vector>

class cCarrito {
private:
    std::vector<cArticulos*>listaArticulos;

public:
    cCarrito();
    ~cCarrito();
    void agregarArticuloCarrito(cArticulos* articulo);
    void quitarArticulo(cArticulos* articulo);
    void mostrarCarrito();
    float calcularTotal();
};

