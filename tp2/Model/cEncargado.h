

#ifndef _CENCARGADO_H
#define _CENCARGADO_H

#include "cTrabajador.h"


class cEncargado: public cTrabajador {
public: 
    cEncargado();
    ~cEncargado();

void CobrarCliente(float total);
    
void EnvolverRegalo();
    
void Ticket();
};

#endif //_CENCARGADO_H