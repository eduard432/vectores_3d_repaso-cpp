#include "Vector3D.h"

#ifndef ARREGLO_VECTORES
#define ARREGLO_VECTORES

class ArregloVectores {
    private:
        Vector3D vectores[6];
        int indice = 0;
    public:
        Vector3D getVector(int indice);
        void agregar(Vector3D vec);
        Vector3D suma();
        void imprimir();

};

#endif