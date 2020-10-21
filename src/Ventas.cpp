#include <cstdlib>
#include <iostream>
#include <cstdio>
#include <cstring>
#include <conio.h>
#include <time.h>
#include "Ventas.h"
#include "funcionesG.h"

using namespace std;

Ventas::Ventas(){
    Bonificacion=0;
    preciofinal=0;
}

void Ventas::CargarVtas(){
    setTipoFact();
    CargarOp();
    setModoPago();
}

 void Ventas::MostrarVtas(){
     cout<<"Tipo de Factura : "<<tipofactura<<endl;
     cout<<"Numero: 0000 - "<<getNroFactura()<<endl;
     MostrarOp();
      cout<<"Condiciones de pago : "<<modoPago<<endl;
     cout<<"Bonificacion : "<<getBonificacion()<<endl;
     cout<<"Precio Final a pagar : "<<getPrecioFinal()<<endl;
 }

 void Ventas::setNrofactura(char tipofactura){
    Nrofactura= crearId();
 }

 int  Ventas::getNroFactura(){
     return Nrofactura;
 }

 void Ventas::setTipoFact(){
      cout<<"Tipo de factura : ";
      cin>>tipofactura;
      setNrofactura(tipofactura);
 }

 char Ventas::getTipoFact(){
      return tipofactura;
 }

 void Ventas::setModoPago(){
    cout<<"Condiciones de pago : ";
    cin>>modoPago;
 }

 void Ventas::setBonificacion(){      ///PROBAR CON SWITCH
    int opc=getModoPago();
    switch(opc) {
    case  1:
    Bonificacion=0.9;
        break;
    case 2:
     Bonificacion=1.15;
     break;
    case 3:
    Bonificacion=1;
    break;
    } }

    int Ventas::getModoPago(){
     return modoPago;
}

 float Ventas::getBonificacion(){
       return Bonificacion;
 }

 void Ventas::setprecioFinal(){
     precio=getPrecio();
     Bonificacion=getBonificacion();
        preciofinal= precio*Bonificacion;
 }

float Ventas::getPrecioFinal(){
    return preciofinal;
}


