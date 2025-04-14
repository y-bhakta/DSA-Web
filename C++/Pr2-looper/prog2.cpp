#include<iostream>
using namespace std;
int main(){
    int n,tn=0;
    cout<<"Enter a number: ";
    cin>>n;
    while(n!=0){
        tn+=1;
        n=n/10;
    }
    cout<<"The number of digits in the number is: "<<tn<<endl;
    return 0;
}