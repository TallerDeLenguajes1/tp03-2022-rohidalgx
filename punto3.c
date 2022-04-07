#include <stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
#include<ctype.h>

struct Producto {
int ProductoID; //Numerado en ciclo iterativo
int Cantidad; // entre 1 y 10
char *TipoProducto; // Algún valor del arreglo TiposProductos
float PrecioUnitario; // entre 10 - 100
};typedef struct Producto PRODUCTO;

struct Cliente {
int ClienteID; // Numerado en el ciclo iterativo
char *NombreCliente; // Ingresado por usuario
int CantidadProductosAPedir; // (aleatorio entre 1 y 5)
PRODUCTO *Productos //El tamaño de este arreglo depende de la variable
// “CantidadProductosAPedir”
};typedef struct Cliente CLIENTE;


int main(){
    char *TiposProductos[]={“Galletas”,”Snack”,”Cigarrillos”,”Caramelos”,”Bebidas”};//






    return (0);
}