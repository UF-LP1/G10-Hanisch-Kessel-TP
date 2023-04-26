
#ifndef _CGLOBOS_H
#define _CGLOBOS_H

#include "cVelas.h"
#include "cArticulos.h"


class cGlobos: public cVelas, public cArticulos {
private: 
    string colorG;
    string tamañoG;
public:
    cGlobos();
    ~cGlobos();

    void set_ColorG(string colorG);
    void set_TamañoG(string tamañoG);

    string get_ColorG();
    string get_TamañoG();

};

#endif //_CGLOBOS_H