#include "cCarrito.h"
#include "cArticulos.h"


cCarrito::cCarrito() {}

cCarrito::~cCarrito() {}

void cCarrito::agregarArticuloCarrito(cArticulos* articulo) {
    // agregar el articulo a la lista
    listaArticulos.push_back(articulo);
    }

void cCarrito::quitarArticulo(cArticulos* articulo) {
    // Buscar y eliminar el artículo de la lista
    for (std::vector<cArticulos*>::iterator it = listaArticulos.begin(); it != listaArticulos.end(); ++it) {
        if (*it == articulo) {
            listaArticulos.erase(it);
            break;
        }
    }
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

