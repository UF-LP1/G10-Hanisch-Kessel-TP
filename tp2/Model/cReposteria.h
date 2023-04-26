
#ifndef _CREPOSTERIA_H
#define _CREPOSTERIA_H

#include "cArticulos.h"


class cReposteria: public cArticulos {
private: 
    enum TipoMolde TipoDeMolde;
    enum DecoracionC DecoracionRep;

public:
    cReposteria();
    ~cReposteria();
    
    void set_tipomolde(enum TipoMolde);
    void set_decoracionC(enum DecoracionC);

    void get_tipomolde();
    void get_decoracionC();
};

#endif //_CREPOSTERIA_H