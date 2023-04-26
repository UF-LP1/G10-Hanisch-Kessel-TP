

#define null
#include "cCliente.h"


cCliente::cCliente(int NroCliente){}

void cCliente::disfraz(bool Disfraz) {
    return ;
}

void cCliente::Pagar(float Precio) {
    return;
}

void cCliente::NroFila() {
    return;
}

void cCliente::Impresion() {
    return null;
}
void cCliente::AgregarCarrito(float Precio, unsigned int Cantidad, const string Nombre_art, const string Marca) {}

void cCliente::QuitarCarrito(float Precio, unsigned int Cantidad, const string Nombre_art, const string Marca) {}

 int cCliente::get_nroCliente() {
    return 0;
 }

bool cCliente::get_regalo() {
    return false;
}

bool cCliente::get_disfraz() {
    return false;
}

cModoPago cCliente::get_modoPago() {
    return null;
}

int cCliente::get_dias_alquiler() {
    return 0;
}

string cCliente::get_correo() {
    return "";
}

bool cCliente::get_imagen() {
    return false;
}

void cCliente::set_nroCliente( int NroCliente) {
    return;
}

void cCliente::set_regalo(bool Regalo) {
    return;
}

void cCliente::set_disfrraz(bool Disfraz) {
    return;
}

void cCliente::set_modoPago(cModoPago Modo_pago ) {
    return;
}

void cCliente::set_dias_alquiler(unsigned int Dias_alquiler) {
    return;
}

void cCliente::set_correo(const string Correo) {
    return;
}

void cCliente::set_imagen(bool Imagen) {
    return;
}

bool cCliente::Buscar(string Codigo) {
    list<cArticulos>::iterator arti = Art.begin();
    int cont = 0;
    while (arti != Art.end()) {
        if (arti->get_codigo() == Codigo) {
            return true;
        }
        cont++;
        arti._Ptr = arti._Ptr->_Next;
    }
    return false;

