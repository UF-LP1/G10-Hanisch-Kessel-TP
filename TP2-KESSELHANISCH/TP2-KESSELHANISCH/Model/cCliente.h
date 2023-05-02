
#ifndef _CCLIENTE_H
#define _CCLIENTE_H
#include<string>
#include "cPersona.h"
#include "cModoPago.h"
#include <list>
#include "cArticulos.h"
#include "cLocal.h"

using namespace std;

class cCliente: public cPersona {
public: 
    cCliente(const int NroCliente);
    ~cCliente();

 void disfraz(bool Disfraz);
void Pagar(float Precio);
    
void NroFila();
    
void Impresion();
    

void AgregarCarrito(float Precio, unsigned int Cantidad, const string Nombre_art, const string Marca);
    

void QuitarCarrito(float Precio, unsigned int Cantidad, const string Nombre_art, const string Marca);
    
int get_nroCliente();
    
bool get_regalo();
    
bool get_disfraz();
    
cModoPago get_modoPago();
    
int get_dias_alquiler();
    
string get_correo();
    
bool get_imagen();
    

void set_nroCliente(const int NroCliente);
    

void set_regalo(bool Regalo);
void set_disfrraz(bool Disfraz);
void set_modoPago(cModoPago Modo_pago );
void set_dias_alquiler(unsigned int Dias_alquiler);
void set_correo(const string Correo);
void set_imagen(bool Imagen);

bool Buscar(string codigo);
private: 
    int NroCliente;
    bool Regalo;
    bool Disfraz;
    cModoPago Modo_pago;
    unsigned int Dias_alquiler;
    const string Correo;
    bool Imagen;
    list<cArticulos>Art;
};
}
#endif //_CCLIENTE_H