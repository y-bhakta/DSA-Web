//call by value
#include<iostream>
using namespace std;
int increment(int n){
    n = n + 10;
}
int main(){
    int a=5;
    cout << "Value of a: " << a << endl;
    increment(a);
    cout << "Value of a after increment: " << a << endl;
}