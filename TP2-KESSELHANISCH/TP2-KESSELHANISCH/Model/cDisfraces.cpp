

#include "cDisfraces.h"
cDisfraces::cDisfraces(){}

void cDisfraces::set_alquila(bool alquila) {
	this->alquila = alquila;
	return;
}
void cDisfraces::set_encargo(bool encargo) {
	this->encargo = encargo;
	return;
}
void cDisfraces::set_tamañoD(bool tamañoD) {
	this->tamañoD = tamañoD;
	return;
}

bool cDisfraces::get_alquila() {
	return this->alquila;
}
bool cDisfraces::get_encargo() {
	return this->encargo;
}
bool cDisfraces::get_tamañoD() {
	return this->tamañoD;
}