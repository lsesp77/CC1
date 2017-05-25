#include "TV.h"

TV::TV(char miNombre[],int miPrecio, string miCalidad, string miCaracteristicas[],string mipantallaTy, float miTam)
    :Producto(char miNombre, float miPrecio), calidad(miCalidad), caracteristicas(miCaracteristicas), pantallaTy(mipantallaTy),Tam(miTam)
{}
