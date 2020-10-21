#ifndef OPERACION_H
#define OPERACION_H


class Operacion{
    protected:
     int IDproducto;
     int cantidad;  /// Cantidad del producto
     float precio;  /// Precio unitario del producto
     float impuesto;  /// Impuesto aplicado al 21 %,  iva = 21%
     float total; /// Total a pagar, calculado con el impuesto, el precio y la cantidad
     ///Producto  mercad;

    public:
    Operacion();
     void CargarOp(); /// Carga los datos de la operacion
     void MostrarOp();  ///Muestra los datos de la operacion
     void setProducto(); /// Asigna el Id de producto ingresado
     void setPrecio(); ///Asigna el Precio Unitario del producto
     void setCantProd(); ///Asigna la cantidad de producto en stock
     void setImpuesto(); ///Asigna el impuesto
     void setMonto();  ///Calcula Precio total, suma entre precio e impuesto
     int getProducto(); /// Muestra el numero de  id del producto
     int getcantProd(); ///Muestra la cantidad de producto corroborado en setCantProd
     float getMonto(); ///Muestra el precio total a pagar
    float getPrecio();  ///Muestra el precio unitario del producto
    float getImpuesto(); ///Muestra el Impuesto aplicado.
};

#endif // OPERACION_H
