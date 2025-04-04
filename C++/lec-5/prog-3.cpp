#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter a: ";
    cin>>a;
    cout<<"Enter b: ";
    cin>>b;
    cout<<"Finding greatest or equal number."<<endl;
    if(a>b){
        cout<<"A is greater.";
    }
    else if(a==b){
        cout<<"A and B are equal.";
    }
    else{
        cout<<"B is greater.";
    }
    int x,y;
    cout<<endl;
    cout<<"Enter x: ";
    cin>>x;
    cout<<"Enter y: ";
    cin>>y;
    cout<<"Finding smallest or equal number."<<endl;
    if(x<y){
        cout<<"X is smaller.";
    }
    else if(x==y){
        cout<<"A and B are equal.";
    }
    else{
        cout<<"B is smaller.";
    }
    return 0;
}