#include <iostream>
#include "..\Model\cArticulos.h"
#include "..\Model\cLocal.h"
#include "..\Model\cCliente.h"
#include "..\Model\cAlquiler.h"
#include "..\Model\cCarrito.h"
#include "..\Model\cCotillon.h"
#include "..\Model\cPersona.h"
#include "..\Model\cModoPago.h"
#include <list>

using namespace std;

int main() {
	list <cArticulos*> Art;
	cArticulos cVajilla("A100",10,10.1,"plato","tuscubiertos");
	cArticulos cDisfraces("A200", 30, 10.2, "vestido", "disfrazate");
	cArticulos cGlobos("A300", 707, 50.6, "globo rojo", "inflalo");
	cArticulos cVelas("A400", 990, 108.9, "de cumpleanios", "tukumple");
	cArticulos cCotillon("A500",300, 79.0, "vengala", "festejalo");
	cArticulos cReposteria("A600", 800, 349.8, "moldes", "querico");
	cArticulos cGolosinas("A700", 450, 670.8, "gomitas", "delicioso");

	Art.push_back(cVajilla);
	Art.push_back(cDisfraces);
	Art.push_back(cVelas);
	Art.push_back(cGlobos);
	Art.push_back(cCotillon);
	Art.push_back(cReposteria);
	Art.push_back(cGolosinas);
	cLocal local(Art);
	cCliente Buscar(Codigo);

}