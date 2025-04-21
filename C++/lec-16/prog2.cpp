//TSRN
#include<iostream>
using namespace std;
void print(int a, int b){
    cout<<"sum: "<<a+b<<endl;
}
int main(){
    int x,y;
    cout<<"Enter two numbers: ";
    cin>>x>>y;
    print(x, y);
    print(33, 44);
    return 0;
}