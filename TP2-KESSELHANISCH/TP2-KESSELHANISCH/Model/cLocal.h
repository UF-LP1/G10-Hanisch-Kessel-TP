
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
  string  RecibirLista(cArticulos* &Art);
void AbrirLocal(time_t horario_ap);
    

void CerrarLocal(time_t horario_fin);
    

void set_direccion(string Direccion);
string get_direccion();
void set_nombre_C(string Nombre_C);
string get_nombre_c();
void set_ModoPago(enum modoPago);
string get_ModoPago();
void set_horario_ap(time_t horario_ap);
string get_horario_ap();
void set_horario_fin(time_t horario_fin);
string get_horario_fin();
private: 
    string Direccion;
    string Nombre_C;
    enum modoPago;
    time_t horario_ap;
    time_t horario_fin;
    list<cArticulos>Art;
   

};


#endif //_CLOCAL_H