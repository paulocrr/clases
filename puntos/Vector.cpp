#include <iostream>
#include <new>
#include <math.h>
#include "Vector.h"
using namespace std;

Vector::Vector() {

}

Vector::Vector(Point pa, Point pb) {
    p1=pa;
    p2=pb;
}

Vector::Vector(Vector &a) {
    p1=a.p1;
    p2=a.p2;
}

Point Vector::getP1() {
    return p1;
}

Point Vector::getP2() {
    return p2;
}

void Vector::setP1(Point a) {
    p1 = a;
}


void Vector::setP2(Point a) {
    p2=a;
}
float Vector::modulo() {
    float res = sqrt(pow((p1.getX()+p2.getX()),2)+pow((p1.getY()+p2.getY()),2));
    return res;
}
void Vector::print_Vec() {
    cout<<"Punto 1: X="<<p1.getX()<<",Y="<<p1.getY()<<endl;
    cout<<"Punto 2: X="<<p2.getX()<<",Y="<<p2.getY()<<endl;
}

VectorArray::VectorArray() {
    siz=0;
    ptr_vector = new Vector[siz];
}
VectorArray::VectorArray(Vector vectors[], int tam) {
    siz = tam;
    ptr_vector = new Vector[siz];
    for(int i=0;i<siz;i++){
        ptr_vector[i]=vectors[i];
    }
}
VectorArray::VectorArray(VectorArray &a) {
    siz = a.siz;
    ptr_vector = new Vector[siz];
    for(int i =0;i<siz;i++){
        ptr_vector[i]=a.ptr_vector[i];
    }
}
void VectorArray::Push_back(Vector p) {
    Vector *temp = new Vector[siz];
    for(int i = 0; i<siz;i++){
        temp[i]=ptr_vector[i];
    }
    siz+=1;
    ptr_vector = new Vector[siz];
    for(int i = 0; i<siz-1;i++){
        ptr_vector[i]=temp[i];
    }
    delete[] temp;
    ptr_vector[siz-1]=p;
}

void VectorArray::Insert(Vector p, int pos) {
    if(pos>siz){
        cout<<"La posicion no permitida";
    }else{
        Vector *temp = new Vector[siz];
        for(int i = 0; i<siz;i++){
            temp[i]=ptr_vector[i];
        }
        siz+=1;
        ptr_vector = new Vector[siz];
        for(int i = 0; i<siz-1;i++){
            ptr_vector[i]=temp[i];
        }
        for(int i = pos; i<siz-1;i++){
            ptr_vector[i+1]=temp[i];
        }
        delete[] temp;
        ptr_vector[pos]=p;
    }
}
void VectorArray::print_arr() {
    for(int i = 0;i<siz;i++){
        cout<<i<<": X1="<<ptr_vector[i].getP1().getX()<<" , Y1="<<ptr_vector[i].getP1().getY()<<endl;
        cout<<i<<": X2="<<ptr_vector[i].getP2().getX()<<" , Y2="<<ptr_vector[i].getP2().getY()<<endl;
    }
}

void VectorArray::Delete(int pos) {
    Vector *temp = new Vector[siz];
    for(int i = 0; i<siz;i++){
        temp[i]=ptr_vector[i];
    }
    siz-=1;
    ptr_vector = new Vector[siz];
    for(int i =0;i<siz;i++){
        if(i>=pos){
            ptr_vector[i]=temp[i+1];
        }else{
            ptr_vector[i]=temp[i];
        }

    }
    delete[] temp;
}
void VectorArray::Clear() {
    delete[] ptr_vector;
    siz=0;
    ptr_vector = new Vector[siz];
}

int VectorArray::getSize() {
    return siz;
}