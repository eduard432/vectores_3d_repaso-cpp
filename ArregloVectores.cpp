#include "ArregloVectores.h"
#include <iostream>

Vector3D ArregloVectores::getVector(int indice) {
    return vectores[indice];
}

void ArregloVectores::agregar(Vector3D vec) {
    vectores[indice] = vec;
    if(indice <= 6) {
        indice++;
    } else {
        std::cout << "El vector ya tiene 6 elementos." << "\n";
    }
}

Vector3D ArregloVectores::suma() {
    Vector3D resultado;

    for(int i = 0; i <= 5; i++) {
        resultado = Vector3D::suma(vectores[i], resultado);
    }
    return resultado;
}

void ArregloVectores::imprimir() {
    for(int i = 0; i <= indice - 1; i++) {
        Vector3D vector = vectores[i];
        vector.imprimir();
    }
}