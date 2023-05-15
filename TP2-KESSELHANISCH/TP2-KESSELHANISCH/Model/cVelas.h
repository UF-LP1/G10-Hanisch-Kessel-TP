
#ifndef _CVELAS_H
#define _CVELAS_H

#include "cArticulos.h"


class cVelas: public cArticulos {
private: 
    string colorV;
    string tamañoV;
public:
    cVelas();
    ~cVelas();

    void set_ColorV(string ncolorV);
    string get_ColorV();

    void set_TamañoV(string tamañoV);
    string get_TamañoV();
};

#endif 