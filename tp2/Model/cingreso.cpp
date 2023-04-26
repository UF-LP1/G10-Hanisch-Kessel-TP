#include "cingreso.h"

cingreso::cingreso(const string _ID):ID(_ID)
{
    this->fecha = NULL;
}
cingreso::~cingreso(){
    this->ID.empty();
    this->fecha = NULL;
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
