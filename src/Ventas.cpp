#include <cstdlib>
#include <iostream>
#include <cstdio>
#include <cstring>
#include <conio.h>
#include <time.h>
#include "Ventas.h"

using namespace std;

const char * FILE_VENTAS = "Archivos/Ventas.dat";

///---------------------------------METODOS DE PRUEBA--------------------------------------------------

 void Fecha::cargarFecha() {
     dia=25;
     mes=10;
     anio=2020;
 }

 int Fecha::mostrarFecha(){
     cout<<"Fecha : "<<dia<<mes<<anio;
 }

void DetalleFactura::setPrecioFinal(){
      cout<<"Precio Final : "  ;
      cin>>total ;
}

float DetalleFactura::getPrecioFinal(){
    return total;
}

///----------------------------METODOS CLASE VENTAS---------------------------

void Ventas::cargarVtas(){
    setIdVenta();
    setIdCliente();
    setTipoFact();
    setProducto();
    setCantProd();
   // fecha.cargarFecha();
    total.getPrecioFinal();
}

 void Ventas::mostrarVtas(){
    cout<<"Id de ventas : "<<idVenta<<endl;
     cout<<"Id de cliente : "<<idCliente<<endl;
//cout<<"Fecha : "<<fecha.mostrarFecha()<<endl;
     cout<<"Precio Final : "<<total.getPrecioFinal()<<endl;
     system("pause");
 }


 void Ventas::setIdVenta(){
    idVenta= crearIdVentas();
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
    this->idCliente=dato;
 }

int Ventas::getIdVenta(){
   return idVenta;
}

void Ventas::setTipoFact(){
     char letra;
      cout<<"Tipo de factura : ";
      cin>>letra;
      while(!(letra == 'A'  || letra == 'B' )) {
     cout<<"Tipo de factura incorrecta";
     system("pause");
     system("cls");
     cout<<"Tipo de factura : ";
     cin>>letra;
      }
      this ->tipoFactura=letra;
 }

char Ventas::getTipoFact(){
    return tipoFactura;
}

void Ventas::setProducto(){
    int codigo;
     cout<<"\nID de producto : ";
    cin>>codigo;
     ///Producto prod1;
    while(codigo <= 0){
    cout<<"Codigo de producto incorrecto ";
      system("pause");
     system("cls");
      cout<<"\n ID  de producto : ";
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
   this->cantidad=unidad;
}

int Ventas::getCantProd(){
   return cantidad;
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
