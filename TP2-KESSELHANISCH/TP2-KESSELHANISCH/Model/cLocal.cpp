
#include "cLocal.h"

cLocal::cLocal(){}
cLocal::cLocal(list<cArticulos*> Art) {}

string cLocal::RecibirLista(cArticulos* &Art){}


void cLocal::set_nombre_C(string nNombre_C){
    this->Nombre_C = nNombre_C;
    return;
}
string cLocal::get_nombre_c(){
    return this->Nombre_C;
}
void cLocal::set_ModoPago(enum modoPago nMetodo){
    this->metodo = nMetodo;
    return;
}
string cLocal::get_ModoPago(){
    return this->metodo;
}
void cLocal::set_horario_ap(time_t nhorario_ap){
    this->horario_ap = horario_ap;
    return;
}
string cLocal::get_horario_ap(){
    return this->horario_ap;
}
void cLocal::set_horario_fin(time_t nhorario_fin){
    this->horario_fin = nhorario_fin;
    return;
}
string cLocal::get_horario_fin(){
    return this->horario_fin;
}
void cLocal::set_direccion(string nDireccion) {
    this->Direccion = nDireccion;
    return;
}
string cLocal::get_direccion() {
    return this->Direccion;
}
void cLocal::AbrirLocal(time_t nhorario_ap) {

}

void cLocal::CerrarLocal(time_t nhorario_fin) {
 
}


