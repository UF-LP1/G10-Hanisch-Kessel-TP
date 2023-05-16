#include "cEncargado.h"
#include <iostream>

cEncargado::cEncargado(std::string _nombre)
    : cTrabajador(_nombre) {}

cEncargado::~cEncargado() {}

void cEncargado::cobrar() {
    std::cout << "Encargado " << nombre << " cobrando los productos." << std::endl;
}

void cEncargado::envolverRegalo() {
    std::cout << "Encargado " << nombre << " envolviendo regalo." << std::endl;
}
void cEncargado::ticket_mail() {
    std::cout << "Encargado " << nombre << " enviando ticket al mail" << std::endl;
}
void cEncargado::ticket() {
    std::cout << "Encargado " << nombre << " imprimiendo ticket " << std::endl;
}