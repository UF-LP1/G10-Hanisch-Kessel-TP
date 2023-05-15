

#define null
#include "cCliente.h"


cCliente::cCliente(const int NroCliente){}

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
    return this->NroCliente;
 }

bool cCliente::get_regalo() {
    return this->Regalo;
}

bool cCliente::get_disfraz() {
    return this->Disfraz;
}

cModoPago cCliente::get_modoPago() {
    return this->Modo_pago;
}

int cCliente::get_dias_alquiler() {
    return this->Dias_alquiler;
}

string cCliente::get_correo() {
    return this->Correo;
}

bool cCliente::get_imagen() {
    return this->Imagen;
}

void cCliente::set_nroCliente( int NroCliente) {
    this->NroCliente = NroCliente;
    return;
}

void cCliente::set_regalo(bool Regalo) {
    this->Regalo = Regalo;
    return;
}

void cCliente::set_disfraz(bool Disfraz) {
    this->Disfraz = Disfraz;
    return;
}

void cCliente::set_modoPago(cModoPago Modo_pago ) {
    this->Modo_pago = Modo_pago;
    return;
}

void cCliente::set_dias_alquiler(unsigned int Dias_alquiler) {
    this->Dias_alquiler = Dias_alquiler;
    return;
}

void cCliente::set_imagen(bool Imagen) {
    this->Imagen = Imagen;
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

