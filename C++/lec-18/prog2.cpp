//passing throug address
#include <iostream>
using namespace std;
int add(int *a,int *b){
    cout<<"Add: "<<*a+*b<<endl;
}
int main(){
    int a,b;
    cout << "Enter a number : ";
    cin >> a;
    cout << "Enter b number : ";
    cin >> b;
    add(&a,&b);
    return 0;
}