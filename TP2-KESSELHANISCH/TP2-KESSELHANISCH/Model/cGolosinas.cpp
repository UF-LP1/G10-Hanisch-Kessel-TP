
#include "cGolosinas.h"

cGolosinas::cGolosinas() {

}

void cGolosinas::set_TipoGO(string tipoGO) {
	this->tipoGO = tipoGO;
	return;
}

void cGolosinas::set_GramosGO(float gramosGO) {
	this->gramosGO = gramosGO;
	return;
}

string cGolosinas::get_TipoGO(){
	return this->tipoGO;
}
float cGolosinas::get_GramosGO() {
	return this->gramosGO;
}