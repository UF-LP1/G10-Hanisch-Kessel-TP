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

string get_codigo();
  
void set_cantidad(unsigned int nCantidad);
int get_cantidad();

void set_precio(float nPrecio);
float get_precio();
    
void set_stock(int nStock);
int get_stock();

string get_nombre_art();
    
string get_marca();

float Añadir_articulo();
    
float Eliminar_articulo();
    
float Cambiar_articulo();

};

#endif //_CARTICULOS_H