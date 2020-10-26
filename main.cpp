#include <cstdlib>
#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <conio.h>
#include <time.h>
using namespace std;
#include "Ventas.h"
#include "Compras.h"
#include "Producto.h"

bool digitos(char *cad, int tam);

int main(){

bool  bandera1= false, bandera2=false;
//    Compra comp1 ;
//    comp1.cargarCompra();
//    bandera1=comp1.grabarEnDisco();
//     listado_Compras();
//    comp1.mostrarCompra();
    Ventas vta1;
     vta1.cargarVtas();
     vta1.mostrarVtas();
     bandera2=vta1.grabarEnDisco();
//  Producto pr;
//  pr.leerDeDisco(5);
    return 0;
}

bool digitos(char *cad, int tam){
      int cont=0;
     for(int i  ; i<tam -1;   i++){
         if  (isdigit(cad[i]) && (cad[i] >=0)){
        cont ++;
           }
       }
       if (cont >= 4){
         return true;
       }
       return false;
}
