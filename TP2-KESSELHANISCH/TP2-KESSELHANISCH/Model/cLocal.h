
#ifndef _CLOCAL_H
#define _CLOCAL_H
#include<string>
#include<ctime>
#include <list>
#include "cArticulos.h"
using namespace std;
class cLocal {
public: 
    cLocal();
    ~cLocal();
    cLocal(list<cArticulos*> Art);
    ~cLocal();
  string  RecibirLista(cArticulos* &Art);

void AbrirLocal(time_t nhorario_ap);
    

void CerrarLocal(time_t nhorario_fin);
    

void set_direccion(string nDireccion);
string get_direccion();
void set_nombre_C(string nNombre_C);
string get_nombre_c();
void set_ModoPago(enum modoPago nMetodo);
string get_ModoPago();
void set_horario_ap(time_t nhorario_ap);
string get_horario_ap();
void set_horario_fin(time_t nhorario_fin);
string get_horario_fin();
private: 
    string Direccion;
    string Nombre_C;
    enum modoPago metodo;
    time_t horario_ap;
    time_t horario_fin;
    list<cArticulos>Art;
   

};


#endif //_CLOCAL_H