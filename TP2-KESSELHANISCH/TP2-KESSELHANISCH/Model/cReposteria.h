
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
    TipoMolde get_tipomolde();

    void set_decoracionC(enum DecoracionC);
    DecoracionC get_decoracionC();
};

#endif //_CREPOSTERIA_H