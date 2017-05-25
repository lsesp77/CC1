#ifndef TV_H
#define TV_H
#include "Producto.h"

class TV : public Producto
{
    public:
        TV(char miNombre[],int miPrecio, string miCalidad, string miCaracteristicas[],string mipantallaTy, float miTam);
        getTv(char []);
    private:
        char nombre[20],codigo[5]; // letra,calidad,caracteristicas,tipo del pantalla, tamaño
        float tam;
        string caracteristicas [3],pantallaTy,calidad;


};

#endif // TV_H
