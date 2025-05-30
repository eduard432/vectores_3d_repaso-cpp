#include "Vector3D.h"

#ifndef ARREGLO_VECTORES
#define ARREGLO_VECTORES

#define MAX_ELEME 6

class ArregloVectores {
    private:
        Vector3D vectores[MAX_ELEME];
        int indice = 0;
    public:
        Vector3D getVector(int indice);
        void agregar(Vector3D vec);
        Vector3D suma();
        void imprimir();

};

#endif