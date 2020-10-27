#include <iostream>
#include "arregloDinamico.h"

int main()
{
    Arreglo arreglo;
    
    arreglo.insertar_final("final1");
    arreglo.insertar_final("final2");
    arreglo.insertar_final("final3");
    arreglo.insertar_final("final4");
    arreglo.insertar_final("final5");
    arreglo.insertar_final("final6");
    arreglo.insertar_final("final7");
    arreglo.insertar_final("final8");

    for (size_t i = 0; i < arreglo.size(); i++)
    {
        cout << arreglo[i] << " ";
    }

    arreglo.insertar_inicio("inicio1");
    arreglo.insertar_inicio("inicio2");
    
    for (size_t i = 0; i < arreglo.size(); i++)
    {
        cout << arreglo[i] << " ";
    }
    
    return 0;
}