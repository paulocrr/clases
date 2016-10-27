#include "Point.h"
class Vector{
private:
    Point p1;
    Point p2;
public:
    Vector();
    Vector(Vector &a);
    Vector(Point pa,Point pb);
    Point getP1();
    Point getP2();
    void setP1(Point a);
    void setP2(Point a);
    void print_Vec();
    float modulo();
};

class VectorArray{
private:
    Vector *ptr_vector;
    int siz;
public:
    VectorArray();
    VectorArray(Vector vectors[],int tam);
    VectorArray(VectorArray &a);
    void Push_back(Vector p);
    void Insert(Vector p, int pos);
    void Delete(int pos);
    void Clear();
    void print_arr();
    int getSize();
};
