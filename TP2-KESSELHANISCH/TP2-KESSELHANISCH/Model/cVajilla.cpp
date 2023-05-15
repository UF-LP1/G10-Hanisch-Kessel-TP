#include "cVajilla.h"

cVajilla::cVajilla() {

}

void cVajilla::set_tipoV(enum TipoV) {
	this->TipoVasos = TipoVasos;
	return;
}
TipoV cVajilla::get_tipoV(){
	return this->TipoVasos;
}

void cVajilla::set_decoracionV(bool DecoracionV) {
	this->DecoracionV = DecoracionV;
	return;
}
bool cVajilla::get_decoracionV(){
	return this->DecoracionV;
}

void cVajilla::set_Colores(string colores) {
	this->colores = colores;
	return;
}
string cVajilla::get_Colores() {
	return this->colores;
}

void cVajilla::set_Favoritos(enum favoritos) {
	this->Favoritos = Favoritos;
	return;
}
favoritos cVajilla::get_Favoritos() {
	return this->Favoritos;
}

void cVajilla::set_Personalizado(bool personalizado) {
	this->personalizado = personalizado;
	return;
}
bool cVajilla::get_Personalizado() {
	return this->personalizado;
}