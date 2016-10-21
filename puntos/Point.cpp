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
    cout<<x<<y;
}
void Point::modify_Point(float x1, float y1){
    x+=x1;
    y+=y1;
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
    siz+=1;
    ptr_puntos = new Point[siz];
    ptr_puntos[siz-1]=p;
}
void ArrayPoint::Insert(Point p, int pos){
    if(pos>siz){
        cout<<"La posicion no permitida";
    }else{
        siz+=1;
        ptr_puntos = new Point[siz];
        for(int i = pos; i<siz;i++){
            ptr_puntos[pos+1]=ptr_puntos[pos];
        }
        ptr_puntos[pos]=p;
    }
}
void ArrayPoint::Delete(int pos ){
    for(int i =0;pos<siz;i++){
        ptr_puntos[pos]=ptr_puntos[pos+1];
    }
    siz-=1;
    ptr_puntos = new Point[siz];
}
void ArrayPoint::Clear(){
    delete[] ptr_puntos;
    //cout<<ptr_puntos[2];
    siz=0;
}
int ArrayPoint::getSize(){
    return siz;
}

