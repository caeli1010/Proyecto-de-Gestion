#include <cstdlib>
#include <iostream>
#include <cstdio>
#include <cstring>
#include <conio.h>
#include <time.h>
#include "Compras.h"
#include "Operacion.h"

using namespace std;


void Compras::CargarCompras(){
    setTipoFact();
    setnrofactura();
    CargarOp();
}

 void Compras::MostrarCompras(){
     cout<<"Tipo de Factura : "<<tipofactura<<endl;
     cout<<"Numero:  "<<getNroFactura()<<endl;
     MostrarOp();
 }

 void Compras::setnrofactura(){
    cout<<"Numero de  Factura : ";
    cin.getline(nrofactura,15);
 }

 char  Compras::getNroFactura(){
     return nrofactura[15];
 }

 void Compras::setTipoFact(){
      cout<<"Tipo de factura : ";
      cin>>tipofactura;
 }

char Compras::getTipoFact(){
    return tipofactura;
}



