#ifndef VENTAS_H
#define VENTAS_H

///-----------------CLASE DE PRUEBA----------------------

 class Fecha{
 private:
    int dia, mes, anio;
 public:
    void cargarFecha();
    int mostrarFecha();
 };

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
    int idVenta;
    Fecha fecha;
    char tipoFactura;
    int idProducto;
    int cantidad;
    DetalleFactura total;
    int idCliente;

    public:
    void cargarVtas();  /// Carga los datos de las ventas
    void mostrarVtas(); /// Muestra los datos de las ventas
    void setIdVenta();  /// Asigna el Id de venta
    void setIdCliente(); ///Asigna el modo de pago
    void setTipoFact();
    void  setCantProd();
    void setProducto();
    char getTipoFact();
    int getCantProd();
    int getProducto();
    int getIdVenta();   /// Muestra el Id de ventas
    int getIdCliente(); ///Muestra  el modo de pago
    bool grabarEnDisco();///GRABA EN UN ARCHIVO UN REGISTRO DE TIPO PRODUCTO **HECHA**
};

///-----------------------PROTOTIPOS GLOBALES
int crearIdVentas();
int posicionIdCliente();
Ventas buscarVentaXidCliente(int);


#endif // VENTAS_H

