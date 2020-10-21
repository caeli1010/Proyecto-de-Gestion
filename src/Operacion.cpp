#include <cstdlib>
#include <iostream>
#include <cstdio>
#include <cstring>
#include <conio.h>
#include <time.h>
#include "Operacion.h"

using namespace std;

Operacion::Operacion(){
    IDproducto=0;
    cantidad=0;
    precio=0;
    total=0;
}

void  Operacion::CargarOp(){
    setProducto();
    setCantProd();
    setPrecio();
    setImpuesto();
   /// setMonto(precio, impuesto, cantidad);
}

void Operacion::MostrarOp(){
    cout<<endl<<endl;
    cout<<"Producto : "<<IDproducto<<endl;
    cout<<"Cantidad : "<<cantidad<<endl;
    cout<<"Precio : "<<precio<<endl;
    cout<<"Impuesto : "<<impuesto<<endl;

   /// cout<<"Total a pagar : "<<getMonto()<<endl<<endl;
}

void Operacion::setMonto(){
      precio=getPrecio();
      impuesto=getImpuesto();
      cantidad=getcantProd();
    total=precio*cantidad*impuesto;
}

void Operacion::setProducto(){
     cout<<"Producto : ";
    cin>>IDproducto;
}

//void Operacion::setProducto(){
//    int posicion;
//    Producto  reg;
//    cout<<" ID Producto : ";
//    cin>>IDproducto;
//    posicion=merca.buscarProd(IDproducto);
//    reg=obtenerProducto(posicion);
//    setPrecio(reg.getprecio());
//    setImpuesto(reg.getIva());
//}

void Operacion::setPrecio(){
       cout<<"Precio : ";
    cin>>precio;
}


void Operacion::setCantProd(){
       cout<<"Cantidad : ";
    cin>>cantidad;
}

void Operacion::setImpuesto(){
    cout<<"Impuesto : ";
    cin>>impuesto;
}

//  float Operacion::getMonto(){
//  return total;
//  }

int Operacion::getProducto(){
    return IDproducto;
}


float Operacion::getPrecio(){
  return precio;
}



int Operacion::getcantProd(){
   return cantidad;
}

//float Operacion::getImpuesto(){
//  return impuesto;
//}

