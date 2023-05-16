#pragma once
#include "cPersona.h"
#include "cCarrito.h"

class cCliente : public cPersona {
private:
    int numero;
    cCarrito carrito;

public:
    cCliente(std::string _nombre, int _numero);
    ~cCliente();
    std::string getNombre();
    int getNumero();
    void agregarArticuloCarrito(cArticulos* articulo);
    void pagarCarrito();
};