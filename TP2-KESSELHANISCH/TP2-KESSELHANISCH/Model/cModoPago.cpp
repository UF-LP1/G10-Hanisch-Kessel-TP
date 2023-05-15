#include "cModoPago.h"

void cModoPago::set_modoPago(enum metodop Metodo) {
    this->Metodo = Metodo;
    return;
}

metodop cModoPago::get_modoPago() {
    return this->Metodo;
}