#include <iostream>
#include "Operacion.h"
#include "Ventas.h"
#include "Compras.h"

using namespace std;

int main(){
  /* float precio, impuesto;
    int cantidad;
    precio=100;
    impuesto=0.2103;
    cantidad=10;
    compra.setMonto(precio,impuesto,cantidad);
    cout<<compra.getMonto();*/
    Compras comp1 ;
    comp1.CargarCompras();
    comp1.MostrarCompras();
    Ventas vta1;
     vta1.CargarVtas();
     vta1.MostrarVtas();

    return 0;
}
