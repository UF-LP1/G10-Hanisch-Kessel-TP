#include "cReposteria.h"

cReposteria::cReposteria(){}

void cReposteria::set_tipomolde(enum TipoMolde){
	this->TipoDeMolde = TipoDeMolde;
	return;
}
TipoMolde cReposteria::get_tipomolde(){
	return this->TipoDeMolde;
}

void cReposteria::set_decoracionC(enum DecoracionC){
	this->DecoracionRep = DecoracionRep;
	return;
}
DecoracionC cReposteria::get_decoracionC() {
	return this->DecoracionRep;
}