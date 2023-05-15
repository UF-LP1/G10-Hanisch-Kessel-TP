#include "cArticulos.h"

cArticulos::cArticulos(const string ncodigo, unsigned int ncantidad, float nprecio, int nstock, const string nnombre_art, const string marca){
    Cantidad = ncantidad;
    Stock = nstock;
    Precio = nprecio;
}

string cArticulos::get_codigo() {
    return this->Codigo ;
}

void cArticulos::set_cantidad(unsigned int nCantidad) {
     this->Cantidad=nCantidad;
     return;
}

int cArticulos::get_cantidad() {
    return this->Cantidad;
}

void cArticulos::set_precio(float nPrecio) {
     this->Precio=nPrecio;
     return;
}

float cArticulos::get_precio() {
    return this->Precio;
}

void cArticulos::set_stock(int nStock) {
    this->Stock = nStock;
    return;
}
int cArticulos::get_stock() {
    return this->Stock;
}

string cArticulos::get_nombre_art() {
    return this->Nombre_art;
}

string cArticulos::get_marca() {
    return this->Marca;
}

float cArticulos::Añadir_articulo() {
    return 0.0;
}

float cArticulos::Eliminar_articulo() {
    return 0.0;
}

float cArticulos::Cambiar_articulo() {
    return NULL;
}