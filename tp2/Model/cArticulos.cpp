#include "cArticulos.h"

cArticulos::cArticulos(string codigo, unsigned int cantidad, float precio, int stock, const string nombreart, const string marca){
    Codigo = codigo;
    Cantidad = cantidad;
    Stock = stock;
    Nombre_art = nombreart;
    Marca = marca; 
}
string cArticulos::get_codigo() {
    return "";
}


void cArticulos::set_codigo(const string Codigo) {

}


int cArticulos::get_cantidad() {
    return 0;
}


void cArticulos::set_cantidad(unsigned int Cantidad) {
    return;
}



float cArticulos::get_precio() {
    return 0.0;
}


void cArticulos::set_precio(float Precio) {
    return;
}

int cArticulos::get_stock() {
    return 0;
}


void cArticulos::set_stock(int Stock) {
    return;
}


string cArticulos::get_nombre_art() {
    return "";
}


void cArticulos::set_nombre_art(const string Nombre_art) {
    return;
}


string cArticulos::get_marca() {
    return "";
}


void cArticulos::set_marca(const string Marca) {
    return;
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