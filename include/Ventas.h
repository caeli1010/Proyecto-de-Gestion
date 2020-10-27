#ifndef VENTAS_H
#define VENTAS_H

///-----------------CLASE DE PRUEBA----------------------

 class DetalleFactura{
private:
    float total;
public:
   void setPrecioFinal();
   float getPrecioFinal();
 };

///-----------------------CLASE VENTAS

class Ventas{

    protected:
    int idVenta,  codProd, idCliente,  cantidad, modoPago;
    char tipoFactura;
    int  nroFactura;
    Fecha fecha;
    DetalleFactura total;

    public:
    void cargarVtas();  /// Carga los datos de las ventas
    void mostrarVtas(); /// Muestra los datos de las ventas
    void setIdVenta();  /// Asigna el Id de venta
    void setIdCliente(); /// Corrobora el si el id de Cliente existe, sino pide que lo cargue
    void setTipoFact();
    void setNroFact();
    void  setCantProd();
    void setCodProd);
    void setOpcionPago();
    int getIdVenta();   /// Muestra el Id de ventas
    int getIdCliente(); ///Muestra  el modo de pago
    char getTipoFact();
    int getNroFact();
    int getCodProd();
    int getCantProd();
    int getOpcionPago();
    bool grabarEnDisco();///GRABA EN UN ARCHIVO UN REGISTRO DE TIPO PRODUCTO **HECHA**
};

///-----------------------PROTOTIPOS GLOBALES
int crearIdVentas();
int crearIdXFact(char);
int posicionIdCliente();
Ventas buscarVentaXidCliente(int);


#endif // VENTAS_H

