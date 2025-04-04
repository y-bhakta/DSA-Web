#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter a: ";
    cin>>a;
    cout<<"Enter b: ";
    cin>>b;
    cout<<"Enter c: ";
    cin>>c;
    cout<<"Finding max amoung inpugt.."<<endl;
    if(a>b){
        if(a>c){
            cout<<"A is max.";
        }
        else{
            cout<<"C is max.";
        }
    }
    else{
        if(b>c){
            cout<<"B is max.";
        }
        else{
            cout<<"C is max.";
        }
    }
    cout<<endl;
    int x,y,z;
    cout<<"Enter x: ";
    cin>>x;
    cout<<"Enter y: ";
    cin>>y;
    cout<<"Enter z: ";
    cin>>z;
    cout<<"Finding min amoung inpugt.."<<endl;
    if(x<y){
        if(x<z){
            cout<<"X is min.";
        }
        else{
            cout<<"Z is min.";
        }
    }
    else{
        if(y<z){
            cout<<"Y is min.";
        }
        else{
            cout<<"Z is min.";
        }
    }
}