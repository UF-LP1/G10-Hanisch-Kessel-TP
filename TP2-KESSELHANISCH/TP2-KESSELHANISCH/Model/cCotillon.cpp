#include "cCotillon.h"
#include <iostream>

cCotillon::cCotillon(std::string nombre,  float precio, int _stock, std:: string _TipoCotillon, std::string _Cartel ):cArticulos( nombre, precio,stock ),TipoCotillon(_TipoCotillon), Cartel(_Cartel){

}

std::string cCotillon::get_tipoC() {
	return TipoCotillon;
}
std::string cCotillon::get_cartel() {
	return Cartel;
}

void cCotillon::mostrarInformacion() {
	std::cout << "Nombre: " << getNombre() << std::endl;
	std::cout << "Precio: $" << getPrecio() << std::endl;
	std::cout << "Tipo Cotillon: " << get_tipoC() << std::endl;
	std::cout << "Cartel: " << get_cartel() << std::endl;
}
cCotillon::~cCotillon() { stock--; }


