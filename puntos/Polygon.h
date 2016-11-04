#include "Point.h"

class Polygon{
protected:
    ArrayPoint arrp2;
    static int num;
public:
    Polygon(Point a[],int tam);
    Polygon();
    ~Polygon();
    virtual double area() = 0;
    static int getNumPolygons(){return num;}
    int getNumSides();
    const ArrayPoint *getPoints();
};

class Rectangle: public Polygon{
public:
    Rectangle(Point p1,Point p2);
    Rectangle(double x,double y, double x1, double y1);
    virtual double area();
};
class Triangle: public Polygon{
public:
    Triangle(Point p1,Point p2, Point p3);
    virtual double area();
};

