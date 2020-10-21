#ifndef COMPRAS_H
#define COMPRAS_H
#include "Operacion.h"

class Compras:public Operacion{

    protected:
    char tipofactura; ///Facturas de dos tipos (A: empresa)
    char nrofactura[15];  ///Numero de factura autonumerico (0000-00000000)
   /// Producto mercaderia;

    public:
    void CargarCompras();  /// Carga los datos de las ventas
    void MostrarCompras(); /// Muestra los datos de las ventas
    void setTipoFact(); /// Asigna el tipo de factura
    void setnrofactura(); /// Asigna el numero de factura autonumerico
    char getTipoFact();  /// Muestra el tipo de factura
    char getNroFactura();  /// Muestra el numero de la factura
};

#endif // COMPRAS_H
