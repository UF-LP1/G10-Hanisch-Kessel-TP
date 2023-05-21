#pragma once
#include "cArticulos.h"

class cReposteria : public cArticulos {
private:
   
public:
    cReposteria(std::string _nombre, float _precio, int _stock);
    ~cReposteria();
    void mostrarInformacion();
  
   
};
