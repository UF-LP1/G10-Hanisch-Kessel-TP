#include "cPersona.h"

cPersona::cPersona(std::string _nombre)
    : nombre(_nombre) {}

cPersona::~cPersona() {}

std::string cPersona::getNombre() {
    return nombre;
}
