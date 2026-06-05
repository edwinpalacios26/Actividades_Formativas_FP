
#include <iostream>

using namespace std;

int main()
{
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
    
    return 0;
}