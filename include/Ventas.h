#ifndef VENTAS_H
#define VENTAS_H
#include "Operacion.h"
#include "funcionesG.h"

class Ventas: public Operacion{

    protected:
    char tipofactura; ///Facturas de dos tipos (A: empresa, B: consumidor final)
    int Nrofactura;  ///Numero de factura autonumerico (0000-00000000)
    float Bonificacion; ///teniendo en cuenta el modo de pago (1: 10 % descuento, 2: 15% de recargo, 3: sin bonificacion)
   int modoPago; /// Condicion de pago (1: efectivo, 2: tarjeta de credito, 3: transferencia)
    float preciofinal;

    public:
    Ventas();
    void CargarVtas();  /// Carga los datos de las ventas
    void MostrarVtas(); /// Muestra los datos de las ventas
    void setTipoFact(); /// Asigna el tipo de factura
    void setNrofactura(char); /// Asigna el numero de factura autonumerico
    void setModoPago(); ///Asigna el modo de pago
    void setBonificacion();  /// Asigna la bonificacion que requiera de acuerdo al modo de pago
    void setprecioFinal();  /// Calcula el precio aplicando la bonificacion
    char getTipoFact();  /// Muestra el tipo de factura
    int getNroFactura();  /// Muestra el numero de la factura
    int getModoPago(); ///Muestra  el modo de pago
    float getBonificacion(); ///  Muestra la bonificacion aplicada
    float getPrecioFinal();  /// Muestra el precio con la bonificacion aplicada
};

#endif // VENTAS_H

