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
    void set_total(float Total);
    void set_productos(string Productos);
    void set_cant_prod(unsigned int Cant_prod);
private: 
    float Total;
    string Productos;
    unsigned int Cant_prod;
};

#endif //_CCARRITO_H