#include<iostream>
using namespace std;
#define PI 3.14
int main(){
    float area,areaR,r,l,b;
    cout<<"Radius(in cm): ";
    cin>>r;
    area=PI*r*r;
    cout<<"The area of ciecle is: "<<area<<" cm^2"<<endl;
    cout<<"length(in cm): ";
    cin>>l;
    cout<<"widht(in cm): ";
    cin>>b;
    areaR=l*b;
    cout<<"The area of rectangle is: "<<areaR<<" cm^2"<<endl;
}