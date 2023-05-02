
#ifndef _CEMPLEADO_H
#define _CEMPLEADO_H

#include "cTrabajador.h"


class cEmpleado: public cTrabajador {
public: 
    cEmpleado();
    ~cEmpleado();

void AtenderCliente(int NroCliente);
};

#endif //_CEMPLEADO_H