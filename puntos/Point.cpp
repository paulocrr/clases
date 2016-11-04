#include<iostream>
#include<new>
#include "Point.h"
using namespace std;
Point::Point(){
    x = 0.0;
    y = 0.0;
}
Point::Point(Point &a){
    x = a.x;
    y = a.y;
}
Point::Point(float x1,float y1){
    x = x1;
    y = y1;
}
float Point::getX(){
    return x;
}
float Point::getY(){
    return y;
}
void Point::setX(float x1){
    x = x1;
}
void Point::setY(float y1){
    y = y1;
}
void Point::print_Point(){
    cout<<x<<","<<y<<endl;
}
void Point::modify_Point(float x1, float y1){
    x+=x1;
    y+=y1;
}
ArrayPoint::ArrayPoint() {
    siz=0;
    ptr_puntos = new Point[siz];
}
ArrayPoint::ArrayPoint(Point points[],int tam){
    siz = tam;
    ptr_puntos = new Point[siz];
    for(int i=0;i<siz;i++){
        ptr_puntos[i]=points[i];
    }
}

ArrayPoint::ArrayPoint(ArrayPoint &pv){
    siz = pv.siz;
    ptr_puntos = new Point[siz];
    for(int i =0;i<siz;i++){
        ptr_puntos[i]=pv.ptr_puntos[i];
    }
}

void ArrayPoint::Push_back(Point p){
    Point *temp = new Point[siz];
    temp = ptr_puntos;
    siz+=1;
    ptr_puntos = new Point[siz];
    for(int i = 0; i<siz-1;i++){
        ptr_puntos[i]=temp[i];
    }
    delete[] temp;
    ptr_puntos[siz-1]=p;
}

void ArrayPoint::print_arr(){
    for(int i = 0;i<siz;i++){
        cout<<i<<": X="<<ptr_puntos[i].getX()<<" , Y="<<ptr_puntos[i].getY()<<endl;
    }
}
void ArrayPoint::Insert(Point p, int pos){
    if(pos>siz){
        cout<<"La posicion no permitida";
    }else{
        Point *temp = new Point[siz];
        temp=ptr_puntos;
        siz+=1;
        ptr_puntos = new Point[siz];
        for(int i = 0; i<siz-1;i++){
            ptr_puntos[i]=temp[i];
        }
        for(int i = pos; i<siz-1;i++){
            ptr_puntos[i+1]=temp[i];
        }
        delete[] temp;
        ptr_puntos[pos]=p;
    }
}
void ArrayPoint::Delete(int pos){
    Point *temp = new Point[siz];
    temp = ptr_puntos;
    siz-=1;
    ptr_puntos = new Point[siz];
    for(int i =0;i<siz;i++){
        if(i>=pos){
             ptr_puntos[i]=temp[i+1];
        }else{
            ptr_puntos[i]=temp[i];
        }

    }
    delete[] temp;
}
void ArrayPoint::Clear(){
    delete[] ptr_puntos;
    siz=0;
    ptr_puntos = new Point[siz];
}
int ArrayPoint::getSize(){
    return siz;
}
Point* ArrayPoint::get(int pos){
    //if(pos>=0 && pos<siz){
        return ptr_puntos+pos;
    //}
}

