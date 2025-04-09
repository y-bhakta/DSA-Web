#include<iostream>
using namespace std;
int main(){
    int i,n,f,f1=0,f2=1;
    cout<<"Enter the number of terms: ";    
    cin>>n;
    cout<<"Fibonacci series: "<<endl;
    for(i=1;i<=n;i++){
        f=f1;
        f1=f+f2;
        f2=f;
        cout<<f<<" ";
    }
    cout<<endl;
    return 0;
}