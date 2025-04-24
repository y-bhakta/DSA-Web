//passing throug value
#include <iostream>
using namespace std;
int add(int a,int b){
    cout<<"Add: "<<a+b<<endl;
}
int main(){
    int a;
    cout << "Enter a number : ";
    cin >> a;
    add(a,5);
}