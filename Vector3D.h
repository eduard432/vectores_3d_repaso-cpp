
#ifndef VECTOR_3D
#define VECTOR_3D

class Vector3D {
    private:
        float x,y,z;
    public:
        Vector3D();
        Vector3D(float x, float y, float z);
        float getX();
        float getY();
        float getZ();
        static Vector3D suma(Vector3D vec1 , Vector3D vec2 );
        static Vector3D resta(Vector3D vec1 , Vector3D vec2 );
        void imprimir();

};

#endif