#include<iostream>
using namespace std;
int main(){
    int n,i,sum=0;
    cout<<"Enter the number of elements: ";
    cin>>n;
    for(i=1;i<=n;i++){
        sum+=i;
    }
    cout<<"Sum of first "<<n<<" natural numbers is: "<<sum<<endl;
    return 0;   
}