#include<iostream>
using namespace std;
int main(){
    int a,b,c,d;
    cout<<"Enter a: ";
    cin>>a;
    cout<<"Enter b: ";
    cin>>b;
    cout<<"Enter c: ";
    cin>>c;
    cout<<"Enter d: ";
    cin>>d;
    cout<<"Finding max amoung inpugt.."<<endl;
    if(a>b){
        if(a>c){
            if(a>d){
                cout<<"A is max";
            }
            else{
                cout<<"D is max";
            }
        }
        else{
            if(c>d){
                cout<<"C is max";
            }
            else{
                cout<<"D is max";
            }
        }
    }
    else{
        if(b>c){
            if(b>d){
                cout<<"B is max";
            }
            else{
                cout<<"D is max";
            }
        }
        else{
            if(c>d){
                cout<<"C is max";
            }
            else{
                cout<<"D is max";
            }
        }
    }
    cout<<endl;
    int x,y,z,s;
    cout<<"Enter x: ";
    cin>>x;
    cout<<"Enter y: ";
    cin>>y;
    cout<<"Enter z: ";
    cin>>z;
    cout<<"Enter s: ";
    cin>>s;
    cout<<"Finding min amoung inpugt.."<<endl;
    if(x<y){
        if(x<z){
            if(x<s){
                cout<<"X is min";
            }
            else{
                cout<<"S is min";
            }
        }
        else{
            if(z<s){
                cout<<"Z is min";
            }
            else{
                cout<<"S is min";
            }
        }
    }
    else{
        if(y<z){
            if(y<s){
                cout<<"Y is min";
            }
            else{
                cout<<"S is min";
            }
        }
        else{
            if(z<s){
                cout<<"Z is min";
            }
            else{
                cout<<"S is min";
            }
        }
    }
}