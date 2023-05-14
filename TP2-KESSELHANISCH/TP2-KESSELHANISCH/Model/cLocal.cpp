
#include "cLocal.h"

cLocal::cLocal(){}
cLocal::cLocal(list<cArticulos*> Art) {}

string cLocal::RecibirLista(cArticulos* &Art);
void cLocal::set_nombre_C(string Nombre_C){}
string cLocal::get_nombre_c(){}
void cLocal::set_ModoPago(enum modoPago){}
string cLocal::get_ModoPago(){}
void cLocal::set_horario_ap(time_t horario_ap){}
string cLocal::get_horario_ap(){}
void cLocal::set_horario_fin(time_t horario_fin){}
string cLocal::get_horario_fin(){}
void cLocal::AbrirLocal(time_t horario_ap) {

}


void cLocal::CerrarLocal(time_t horario_fin) {
    ...;
}


string cLocal::get_direccion() {
    return "";
}


void cLocal::set_direccion(string Direccion) {

}

