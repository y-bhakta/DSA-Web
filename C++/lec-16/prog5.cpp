// Nested functions
#include <iostream>
using namespace std;
int add(int a, int b) {
    cout << "Sum: " << a + b << endl;
}
int multiply(int a, int b) {
    cout << "Product: " << a * b << endl;
}
int sub(int a, int b) {
    cout << "Subtraction: " << a - b << endl;
}
int Div(int a, int b) {
    cout << "Division: " << a / b << endl;
}
int calculate(int a, int b) {
    add(a, b) ;
    multiply(a, b);
    sub(a, b);
    Div(a, b);
}
int main() {
    int a,b;
    cout<<"Enter a: ";
    cin>>a;
    cout<<"Enter b: ";
    cin>>b;
    cout<<"-------------------"<<endl;
    cout<<"Calculating..."<<endl;
    cout<<"-------------------"<<endl;
    calculate(a, b);
    return 0;
}