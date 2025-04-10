#include<iostream>
using namespace std;
int main(){
    int n,fd,ld;
    cout<<"Enter n: ";
    cin>>n;
    ld=n%10;
    while (n>0){
        fd=n%10;
        n=n/10;
    }
    cout<<"Sum of first and last digits is: "<<fd+ld;
    return 0;
}