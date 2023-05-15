
#ifndef _CCOTILLON_H
#define _CCOTILLON_H

#include "cArticulos.h"


class cCotillon: public cArticulos {
private: 
    enum TipoC TipoCotillon;
    enum cartel Cartel;
public:
    cCotillon();
    ~cCotillon();

    void set_tipoC(TipoC TipoCotillon);
    TipoC get_tipoC();

    void set_cartel(cartel Cartel);
    cartel get_cartel();
};

#endif //_CCOTILLON_H