#include <iostream>
#include <vector>
#include <cctype>
#include "..\Model\cPersona.h"
#include "..\Model\cCliente.h"
#include "..\Model\cEncargado.h"
#include "..\Model\cEmpleado.h"
#include "..\Model\cArticulos.h"
#include "..\Model\cCarrito.h"
#include "..\Model\cLocal.h"
#include "..\Model\cGolosinas.h"
#include "..\Model\cVelas.h"
#include "..\Model\cGlobos.h"

int main() {

    // Crear local
    cLocal cotillon;

    // Agregar art�culos al inventario del cotill�n
    cotillon.agregarArticulo(new cVelas("Velas cumplea�os", 10, 15));
    cotillon.agregarArticulo(new cGolosinas("Bolsa de golosinas", 30.5, "Chocolates"));
    cotillon.agregarArticulo(new cGlobos("Globos fiesta", 50, "Rojos"));


    // Mostrar inventario del cotill�n
    std::cout << "Inventario del Cotill�n:\n";
    cotillon.mostrarInventario();
    std::cout << "\n";

    // Crear clientes
    cCliente cliente1("Juan Fernando Quintero", 1);
    cCliente cliente2("Maria Becerra", 2);

    // Clientes solicitan un n�mero de papel
    cliente1.getNumero();
    cliente2.getNumero();

    // Crear encargado
    cEmpleado empleado("Roman Riquelme");

    // Encargado llama a los clientes seg�n su n�mero
    empleado.llamarCliente(cliente1);
    empleado.llamarCliente(cliente2);

    // Clientes realizan compras
    cCarrito carrito1;
    cCarrito carrito2;

    // Cliente 1 agrega art�culos al carrito
    try {
        carrito1.agregarArticuloCarrito(new cVelas("Velas cumplea�os", 10, 15));
        carrito1.agregarArticuloCarrito(new cGolosinas("Bolsa de golosinas", 30.5, "Chocolates"));
        carrito1.agregarArticuloCarrito(new cGolosinas("Caramelos surtidos", 9.12, "Tutifruti"));
    }
    catch (const std::exception& e) {
        std::cout << "Error: " << e.what() << "\n";
    }

    // Cliente 2 agrega art�culos al carrito
    try {
        carrito2.agregarArticuloCarrito(new cGlobos("Globos fiesta", 50, "Rojos"));
        carrito2.agregarArticuloCarrito(new cVelas("Velas estrella", 2.03, 5));
    }
    catch (const std::exception& e) {
        std::cout << "Error: " << e.what() << "\n";
    }

    // Mostrar carritos de compras de los clientes
    std::cout << "Carrito de compras de " << cliente1.getNombre() << ":\n";
    carrito1.mostrarCarrito();
    std::cout << "\n";

    std::cout << "Carrito de compras de " << cliente2.getNombre() << ":\n";
    carrito2.mostrarCarrito();
    std::cout << "\n";

    // Calcular monto total de los carritos
    double montoTotal1 = carrito1.calcularTotal();
    double montoTotal2 = carrito2.calcularTotal();

    std::cout << "Monto total de " << cliente1.getNombre() << ": $" << montoTotal1 << "\n";
    std::cout << "Monto total de " << cliente2.getNombre() << ": $" << montoTotal2 << "\n";

    //Crear Encargado
    cEncargado encargado("Rodolfo D'onofrio");
    encargado.cobrar();
    std::string rta, ticket;
    //Preguntas sobre envolver y ticket
    do {
        std::cout << "�Desea envolver la compra?: ";
        std::cin >> rta;
        if (rta == "SI" || rta == "Si" || rta == "si") {
            encargado.envolverRegalo();
            break;
        }
        else if (rta == "NO" || rta == "No" || rta == "no") {
            std::cout << "Se entrega sin envolver" << "\n";
            break;
        }
        else {
            std::cout << "Ingrese SI o No" << "\n" << "\n";

        }
    } while (rta != "si" || rta != "no" || rta != "Si" || rta != "No " || rta != "SI" || rta != "NO");
    do {
        std::cout << "�Desea el ticket de su compra impreso o al mail?: ";
        std::cin >> ticket;
        for (char& c : ticket) {
            c = std::toupper(c);
        }
        if (ticket == "IMPRESO") {
            encargado.ticket();
            break;
        }
        else if (ticket == "MAIL") {
            encargado.ticket_mail();
            break;
        }
        else {
            std::cout << "Ingrese impreso o mail" << "\n" << "\n";

        }
    } while (ticket != "IMPRESO " || ticket != "MAIL");
    std::cout << "Producto entregado" << "\n" << std::endl << "Gracias por su compra";

}
