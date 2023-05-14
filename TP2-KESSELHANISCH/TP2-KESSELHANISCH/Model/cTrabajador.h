
#ifndef _CTRABAJADOR_H
#define _CTRABAJADOR_H
#include <iostream>

#include "cPersona.h"


class cTrabajador: public cPersona {
private: 
    float Sueldo;
    enum desempeñoT desempeño;
public:
    cTrabajador();
    ~cTrabajador();

    void set_sueldo(float Sueldo);
    float get_sueldo();

    void set_desempenio(enum desempeñoT);
    desempeñoT get_desempenio();
};

#endif //_CTRABAJADOR_H