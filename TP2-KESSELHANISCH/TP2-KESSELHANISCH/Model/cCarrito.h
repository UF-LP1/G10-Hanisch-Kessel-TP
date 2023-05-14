#ifndef _CCARRITO_H
#define _CCARRITO_H
#include<string>
#include "cArticulos.h"
class cCarrito {
public:
    cCarrito();
    ~cCarrito();

    void set_total(float Total);
    float get_total();

    void set_productos(string Productos);
    string get_productos();

    void set_cant_prod(unsigned int Cant_prod);
    int get_cant_prod();
   
private: 
    float Total;
    string Productos;
    unsigned int Cant_prod;
};

#endif //_CCARRITO_H