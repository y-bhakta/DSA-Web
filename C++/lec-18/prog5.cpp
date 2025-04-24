#include<iostream>
using namespace std;
int main(){
    int a;
    cout << "Enter a number : ";
    cin >> a;
    int &n=a;
    cout << "Value of a: " << a << endl;
    cout << "Value of n: " << n << endl;
    cout << "Address of a: " << &a << endl;
    cout << "Address of n: " << &n << endl;
    return 0;
}