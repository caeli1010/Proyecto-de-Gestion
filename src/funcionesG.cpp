#include <cstdlib>
#include <iostream>
#include <cstdio>
#include <cstring>
#include <conio.h>
#include <time.h>
#include "funcionesG.h"
#include "Ventas.h"

using namespace std;

int crearId(){
    int bytes, cant;
    FILE *p = fopen("FacturaA.dat", "rb");
    if (p == NULL){
        return 1;   ///dado que es el primer registro y no existe el archivo forzamos en nro 1
    }
    fseek(p, 0, SEEK_END);
    bytes = ftell(p);
    fclose(p);
    cant = bytes / sizeof(Ventas);
    cout<<bytes;
    return cant+1;
}


