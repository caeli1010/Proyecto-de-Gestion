#include <cstdlib>
#include <iostream>
#include <cstdio>
#include <cstring>
#include <conio.h>
#include <time.h>
#include "Ventas.h"
//#include "../include/Producto.h"

using namespace std;

const char * FILE_VENTAS = "Achivos/Ventas.dat";
const char * FILE_FACTURAA = "Archivos/FacturaA.dat";
const char * FILE_FACTURAB = "Archivos/FacturaB.dat";

///---------------------------------METODOS DE PRUEBA--------------------------------------------------

void DetalleFactura::setPrecioFinal(){
      cout<<"Precio Final : "  ;
      cin>>total ;
}

float DetalleFactura::getPrecioFinal(){
    return total;
}

///----------------------------METODOS CLASE VENTAS---------------------------

void Ventas::cargarVtas(){
    setCodProd);
    setCantProd();
    setIdVenta();
   // fecha.cargarFecha();
    setTipoFact();
    setNroFact();
    setIdCliente();
    setOpcionPago();
    total.getPrecioFinal();
}

 void Ventas::mostrarVtas(){
    cout<<"Id de ventas : "<<idVenta<<endl;
     cout<<"Id de cliente : "<<idCliente<<endl;
     cout<<"Tipo factura : " ;
//cout<<"Fecha : "<<fecha.mostrarFecha()<<endl;
     cout<<"Precio Final : "<<total.getPrecioFinal()<<endl;
     system("pause");
 }


 void Ventas::setIdVenta(){
    idVenta= crearIdVentas();
 }

int Ventas::getIdVenta(){
   return idVenta;
}

 void Ventas::setIdCliente(){
    int dato;
    cout<<"Id de cliente : " ;
    cin>>dato;
    while(dato <= 0){
    cout<<"Numero de cliente incorrento";
    system("pause");
    system("cls");
   cout<<"Id de cliente : " ;
    cin>>dato;
    }
   /// listarEntidadPorID(dato);
    this->idCliente=dato;
 }


void Ventas::setTipoFact(){
     char tipo;
      cout<<"Tipo de factura : ";
      cin>>tipo;
      while(!(tipo == 'A'  || tipo == 'B' )) {
     cout<<"Tipo de factura incorrecta";
     system("pause");
     system("cls");
     cout<<"Tipo de factura : ";
     cin>>tipo;
      }
      int crearIdXFact(tipo);
      this ->tipoFactura=tipo;
 }

char Ventas::getTipoFact(){
    return tipoFactura;
}

void Ventas::setNroFact(){
  this-> nroFactura=crearIdXFact(char) ;
}

int Ventas::getNroFact(){
   return nroFactura;
}

void Ventas::setCodProd()){
    int codigo;
     cout<<"\n Codigo de producto : ";
    cin>>codigo;
     ///Producto prod1;
    while(codigo <= 0){
    cout<<"Codigo de producto incorrecto ";
      system("pause");
     system("cls");
      cout<<"\n Codigo de producto : ";
    cin>>codigo;
    }
   /// prod1.buscarProdxId(codigo);
   this->idProducto=codigo;
}

int Ventas::getProducto(){
    return idProducto;
}

void Ventas::setCantProd(){
       int unidad;
       cout<<"Cantidad : ";
    cin>>unidad;
    while(unidad <= 0){
    cout<<"Cantidad incorrecta ";
      system("pause");
     system("cls");
      cout<<"\n Cantidad : ";
    cin>>unidad;
    }
    ///Falta funcion para verificar cantidad existente en el stock
   this->cantidad=unidad;
}

int Ventas::getCantProd(){
   return cantidad;
}

 void Ventas::setOpcionPago(){
  int modo;
     cout<<"Opcion de pago : (1- Efectivo, 2- Transferencia, 3 - Tarjeta de credito ";
    cin>>modo;

 switch(modo){
 case 1:
     this->modoPago=modo;
     break;
 case 2:
    this->modoPago=modo;
    break;
 case 3:
    this->modoPago=modo;
    break;
 default:
   cout<<"Opcion de pago incorrecto ";
   break;
 }
 }

int Ventas::getOpcionPago(){
    return modoPago;
}

 bool Ventas::grabarEnDisco(){

        system("cls");
        FILE *p;
        bool chequeo;

        p = fopen(FILE_VENTAS,"ab");
        if(p==NULL){
            cout << "Error al abrir el archivo \n";
            return false;
        }
        chequeo = fwrite(this, sizeof(Ventas),1,p);
        if(chequeo==1){

           cout<< "Carga exitosa";
            fclose(p);
          system("pause");
            return true;
        }
        else{
            cout << "El registro no pudo guardarse \n\n";
            fclose(p);
            system("pause");
            return false;
        }
    }


 ///--------------------------------------FUNCIONES GLOBALES------------------------------------

    int crearIdVentas(){
    int bytes, cant;
    FILE *p = fopen(FILE_VENTAS, "rb");
     if (p == NULL){
        return 1;   ///dado que es el primer registro y no existe el archivo forzamos en nro 1
    }
      fseek(p, 0, SEEK_END);
    bytes = ftell(p);
    fclose(p);
    return cant+1;
}


 int crearIdXFact(char tipo='B'){
    int bytes, cant;

    if(tipo == 'A' || tipo == 'a')  {
    FILE *p = fopen(FILE_FACTURAA, "rb");
     if (p == NULL){
        return 13;   ///dado que es el primer registro y no existe el archivo forzamos en nro 1
    }
      fseek(p, 0, SEEK_END);
            bytes = ftell(p);
            fclose(p);
    }else{
        FILE *p = fopen(FILE_FACTURAB, "rb");
         if (p == NULL){
            return 18;   ///dado que es el primer registro y no existe el archivo forzamos en nro 1
    }
      fseek(p, 0, SEEK_END);
            bytes = ftell(p);
            fclose(p);
     }
    cant = bytes / sizeof(Ventas);
    return cant+1;
}
