#include "cArticulos.h"

cArticulos::cArticulos(const string codigo, unsigned int cantidad, float precio, int stock, const string nombre_art, const string marca){
    Codigo = codigo;
    Cantidad = cantidad;
    Stock = stock;
    Nombre_art = nombre_art;
    Marca = marca; 
    Precio = precio;
}

void cArticulos::set_codigo(const string Codigo) {

}
string cArticulos::get_codigo() {
    return ;
}

void cArticulos::set_cantidad(unsigned int Cantidad) {
    return;
}

int cArticulos::get_cantidad() {
    return 0;
}

void cArticulos::set_precio(float Precio) {
    return;
}

float cArticulos::get_precio() {
    return 0.0;
}

void cArticulos::set_stock(int Stock) {
    return;
}
int cArticulos::get_stock() {
    return 0;
}

void cArticulos::set_nombre_art(const string Nombre_art) {
    return;
}

string cArticulos::get_nombre_art() {
    return "";
}

void cArticulos::set_marca(const string Marca) {
    return;
}

string cArticulos::get_marca() {
    return "";
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