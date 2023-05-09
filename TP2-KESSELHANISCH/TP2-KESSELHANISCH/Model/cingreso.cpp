#include "cingreso.h"

cingreso::cingreso(time_t fecha_, const string _ID)
{
    this->fecha = fecha_ ;
    this->ID = _ID;
}
cingreso::~cingreso(){
    
}



void cingreso::set_fecha(const time_t fecha) {
    this->fecha = fecha;
}

const time_t cingreso::get_fecha() {
    return this->fecha;
}

const string cingreso::get_ID() {
    return ID;
}
