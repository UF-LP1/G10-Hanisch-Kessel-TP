
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
  
void set_nroCliente(const int NroCliente);
int get_nroCliente();

void set_regalo(bool Regalo);
bool get_regalo();

void set_disfraz(bool Disfraz);
bool get_disfraz();

void set_modoPago(cModoPago Modo_pago );
cModoPago get_modoPago();

void set_dias_alquiler(unsigned int Dias_alquiler);
int get_dias_alquiler();

void set_correo(const string Correo);
string get_correo();

void set_imagen(bool Imagen);
bool get_imagen();

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
#endif //_CCLIENTE_H