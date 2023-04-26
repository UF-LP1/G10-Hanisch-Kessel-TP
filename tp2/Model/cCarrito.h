#ifndef _CCARRITO_H
#define _CCARRITO_H
#include<string>
#include "cArticulos.h"
class cCarrito {
public: 
    cCarrito();
    ~cCarrito();

float get_total();
string get_productos();
int get_cant_prod();
private: 
    float Total;
    string Productos;
    unsigned int Cant_prod;
};

#endif //_CCARRITO_H