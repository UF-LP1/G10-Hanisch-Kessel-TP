#include "cTrabajador.h"

void cTrabajador::set_desempenio(enum desempe�oT) {
    this->desempe�o = desempe�o;
}
desempe�oT cTrabajador::get_desempenio(){
    return this->desempe�o;
}

void cTrabajador::set_sueldo(float Sueldo) {
    this->Sueldo = Sueldo;
    return;
}
float cTrabajador::get_sueldo() {
    return this->Sueldo;
}