#include<iostream>
using namespace std;
int main(){
    int *a,**b,***c,num;
    cout << "Enter a number : ";
    cin >> num;
    a=&num;
    b=&a;
    c=&b;
    cout << "Value of a: " << *a << endl;
    cout << "Value of b: " << **b << endl;
    cout << "Value of c: " << ***c << endl;
    cout << "Address of a: " << a << endl;
    cout << "Address of b: " << b << endl;
    cout << "Address of c: " << c << endl;
    return 0;
}