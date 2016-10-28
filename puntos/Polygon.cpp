//
// Created by paulo on 27/10/16.
//

#include <math.h>
#include "Polygon.h"
Point constructorPoints [4];

Point * updateConstructorPoints ( const Point &p1 , const Point &p2 ,const Point &p3 , const Point &p4 = Point (0 ,0)) {
    constructorPoints [0] = p1;
    constructorPoints [1] = p2;
    constructorPoints [2] = p3;
    constructorPoints [3] = p4;
    return constructorPoints ;
}
double dist2P(Point p1, Point p2){
    double res = sqrt(pow((p1.getX()+p2.getX()),2)+pow((p1.getY()+p2.getY()),2));
    return res;
}
Polygon::Polygon() {
    ArrayPoint temp;
    arrp2=temp;
    num+=1;
}
Polygon::Polygon(Point a[], int tam) {
    ArrayPoint j(a,tam);
    arrp2=j;
    num+=1;
}
int Polygon::getNumPolygons() {
    return num;
}
int Polygon::getNumSides() {
    return arrp2.getSize();
}
const ArrayPoint* Polygon::getPoints() {
    const ArrayPoint *ptr_puntos = &arrp2;
    return ptr_puntos;
}
Rectangle::Rectangle(Point p1, Point p2):p1(p1),p2(p2) {
    p3.setX(p1.getX());
    p3.setY(p2.getY());
    p4.setX(p1.getY());
    p4.setY(p2.getY());
    Point *temp=updateConstructorPoints(p1,p2,p3,p4);
    Polygon(temp,4);
}
Rectangle::Rectangle(int x, int y, int x1, int y1) {
    p1.setX(x);
    p1.setY(y);
    p2.setX(x1);
    p2.setY(y1);
    p3.setX(p1.getX());
    p3.setY(p2.getY());
    p4.setX(p1.getY());
    p4.setY(p2.getY());
    Polygon(updateConstructorPoints(p1,p2,p3,p4),4);
}
double Rectangle::area() {
    double base = dist2P(p1,p4);
    double h = dist2P(p1,p3);
    double res = base*h;
    return res;
}
void Rectangle::print_rec() {
    p1.print_Point();
    p2.print_Point();
    p3.print_Point();
    p4.print_Point();
}
Triangule::Triangule(Point p1,Point p2, Point p3):p1(p1),p2(p2),p3(p3) {
    Polygon(updateConstructorPoints(p1,p2,p3),3);
}
double Triangule::Herons() {
    double a = dist2P(p1,p2);
    double b = dist2P(p2,p3);
    double c = dist2P(p1,p3);
    double s = (a+b+c)/2;
    double res = sqrt(s*(s-a)*(s-b)*(s-c));
    return res;
}
