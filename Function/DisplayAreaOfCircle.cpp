#include<iostream>
using namespace std;
float getArea(float r){
    float result=3.14*r*r;
    return result;
}

int main(){
    int rad;
    cout<<"Enter radious of circle : ";
    cin>>rad;
    float area=getArea(rad);
    cout<<"Area of circle has "<<rad<<" radious :"<<area;
    return 0;
}