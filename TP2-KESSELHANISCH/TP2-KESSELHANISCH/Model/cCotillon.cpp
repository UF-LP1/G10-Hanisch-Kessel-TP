#include "cCotillon.h"
#include <iostream>
cCotillon::cCotillon(std::string nombre, float precio, std:: string _TipoCotillon, std::string _Cartel):cArticulos( nombre, precio ){
	
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
	std::cout << "Stock: " << getStock() << std::endl;
	std::cout << "Tipo Cotillon: " << get_tipoC() << std::endl;
	std::cout << "Stock: " << get_cartel() << std::endl;
}
cCotillon::~cCotillon(){}


