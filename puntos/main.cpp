#include <iostream>
#include "Point.h"
using namespace std;

main()
{
    Point p1;
    Point p2;
    Point p3;
    Point p4;
    Point p5;
    Point parr[5]={p1,p2,p3,p4,p5};
    int s = 5;
    ArrayPoint arrp(parr,s);
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
    cout<<len<<endl;
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
}
