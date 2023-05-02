
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
    void set_decoracionV(bool DecoracionV);
    void set_Colores(string colores);
    void set_Favoritos(enum favoritos);
    void set_Personalizado(bool personalizado);

    enum get_tipoV();
    bool get_decoracionV();
    string get_Colores();
    enum get_Favoritos();
    bool get_Personalizado();
};

#endif //_CVAJILLA_H