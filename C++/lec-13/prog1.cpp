#include<iostream>
using namespace std;
int main(){
    int a[]={1,2,3,4,5,6,7,8,9,10};
    for(int i=0;i<10;i++){
        cout<<a[i]<<" ";
    }
    int arr[5];
    cout<<endl;
    for(int i=0;i<5;i++){
        cout<<"Enter element "<<i+1<<": ";
        cin>>arr[i];
    }
    cout<<"The elements in the array are: ";
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}