
#ifndef _CCOTILLON_H
#define _CCOTILLON_H

#include "cArticulos.h"


class cCotillon : public cArticulos {
private:
    std::string TipoCotillon;
    std::string Cartel;
public:
    cCotillon(std::string _nombre, float _precio,std::string _TipoCotillon, std::string _Cartel);
    ~cCotillon();

  
    std::string get_tipoC();
    std::string get_cartel();
    void mostrarInformacion();
   
};

#endif //_CCOTILLON_H