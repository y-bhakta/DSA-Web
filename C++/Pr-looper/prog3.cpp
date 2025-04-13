#include<iostream>
using namespace std;    
int main(){
    int n,fn,ln;
    cout<<"Enter a number: ";
    cin>>n;
    ln=n%10;
    while(n!=0){
        fn=n%10;
        n=n/10;
    }
    cout<<"The first digit is: "<<fn<<endl;
    cout<<"The last digit is: "<<ln<<endl;
    cout<<"The sum of the first and last digit is: "<<fn+ln<<endl;
    return 0;
}