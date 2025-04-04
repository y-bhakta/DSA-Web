#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter a numbers: ";
    cin>>a;
    cout<<"Enter b numbers: ";
    cin>>b;
    a>b
        ? cout<<a<<" is greater than "<<b<<endl
        : cout<<b<<" is greater than "<<a<<endl;
    int x,y,z;
    cout<<"Enter x numbers: ";
    cin>>x;
    cout<<"Enter y numbers: ";
    cin>>y;
    cout<<"Enter z numbers: ";
    cin>>z;
    x>y
        ? x>z
            ? cout<<x<<" is greater than "<<y<<" and "<<z<<endl
            : cout<<z<<" is greater than "<<x<<" and "<<y<<endl   
        : y>z
            ? cout<<y<<" is greater than "<<x<<" and "<<z<<endl
            : cout<<z<<" is greater than "<<x<<" and "<<y<<endl; 
    return 0;
}