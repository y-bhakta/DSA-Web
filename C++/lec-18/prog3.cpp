//passing throug pointer
#include <iostream>
using namespace std;
int add(int *a,int *b){
    cout<<"Add: "<<*a+*b<<endl;
}
int main(){
    int a,b,*p,*q;
    cout << "Enter a number : ";
    cin >> a;
    cout << "Enter b number : ";
    cin >> b;
    p=&a;
    q=&b;
    add(p,q);
    return 0;
}