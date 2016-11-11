#include <iostream>
//#include "Point.h"
//#include "Vector.h"
#include "Polygon.h"
#include <typeinfo>
using namespace std;

int main()
{
    //Clase Vector Array
    Point p1(1.0,6.0);
    Point p2(3.0,8.0);
    Point p3(2.0,4.0);
    Rectangle *r1;
    //Triangle t1(p1,p2,p3);
    //Triangle *t2 = reinterpret_cast<Triangle *>(r1);
    Triangle *t2 = dynamic_cast<Triangle *> (r1);
    //t2->Triangle(p1,p2,p3);
    cout<<typeid(t2).name()<<endl;

    /*if(1==1){
        Rectangle r2(p1,p2);
        cout<<r2.getNumPolygons()<<endl;
    }
    cout<<r1.getNumPolygons()<<endl;
    double res = r1.area();
    cout<<res<<endl;
    cout <<t1.area()<<endl;*/
   // Rectangle r2(p1,p2,p3,p4);S
    /*Vector vec1(p1,p2);
    Vector vec2(p3,p4);
    Vector vec3;
    VectorArray vectorArray;
    vectorArray.Push_back(vec1);
    vectorArray.Push_back(vec2);
    vectorArray.Insert(vec3,1);
    vectorArray.print_arr();*/
    //Clase Vector
    /*Point p1(1.2,3.4);
    Point p2(1.2,3.4);
    Vector v1;
    Vector v2;
    v1.setP1(p1);
    v1.setP2(p2);
    v2=v1;
    v1.print_Vec();
    v2.print_Vec();
    float m1 = v1.modulo();*/


    //Clase Punto
    /*Point p1;
    Point p2;
    Point p3;
    Point p4;
    Point p5;
    Point p6(3.0,4.0);
    Point p7(1.0,2.0);
    Point parr[5]={p1,p2,p3,p4,p5};
    int s = 5;
    ArrayPoint arrp(parr,s);
    arrp.Push_back(p6);
    arrp.Insert(p7,2);
    arrp.Delete(4);
    arrp.print_arr();*/
   /* ArrayPoint arrp(parr,s);
    int len = arrp.getSize();
    cout<<len<<endl;
    Point p6;
    arrp.Push_back(p6);
    len = arrp.getSize();
    cout<<len<<endl;
    Point p7;
    arrp.Insert(p7,4);
    len = arrp.getSize();
    cout<<len<<endl;
    arrp.Delete(7);
    len = arrp.getSize();
    cout<<len<<endl;
    arrp.Clear();
    len = arrp.getSize();
    cout<<len<<endl;*/
   /* Point punto;
    Point punto2(4.5,5.5);
    punto.print_Point();
    cout<<endl;
    punto2.print_Point();
    cout<<endl;
    punto2.setX(6.6);
    punto2.setY(10.5);
    float x2 = punto2.getX();
    float y2 = punto2.getY();
    cout<<x2<<y2<<endl;
    punto2.modify_Point(3.0,4.0);
    punto2.print_Point();*/
    return 0;
}
