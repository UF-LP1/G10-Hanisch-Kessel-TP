
#include "cCotillon.h"
cCotillon::cCotillon(){}
void cCotillon::set_tipoC(TipoC TipoCotillon) {
	this->TipoCotillon = TipoCotillon;
	return;
}
void cCotillon::set_cartel(cartel Cartel) {
	this->Cartel = Cartel;
	return;
}
TipoC cCotillon::get_tipoC() {
	return this->TipoCotillon;
}
cartel cCotillon::get_cartel() {
	return this->Cartel;
}



