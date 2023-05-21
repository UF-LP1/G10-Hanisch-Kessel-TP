#include "cCarrito.h"
#include "cArticulos.h"


cCarrito::cCarrito() {}

cCarrito::~cCarrito() {}


bool cCarrito::quitarArticulo(std::string artiQui, std::vector<cArticulos*> listaArticulos) {
    // Buscar y eliminar el artículo de la lista
    for (std::vector<cArticulos*>::iterator it = listaArticulos.begin(); it != listaArticulos.end(); ++it) {
        if ((*it)->getNombre() == artiQui) {
            delete* it;
            listaArticulos.erase(it);
            return true;
        }
    }
    return false;
}
bool cCarrito::Buscar(std::vector<cArticulos*> articulos, std::string artiAgg, std::vector<cArticulos*> listaArticulos) {
    std::vector<cArticulos*>::iterator arti = listaArticulos.begin();
    int cont = 0;
    while (arti != listaArticulos.end()) {
        if ((*arti)->getNombre() == artiAgg) {
            listaArticulos.push_back(articulos[cont]); // Agrega el objeto, no el vector completo
            return true;
        }
        else {
            return false; // Si no se encuentra el objeto
        }
    }
        cont++;
        arti++;
    }
   
void cCarrito::mostrarCarrito() {
    std::cout << "Carrito de compras:\n";
    std::cout << "-------------------\n";

    if (listaArticulos.empty()) {
        std::cout << "El carrito está vacío.\n";
    }
    else {
        for (const auto& articulo : listaArticulos) {
            articulo->mostrarInformacion();
            std::cout << "-------------------\n";
        }
    }
}

float cCarrito::calcularTotal() {
    float total = 0.0;
    for (cArticulos* articulo : listaArticulos) {
        total += articulo->getPrecio();
    }
    return total;
}

