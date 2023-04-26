
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
    void set_Cartel(cartel Cartel);
    void get_tipoC();
    void get_Cartel();
};

#endif //_CCOTILLON_H