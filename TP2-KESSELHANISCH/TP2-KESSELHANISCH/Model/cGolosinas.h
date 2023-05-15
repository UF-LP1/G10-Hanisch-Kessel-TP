
#ifndef _CGOLOSINAS_H
#define _CGOLOSINAS_H

#include "cArticulos.h"


class cGolosinas: public cArticulos {
private: 
    string tipoGO;
    float gramosGO;
public:
    cGolosinas();
    ~cGolosinas();

    void set_TipoGO(string tipoGO); 
    void set_GramosGO(float gramosGO);

    string get_TipoGO();
    float get_GramosGO();

};

#endif //_CGOLOSINAS_H