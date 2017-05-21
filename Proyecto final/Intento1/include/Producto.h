#ifndef PRODUCTO_H
#define PRODUCTO_H
#include <iostream>
using namespace std;

class Producto
{
    protected:
        string nombre;
        int precio;
    public:
        Producto(string, int);
};

#endif // PRODUCTO_H
