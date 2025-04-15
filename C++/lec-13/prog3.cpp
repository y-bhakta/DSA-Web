#include<iostream>
using namespace std;
int main(){
    int a[]={1,2,3,4,5,6,7,8,9,10};
    int n=sizeof(a)/sizeof(a[0]);
    cout<<"The size of the array is: "<<n<<endl;
    return 0;
}