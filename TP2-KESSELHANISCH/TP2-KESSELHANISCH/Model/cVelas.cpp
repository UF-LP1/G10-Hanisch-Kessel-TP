#include "cVelas.h"

cVelas::cVelas(){
	this->colorV = "";
	this->tama�oV = "";
}

void cVelas::set_ColorV(string ncolorV) {
	this->colorV = ncolorV;
	return;
}
string cVelas::get_ColorV() {
	return this->colorV;
}

void cVelas::set_Tama�oV(string tama�oV) {
	this->tama�oV = tama�oV;
	return;
}
string cVelas::get_Tama�oV() {
	return this->tama�oV;
}
