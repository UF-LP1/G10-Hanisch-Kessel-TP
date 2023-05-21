#include "cCliente.h"
#include <iostream>

cCliente::cCliente(std::string _nombre, int _numero)
    : cPersona(_nombre), numero(_numero) {}

cCliente::~cCliente() {}
std::string cCliente::getNombre() {
    return nombre;
}

int cCliente::getNumero() {
    return numero;
}


void cCliente::pagarCarrito() {
    float montoTotal = carrito.calcularTotal();
    // realizar el pago
    std::cout << "Cliente: " << getNombre() << std::endl;
    std::cout << "Número: " << numero << std::endl;
    std::cout << "Monto a pagar: $" << montoTotal << std::endl;

}
