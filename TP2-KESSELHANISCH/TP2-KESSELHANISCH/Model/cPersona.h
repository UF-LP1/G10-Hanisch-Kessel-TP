
#ifndef _CPERSONA_H
#define _CPERSONA_H
#include <string>
using namespace std;
class cPersona {
    
private: 
    string Nombre;
    string Apellido;
    const string DNI;
public:
    cPersona();
    ~cPersona();

    void set_nombre(string Nombre);
    string get_nombre();

    void set_apellido(string Apellido);
    string get_apellido();

    string get_dni();
  
};

#endif //_CPERSONA_H