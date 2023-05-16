#pragma once
#include <string>

class cPersona {
protected:
    std::string nombre;

public:
    cPersona(std::string _nombre);
    virtual ~cPersona();
    std::string getNombre();
};
