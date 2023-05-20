#include "cEncargado.h"
#include <iostream>

using namespace std;
cEncargado::cEncargado(std::string _nombre)
    : cTrabajador(_nombre) {}

cEncargado::~cEncargado() {}

void cEncargado::cobrar() {
    std::cout << "Encargado " << nombre << " cobrando los productos." << std::endl;
}

bool cEncargado::chequearMonto( float pago, float total) {
    if (pago <= 0 || (pago < total)) {
        return false;
    }
    else 
    {
        return true;
    }
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
float cEncargado::vuelto(float pago, float total) {
    float vuelto;
   
    return pago-total;
  
}