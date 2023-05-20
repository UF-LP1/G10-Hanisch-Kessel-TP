#include <iostream>
#include <list>
#include <vector>
#include <cctype>
#include <exception>
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
#include "..\Model\cDisfraces.h"
using namespace std;

int main() {

    // Crear local
    cLocal cotillon;

  // Agregar artículos al inventario del cotillón
    cotillon.agregarArticulo(new cVelas("Velas cumpleaños", 10, 15));
    cotillon.agregarArticulo(new cGolosinas("Bolsa de golosinas", 30.5, "Chocolates"));
    cotillon.agregarArticulo(new cGlobos("Globos fiesta", 50, "Rojos"));


    // Mostrar inventario del cotillón
    std::cout << "Inventario del Cotillón:\n";
    cotillon.mostrarInventario();
    std::cout << "\n";

    // Crear clientes
    cCliente cliente1("Juan Fernando Quintero", 1);
    cCliente cliente2("Maria Becerra", 2);

    // Clientes solicitan un número de papel
    cliente1.getNumero();
    cliente2.getNumero();

    // Crear encargado
    cEmpleado empleado("Roman Riquelme");

    // Encargado llama a los clientes según su número
    empleado.llamarCliente(cliente1);
    empleado.llamarCliente(cliente2);

    // Clientes realizan compras
    cCarrito carrito1;
    cCarrito carrito2;

    // Cliente 1 agrega artículos al carrito
    try {
        carrito1.agregarArticuloCarrito(new cVelas("Velas cumpleaños", 10, 15));
        carrito1.agregarArticuloCarrito(new cGolosinas("Bolsa de golosinas", 30.5, "Chocolates"));
        carrito1.agregarArticuloCarrito(new cGolosinas("Caramelos surtidos", 9.12, "Tutifruti"));
        
    }
    catch (const std::exception& e) {
       std:: cout << "Error: " << e.what() << "\n";
    }

    // Cliente 2 agrega artículos al carrito
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
    std:: cout << "\n";

    std::cout << "Carrito de compras de " << cliente2.getNombre() << ":\n";
    carrito2.mostrarCarrito();
    std::cout << "\n";

    // Calcular monto total de los carritos
    double montoTotal1 = carrito1.calcularTotal();
    double montoTotal2 = carrito2.calcularTotal();
    //Crear Encargado
    cEncargado encargado("Rodolfo D'onofrio");
    encargado.cobrar();
    std::string MP1,MP2;
    float pago1, pago2;
    
    std::cout << "Monto total de " << cliente1.getNombre() << ": $" << montoTotal1 << "\n";
    do {
       std::cout << "Ingrese el metodo de pago que va a utilizar para abonar (debito, credito, efectivo): ";
        cin >> MP1;
        for (char& c : MP1) {
            c = std::toupper(c);
        }
        if (MP1 == "DEBITO") {
           cout<<"Abona con debito, efectuando pago"<<endl;
            break;
        }
        else if (MP1 == "CREDITO") {
            std::cout<<"Abona con credito, efectuando pago"<<endl;
            break;
        }
        else if (MP1 == "EFECTIVO") {
          std::  cout << "Abona en efectivo"<<endl;
          cout << "ingrese el monto con el que va a abonar:" << std::endl;
          cin >> pago1;
          bool chequeo;
          do {
              chequeo = encargado.chequearMonto(pago1, montoTotal1);
              if (chequeo == false) {
                  cout << "monto mal ingresado, reingresar" << endl;
                  cin >> pago1;
              }
          } while (chequeo == false);
            std::cout << "su vuelto es de $" << encargado.vuelto(pago1, montoTotal1) << std::endl;
            break;
        
        }
        else {
            cout << "Ingrese debito, credito, efectivo" << "\n" << "\n";
        }
    } while (MP1 != "DEBITO" || MP1 != "CREDITO" || MP1 != "EFECTIVO");
    
    cout << "Monto total de " << cliente2.getNombre() << ": $" << montoTotal2 << "\n";
    do {
        cout << "Ingrese el metodo de pago que va a utilizar para abonar (debito, credito, efectivo): "<< "\n";
        cin >> MP2;
        for (char& c : MP2) {
            c = std::toupper(c);
        }
        if (MP2 == "DEBITO") {
            cout << "Abona con debito"<<endl;
            break;
        }
        else if (MP2 == "CREDITO") {
            cout << "Abona con credito"<<endl;
            break;
        }
        else if (MP2 == "EFECTIVO") {
            cout << "Abona en efectivo"<<endl;
            cout << "ingrese el monto con el que va a abonar:" << std::endl;
            cin >> pago2;
            bool chequeo;
            do {
                chequeo = encargado.chequearMonto(pago2, montoTotal2);
                if (chequeo == false) {
                    cout << "monto mal ingresado, reingresar" << endl;
                    cin >> pago2;
                }
            } while (chequeo==false);

            cout << "su vuelto es de $" << encargado.vuelto(pago2, montoTotal2) << std::endl;
            break;
        
        }
        else {
            cout << "Ingrese debito, credito, efectivo" << "\n" << "\n";

        }
        } while (MP2 != "DEBITO" || MP2 != "CREDITO" || MP2 != "EFECTIVO");
   

   
    std::string rta, ticket;
    //Preguntas sobre envolver y ticket
    do {
        std::cout << "¿Desea envolver la compra?: ";
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
        std::cout << "¿Desea el ticket de su compra impreso o al mail?: ";
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

    return 0;
}
