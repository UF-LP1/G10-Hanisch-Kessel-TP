#include<string>
#ifndef _CARTICULOS_H
#define _CARTICULOS_H
using namespace std;
class cArticulos {
protected:
    const string Codigo;
    unsigned int Cantidad;
    float Precio;
    int Stock;
    const string Nombre_art;
    const string Marca;
public: 
    cArticulos(string codigo, unsigned int cantidad, float precio, int stock, const string nombre_art, const string marca);
    ~cArticulos();

string get_codigo();
    

void set_codigo(const string Codigo);
    
int get_cantidad();
    

void set_cantidad(unsigned int Cantidad);
    
float get_precio();
    

void set_precio(float Precio);
    
int get_stock();
    

void set_stock(int Stock);
    
string get_nombre_art();
    

void set_nombre_art(const string Nombre_art);
    
string get_marca();
    

void set_marca(const string Marca);
    
float Añadir_articulo();
    
float Eliminar_articulo();
    
float Cambiar_articulo();

};

#endif //_CARTICULOS_H