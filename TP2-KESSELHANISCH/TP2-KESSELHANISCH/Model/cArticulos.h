#include<string>
#ifndef _CARTICULOS_H
#define _CARTICULOS_H
using namespace std;
class cArticulos {
private:
    const string Codigo;
    unsigned int Cantidad;
    float Precio;
    int Stock;
    const string Nombre_art;
    const string Marca;
public: 
    cArticulos(const string codigo, unsigned int cantidad, float precio, int stock, const string nombre_art, const string marca);
    ~cArticulos();

void set_codigo(const string Codigo);
string get_codigo();
  
void set_cantidad(unsigned int Cantidad);
int get_cantidad();

void set_precio(float Precio);
float get_precio();
    
void set_stock(int Stock);
int get_stock();

void set_nombre_art(const string Nombre_art);
string get_nombre_art();
    
void set_marca(const string Marca);
string get_marca();

float Añadir_articulo();
    
float Eliminar_articulo();
    
float Cambiar_articulo();

};

#endif //_CARTICULOS_H