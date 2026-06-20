
#include <iostream>

using namespace std;

struct RegistroProducto {

    string nombreProducto;

    int precioProducto;

    int porcentajeProducto;

    int descuento;

    int precioFinal;

};


int main()
{
  /*
  
   int precioProducto;
    
    int porcentajeProducto;
    
    int descuento;
    
    int precioFinal;
    
    while(true){
            
    cout<<"Ingrese el precio del producto: ";
    
    cin>>precioProducto;
    
    if(precioProducto < 30){
        
        cout<<"Producto no apto para descuento."<<endl; // Descuentos a partir de 30 dolares.
        
        break;
    }
    else{
        
        cout<<"Ingrese el porcentaje de descuento a usar: ";

        cin>>porcentajeProducto;
    
        descuento = (precioProducto * porcentajeProducto) / 100;
    
        cout<<"Precio final: "<<precioProducto - descuento<<endl;
        
        cout<<"Saliendo...";
        
        break;
    
    }
    
    }
  
  
  */ 
    
 // Semana 6, Implementacion de structs
string nombreProducto = "Televisor";

string nombreProducto2 = "Celular";

string nombreProducto3 = "Laptop";

string nombreProducto4 = "Audifonos";

RegistroProducto producto;

int option; 

 do{
        
    cout<<"Productos disponibles: "<<endl;

    cout<<"1. Televisor - $500"<<endl;

    cout<<"2. Celular - $300"<<endl;

    cout<<"3. Laptop - $800"<<endl;

    cout<<"4. Audifonos - $50"<<endl;

    cout<<"5. Salir"<<endl;

    cout<<"Ingrese el numero del producto que desea comprar: ";

    cin>>option;

    switch (option)
    {
    case 1: {

        cout<<"Ha seleccionado el Televisor."<<endl;

        int precioProductoTelevisor = 500;

        int descuento = (precioProductoTelevisor * 10) / 100; 

        int precioFinal = precioProductoTelevisor - descuento;

        producto.nombreProducto = nombreProducto;

        producto.precioProducto = precioProductoTelevisor ;

        producto.descuento = descuento;

        producto.precioFinal = precioFinal;

        cout<<"Nombre del producto: "<<producto.nombreProducto<<endl;

        cout<<"Precio original: $"<<producto.precioProducto<<endl;

        cout<<"Descuento aplicado: $"<<producto.descuento<<endl;

        cout<<"Precio final: $"<<producto.precioFinal<<endl;

        cout<<"Desea comprar otro producto? (1. Si / 2. No): ";

        int comprarOtro;

        cin>>comprarOtro;

        if(comprarOtro == 2){

            cout<<"Saliendo..."<<endl;

            option = 5; 

        }
        break;
    }
    case 2: {

        cout<<"Ha seleccionado el Celular."<<endl;

        int precioProductoCelular = 300;

        int descuento = (precioProductoCelular * 10) / 100;

        int precioFinal = precioProductoCelular - descuento;

        producto.nombreProducto = nombreProducto2;

        producto.precioProducto = precioProductoCelular;

        producto.descuento = descuento;

        producto.precioFinal = precioFinal;

        cout<<"Nombre del producto: "<<producto.nombreProducto<<endl;

        cout<<"Precio original: $"<<producto.precioProducto<<endl;

        cout<<"Descuento aplicado: $"<<producto.descuento<<endl;

        cout<<"Precio final: $"<<producto.precioFinal<<endl;

        cout<<"Desea comprar otro producto? (1. Si / 2. No): ";

        int comprarOtro;

        cin>>comprarOtro;

        if(comprarOtro == 2){

            cout<<"Saliendo..."<<endl;

            option = 5; 

        }

        break;

    }
    case 3: {


        cout<<"Ha seleccionado la Laptop."<<endl;

        int precioProductoLaptop = 800;

        int descuento = (precioProductoLaptop * 10) / 100;

        int precioFinal = precioProductoLaptop - descuento;

        producto.nombreProducto = nombreProducto3;

        producto.precioProducto = precioProductoLaptop;

        producto.descuento = descuento;

        producto.precioFinal = precioFinal;

        cout<<"Nombre del producto: "<<producto.nombreProducto<<endl;

        cout<<"Precio original: $"<<producto.precioProducto<<endl;

        cout<<"Descuento aplicado: $"<<producto.descuento<<endl;

        cout<<"Precio final: $"<<producto.precioFinal<<endl;

        cout<<"Desea comprar otro producto? (1. Si / 2. No): ";

        int comprarOtro;

        cin>>comprarOtro;

        if(comprarOtro == 2){

            cout<<"Saliendo..."<<endl;

            option = 5; 

        }

        break;

    }

    case 4: {


        cout<<"Ha seleccionado los Audifonos."<<endl;
        int precioProductoAudifonos = 50;

        int descuento = (precioProductoAudifonos * 10) / 100;

        int precioFinal = precioProductoAudifonos - descuento;

        producto.nombreProducto = nombreProducto4;

        producto.precioProducto = precioProductoAudifonos;

        producto.descuento = descuento;

        producto.precioFinal = precioFinal;

        cout<<"Nombre del producto: "<<producto.nombreProducto<<endl;

        cout<<"Precio original: $"<<producto.precioProducto<<endl;

        cout<<"Descuento aplicado: $"<<producto.descuento<<endl;

        cout<<"Precio final: $"<<producto.precioFinal<<endl;

        cout<<"Desea comprar otro producto? (1. Si / 2. No): ";

        int comprarOtro;

        cin>>comprarOtro;

        if(comprarOtro == 2){

            cout<<"Saliendo..."<<endl;

            option = 5; 

        }

        break;

    }

    case 5: {

        cout<<"Saliendo.."<<endl;

        break;
    
    }

    default:

        cout<<"Opción no válida."<<endl;

        break;
    }

    } while (option != 5);


    return 0;
}