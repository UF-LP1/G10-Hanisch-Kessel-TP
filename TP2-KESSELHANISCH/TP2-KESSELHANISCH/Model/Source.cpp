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
#include "..\Model\cCotillon.h"
#include "..\Model\cVajilla.h"
#include "..\Model\cReposteria.h"
using namespace std;

int main() {

    // Crear local
    cLocal cotillon;

    // Agregar artículos al inventario del cotillón
    cVelas* vela1 = new cVelas("Velas cumpleaños", 10, 20, 1);
    cVelas* vela2 = new cVelas("Bengala", 15, 20, 2);
    cVelas* vela3 = new cVelas("Numeros", 5, 20, 3);
    cGolosinas* golosina1 = new cGolosinas("Bolsa de golosinas", 30.5, 20, "Chocolates");
    cGolosinas* golosina2 = new cGolosinas("Gomitas", 20, 20, "Regaliz");
    cGolosinas* golosina3 = new cGolosinas("Caramelos surtidos", 150, 20, "Sugus");
    cGlobos* globo1 = new cGlobos("Globos fiesta", 10, 20, "Rojos");
    cGlobos* globo2 = new cGlobos("Numeritos", 30, 20, "Dorado");
    cGlobos* globo3 = new cGlobos("Bombuchas", 60, 20, "Surtidos");
    cCotillon* cotillon1 = new cCotillon("Piñata", 50, 20, "Cumpleaños", "Feliz cumpleaños");
    cCotillon* cotillon2 = new cCotillon("Cartelito", 10, 20, "Fiesta", "Feliz dia");
    cCotillon* cotillon3 = new cCotillon("Cartel torta", 90, 20, "Festejo", "River Plate");
    cReposteria* reposteria1 = new cReposteria("Chocolate baño", 50, 20);
    cReposteria* reposteria2 = new cReposteria("Confites decoracion", 74, 20);
    cReposteria* reposteria3 = new cReposteria("Bastoncitos Chocolate", 4, 20);
    cVajilla* vajilla1 = new cVajilla("Plato", 25, 20, "Verde");
    cVajilla* vajilla2 = new cVajilla("Vaso", 15, 20,  "Azul");
    cVajilla* vajilla3 = new cVajilla("Cubiertos", 63, 20,  "Rojo");
    cDisfraces* disfraz1 = new cDisfraces("Spiderman", 50, 20,false, 5);
    cDisfraces* disfraz2 = new cDisfraces("Marcelo Daniel Gallardo", 912.18, 20,false, 5);
    cDisfraces* disfraz3 = new cDisfraces("Thor", 70, 20,false, 5);
    std::vector<cArticulos*> inventario;
    inventario.push_back(vela1);
    inventario.push_back(vela2);
    inventario.push_back(vela3);
    inventario.push_back(golosina1);
    inventario.push_back(golosina2);
    inventario.push_back(golosina3);
    inventario.push_back(globo1);
    inventario.push_back(globo2);
    inventario.push_back(globo3);
    inventario.push_back(cotillon1);
    inventario.push_back(cotillon2);
    inventario.push_back(cotillon3);
    inventario.push_back(reposteria1);
    inventario.push_back(reposteria2);
    inventario.push_back(reposteria3);
    inventario.push_back(vajilla1);
    inventario.push_back(vajilla2);
    inventario.push_back(vajilla3);
    inventario.push_back(disfraz1);
    inventario.push_back(disfraz2);
    inventario.push_back(disfraz3);

    // Mostrar inventario del cotillón
    std::cout << "Inventario del Cotillón:\n";
    for (int i = 0; i < inventario.size(); i++) {
        std::cout << inventario[i]->getNombre()<<" || " << "Stock disponible: " << inventario[i]->getStock() << endl;
    }
    std::cout << std::endl;
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
    std::vector<cArticulos*> carrito;

    // Cliente 1 agrega artículos al carrito
    try {
        //le solicito al cliente los articulos que desea
        string ArtAggCliente, ArtQuiCliente, seguir, rta;
        bool busqueda;

        do {

            cout << cliente1.getNombre()<<" ingrese el articulo que desea agregar al carrito: " << endl;
            cin >> ArtAggCliente;
            carrito1.Buscar(inventario, ArtAggCliente,carrito);
            busqueda = carrito1.Buscar(inventario, ArtAggCliente, carrito);
            if (busqueda == true) {
                std:: cout<<"Se agrego el articulo al carrito"<<std::endl;
            }
            else
                cout << "el articulo no se encontro" << endl;
            cout << "desea seguir agregando articulos? SI/NO" << endl;
            cin >> seguir;
        } while (seguir == "SI"|| seguir == "Si" || seguir == "si");
        cout << "desea eliminar algun articulo? SI/NO" << endl;
        cin >> rta;
        if (rta == "SI") {
            cout << "ingrese el articulo que desea quitar: " << endl;
            cin >> ArtQuiCliente;
            carrito1.quitarArticulo(ArtQuiCliente, carrito);
        }
    }
    catch (const std::exception& e) {
       std:: cout << "Error: " << e.what() << "\n";
    }

    // Cliente 2 agrega artículos al carrito
    try {
        string ArtAggCliente, ArtQuiCliente, seguir, rta;
        bool busqueda;
        do {
            cout << cliente2.getNombre()<< " ingrese el articulo que desea agregar al carrito: " << endl;
            cin >> ArtAggCliente;
            carrito2.Buscar(inventario, ArtAggCliente, carrito);
            busqueda = carrito2.Buscar(inventario, ArtAggCliente, carrito);
            if (busqueda == true) {
                std::cout << "Se agrego el articulo al carrito" << std::endl;
            }
            else
                cout << "el articulo no se encontro" << endl;
            cout << "desea seguir agregando articulos? SI/NO" << endl;
            cin >> seguir;
        } while (seguir == "SI" || seguir == "Si" || seguir == "si");
        cout << "desea eliminar algun articulo? SI/NO" << endl;
        cin >> rta;
        if (rta == "SI") {
            cout << "ingrese el articulo que desea quitar: " << endl;
            cin >> ArtQuiCliente;
            carrito2.quitarArticulo(ArtQuiCliente, carrito);
        }
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
