#include "Point.h"

class Polygon{
protected:
    ArrayPoint arrp2;
    int num=0;
public:
    Polygon();
    Polygon(Point a[4],int tam);
    virtual double area();
    int getNumPolygons();
    int getNumSides();
    const ArrayPoint *getPoints();
};

class Rectangle:public Polygon{
private:
    Point p1;
    Point p2;
    Point p3;
    Point p4;
public:
    Rectangle(Point p1, Point p2);
    Rectangle(int x,int y,int x1,int y1);
    double area();
    void print_rec();
};
class Triangule:public Polygon{
private:
    Point p1;
    Point p2;
    Point p3;
public:
    Triangule();
    Triangule(Point p1,Point p2,Point p3);
    double Herons();
};



