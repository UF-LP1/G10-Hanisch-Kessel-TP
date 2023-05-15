
#ifndef _CDISFRACES_H
#define _CDISFRACES_H

#include "cArticulos.h"


class cDisfraces: public cArticulos {
private: 
    bool alquila;
    bool encargo;
    bool tamañoD;
public: 
    cDisfraces();
    ~cDisfraces();
    void set_alquila(bool alquila);
    void set_encargo(bool encargo);
    void set_tamañoD(bool tamañoD);

    bool get_alquila();
    bool get_encargo();
    bool get_tamañoD();

};

#endif //_CDISFRACES_H