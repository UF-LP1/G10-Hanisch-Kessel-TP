#include "cPersona.h"
cPersona::cPersona(){}

string cPersona::get_nombre() {
    return "";
}

void cPersona::set_nombre(string Nombre) {
    this->Nombre = Nombre;
    return;
}

string cPersona::get_apellido() {
    return this->Nombre;
}

void cPersona::set_apellido(string Apellido) {
    this->Apellido = Apellido;
    return;
}

string cPersona::get_dni() {
    return this->Apellido;
}

string cPersona::get_dni() {
    return this->DNI;
}