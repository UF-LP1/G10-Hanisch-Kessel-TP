#include "cTrabajador.h"

void cTrabajador::set_desempenio(enum desempeņoT) {
    this->desempeņo = desempeņo;
}
desempeņoT cTrabajador::get_desempenio(){
    return this->desempeņo;
}

void cTrabajador::set_sueldo(float Sueldo) {
    this->Sueldo = Sueldo;
    return;
}
float cTrabajador::get_sueldo() {
    return this->Sueldo;
}