#ifndef COMPRAS_H
#define COMPRAS_H
///Cambiar a camell case?????

class Compra{

    public:
    int idCompra; /// ID autonumerico de la compra
   int idProveedor; /// ID del proveedor   ingresado en forma manual
   char tipoFactura; ///Facturas de dos tipos (A: empresa)
    int puntoVta;    /// Representa el numero de venta de la sucursal del proveedor( mayor a 0)
    int nroFactura ;  ///Numero de factura autonumerico (-00000000)
     int idProducto;  /// ID ingresado en forma manual
     int cantidad;  /// Cantidad del producto
     float precio;  /// Precio unitario del producto
     int impuesto;  /// Valor del Impuesto aplicado
     float total; /// Total a pagar, calculado con el impuesto, el precio y la cantidad

    public:
    void cargarCompra();  /// Carga los datos de las ventas
    void mostrarCompra(); /// Muestra los datos de las ventas
    void setIdCompra();  /// Asigna un ID para tener un registro de las compras
    void setIdProveedor(); ///  Pedira el codigo del proveedor
    void setTipoFact(); /// Asigna el tipo de factura
     void setPuntoVta();
    void setNroFactura(); /// Asigna el numero de factura autonumerico
     void setProducto(); /// Asigna el Id de producto ingresado
     void setPrecio(); ///Asigna el Precio Unitario del producto
     void setCantProd(); ///Asigna la cantidad de producto en stock
     void setImpuesto(); ///Asigna el impuesto
     void setTotal();
     int getIdCompra();
     int getIdProveedor();
    char getTipoFact();  /// Muestra el tipo de factura
    void getPuntoVta();
    int getNroFactura();  /// Muestra el numero de la factura
     int getProducto(); /// Muestra el numero de  id del producto
     int getCantProd(); ///Muestra la cantidad de producto corroborado en setCantProd
    float getPrecio();  ///Muestra el precio unitario del producto
    float getImpuesto(); ///Muestra el Impuesto aplicado
    float getTotal();
    bool grabarEnDisco();///GRABA EN UN ARCHIVO UN REGISTRO DE TIPO PRODUCTO **HECHA**
    bool leerDeDisco(int );
};

///------------------------PROTOTIPOS GLOBALES-----------------------------------------------------
int crearId();  /// Crea id incremenal de compra
//string numeracion(int tam);
void listado_Compras() ;

int buscarIdProducto();

Compra  buscarCompraXidProveedor(int);

#endif // COMPRAS_H
