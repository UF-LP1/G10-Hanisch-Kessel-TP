#pragma once
#include "cTrabajador.h"

class cEncargado : public cTrabajador {
public:
    cEncargado(std::string _nombre);
    ~cEncargado();
    void cobrar();
    void envolverRegalo();
    void ticket_mail();
    void ticket();
};
