#include "Vector3D.h"
#include <iostream>

Vector3D::Vector3D() {
    x=0;
    y=0;
    z=0;
}

Vector3D::Vector3D(float x, float y, float z) {
    this->x=x;
    this->y=y;
    this->z=z;
}

float Vector3D::getX() {
    return x;
}

float Vector3D::getY() {
    return y;
}

float Vector3D::getZ() {
    return z;
}

Vector3D Vector3D::suma(Vector3D vec1, Vector3D vec2) {
    float x1 = vec1.getX();
    float y1 = vec1.getY();
    float z1 = vec1.getZ();
    
    float x2 = vec2.getX();
    float y2 = vec2.getY();
    float z2 = vec2.getZ();

    return Vector3D(x1 + x2, y1 + y2, z1 + z2);
}

Vector3D Vector3D::resta(Vector3D vec1, Vector3D vec2) {
    float x1 = vec1.getX();
    float y1 = vec1.getY();
    float z1 = vec1.getZ();
    
    float x2 = vec2.getX();
    float y2 = vec2.getY();
    float z2 = vec2.getZ();

    return Vector3D(x1 - x2, y1 - y2, z1 - z2);
}

void Vector3D::imprimir() {
    std::cout << "x: " << x << " y: " << y << " z: " << z << "\n";
}