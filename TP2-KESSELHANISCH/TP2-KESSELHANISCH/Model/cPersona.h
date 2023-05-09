
#ifndef _CPERSONA_H
#define _CPERSONA_H
#include <string>
using namespace std;
class cPersona {
 
    
string get_nombre();

void set_nombre(string Nombre);
    
string get_apellido();

void set_apellido(string Apellido);
    
string get_dni();
    

void set_dni(const string DNI);
private: 
    string Nombre;
    string Apellido;
    const string DNI;
public:
    cPersona();
    ~cPersona();
    string get_nombre();

    void set_nombre(string Nombre);

    string get_apellido();

    void set_apellido(string Apellido);

    string get_dni();
};

#endif //_CPERSONA_H