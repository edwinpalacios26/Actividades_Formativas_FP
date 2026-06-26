#include <iostream>
using namespace std;

struct RegistroProducto {
    string nombreProducto;
    int precioProducto;
    int porcentajeProducto;
    int descuento;
    int precioFinal;
};

void mostrarMenu() {
    cout << "\nProductos disponibles:" << endl;
    cout << "1. Televisor - $500" << endl;
    cout << "2. Celular - $300" << endl;
    cout << "3. Laptop - $800" << endl;
    cout << "4. Audifonos - $50" << endl;
    cout << "5. Salir" << endl;
    cout << "Ingrese el numero del producto que desea comprar: ";
}

RegistroProducto calcularProducto(string nombre, int precio, int porcentaje) {

    RegistroProducto producto;

    producto.nombreProducto = nombre;
    producto.precioProducto = precio;
    producto.porcentajeProducto = porcentaje;
    producto.descuento = (precio * porcentaje) / 100;
    producto.precioFinal = precio - producto.descuento;

    return producto;
}

void mostrarProducto(RegistroProducto producto) {
    
    cout << "Nombre del producto: " << producto.nombreProducto << endl;
    cout << "Precio original: $" << producto.precioProducto << endl;
    cout << "Descuento aplicado: $" << producto.descuento << endl;
    cout << "Precio final: $" << producto.precioFinal << endl;
}

int preguntarComprarOtro() {
    int comprarOtro;

    cout << "Desea comprar otro producto? (1. Si / 2. No): ";
    cin >> comprarOtro;

    return comprarOtro;
}

int main() {
    int option;

    do {
        mostrarMenu();
        cin >> option;

        RegistroProducto producto;

        switch (option) {
            case 1:
                cout << "Ha seleccionado el Televisor." << endl;
                producto = calcularProducto("Televisor", 500, 10);
                mostrarProducto(producto);

                if (preguntarComprarOtro() == 2) {
                    option = 5;
                }
                break;

            case 2:
                cout << "Ha seleccionado el Celular." << endl;
                producto = calcularProducto("Celular", 300, 10);
                mostrarProducto(producto);

                if (preguntarComprarOtro() == 2) {
                    option = 5;
                }
                break;

            case 3:
                cout << "Ha seleccionado la Laptop." << endl;
                producto = calcularProducto("Laptop", 800, 10);
                mostrarProducto(producto);

                if (preguntarComprarOtro() == 2) {
                    option = 5;
                }
                break;

            case 4:
                cout << "Ha seleccionado los Audifonos." << endl;
                producto = calcularProducto("Audifonos", 50, 10);
                mostrarProducto(producto);

                if (preguntarComprarOtro() == 2) {
                    option = 5;
                }
                break;

            case 5:
                cout << "Saliendo..." << endl;
                break;

            default:
                cout << "Opcion no valida." << endl;
                break;
        }

    } while (option != 5);

    return 0;
}