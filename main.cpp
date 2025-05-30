#include <iostream>
#include "Vector3D.h"
#include "ArregloVectores.h"

int main () {
    Vector3D a(1.0,2.0,4.0);
    Vector3D b(2.0,4.0,6.0);

    // Suma:
    Vector3D c = Vector3D::suma(a,b);
    c.imprimir();

    std::cout << "-------------" << "\n";
    ArregloVectores arr;
    arr.agregar(a);
    arr.agregar(b);
    arr.agregar(c);
    arr.imprimir();
    
    Vector3D d = arr.suma();
    d.imprimir();

    return 0;
}