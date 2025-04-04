#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter a: ";
    cin>>a;
    cout<<"Enter b: ";
    cin>>b;
    cout<<"Finding greatest number."<<endl;
    if(a>b){
        cout<<"A is greater.";
    }
    else{
        cout<<"B is greater.";
    }
    cout<<endl;
    int x,y;
    cout<<"Enter x: ";
    cin>>x;
    cout<<"Enter y: ";
    cin>>y;
    cout<<"Finding smallest number."<<endl;
    if(x<y){
        cout<<"X is smaller.";
    }
    else{
        cout<<"Y is smaller.";
    }
    return 0;
}