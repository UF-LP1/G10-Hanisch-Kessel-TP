

#include "cCarrito.h"

cCarrito::cCarrito(){}

float cCarrito::get_total() {
    return this->Total;
}

string cCarrito::get_productos() {
    return this->Productos;
}

int cCarrito::get_cant_prod() {
    return this->Cant_prod;
}
void cCarrito::set_total(float Total) {
    this->Total = Total;
    return;
}
void cCarrito::set_productos(string Productos) {
    this->Productos = Productos;
    return;
}
void cCarrito::set_cant_prod(unsigned int Cant_prod) {
    this->Cant_prod = Cant_prod;
}
