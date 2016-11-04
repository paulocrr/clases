#include <math.h>
#include "Polygon.h"
int Polygon::num=0;
Point constructorPoints [4];
Point * updateConstructorPoints ( const Point &p1 , const Point &p2 ,const Point &p3 , const Point &p4 = Point (0,0)) {
    constructorPoints [0] = p1;
    constructorPoints [1] = p2;
    constructorPoints [2] = p3;
    constructorPoints [3] = p4;
    return constructorPoints;
}
double dist2P(Point *p1, Point *p2){
    double res = sqrt(pow((p1->getX()+p2->getX()),2)+pow((p1->getY()+p2->getY()),2));
    return res;
}

Polygon::Polygon(Point a[], int tam) {
    ArrayPoint j(a,tam);
    arrp2=j;
    ++num;
}
int Polygon::getNumSides() {
    return arrp2.getSize();
}
const ArrayPoint* Polygon::getPoints() {
    return &arrp2;
}

Polygon::Polygon() {
    ArrayPoint pa;
    arrp2=pa;
    ++num;
}
Polygon::~Polygon(){
    --num;
}
Rectangle::Rectangle(Point p1, Point p2): Polygon(updateConstructorPoints(p1,Point(p1.getX(),p2.getY()),p2,Point(p2.getX(),p1.getY())),4) {}
Rectangle::Rectangle(double x, double y, double x1, double y1):Polygon(updateConstructorPoints(Point(x,y),Point(x,y1),Point(x1,y1),Point(x1,y)),4) {}
double Rectangle::area() {
    double lenght = dist2P(arrp2.get(0),arrp2.get(1));
    double widht = dist2P(arrp2.get(0),arrp2.get(3));
    return lenght*widht;
}

Triangle::Triangle(Point p1,Point p2,Point p3):Polygon(updateConstructorPoints(p1,p2,p3),3){}

double Triangle::area(){
    double l1=dist2P(arrp2.get(0),arrp2.get(1));
    double l2 =dist2P(arrp2.get(1),arrp2.get(2));
    double l3 = dist2P(arrp2.get(0),arrp2.get(2));
    double s = (l1+l2+l3)/2;
    return sqrt(s*(s-l1)*(s-l2)*(s-l3));
}
