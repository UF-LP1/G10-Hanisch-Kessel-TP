
#ifndef _CVAJILLA_H
#define _CVAJILLA_H

#include "cArticulos.h"


class cVajilla : public cArticulos {
private:
    enum TipoV TipoVasos;
    bool DecoracionV;
    string colores;
    enum favoritos Favoritos;
    bool personalizado;
public:
    cVajilla();
    ~cVajilla();

    void set_tipoV(enum TipoV);
    TipoV get_tipoV();

    void set_decoracionV(bool DecoracionV);
    bool get_decoracionV();

    void set_Colores(string colores);
    string get_Colores();

    void set_Favoritos(enum favoritos);
    favoritos get_Favoritos();

    void set_Personalizado(bool personalizado);
    bool get_Personalizado();
};

#endif //_CVAJILLA_H