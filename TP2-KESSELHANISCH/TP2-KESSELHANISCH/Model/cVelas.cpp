#include "cVelas.h"

cVelas::cVelas(){
	this->colorV = "";
	this->tamañoV = "";
}

void cVelas::set_ColorV(string ncolorV) {
	this->colorV = ncolorV;
	return;
}
string cVelas::get_ColorV() {
	return this->colorV;
}

void cVelas::set_TamañoV(string tamañoV) {
	this->tamañoV = tamañoV;
	return;
}
string cVelas::get_TamañoV() {
	return this->tamañoV;
}
