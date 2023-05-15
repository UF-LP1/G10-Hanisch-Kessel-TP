#include "cTrabajador.h"

void cTrabajador::set_desempenio(enum desempeñoT) {
    this->desempeño = desempeño;
}
desempeñoT cTrabajador::get_desempenio(){
    return this->desempeño;
}

void cTrabajador::set_sueldo(float Sueldo) {
    this->Sueldo = Sueldo;
    return;
}
float cTrabajador::get_sueldo() {
    return this->Sueldo;
}