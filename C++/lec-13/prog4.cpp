#include<iostream>
using namespace std;
int main(){
    int arr[5],in,el;
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
    cout<<"Enter the index to be update: ";
    cin>>in;
    cout<<"Enter the element to be updated: ";
    cin>>el;
    arr[in]=el;
    cout<<"The elements in the array are: ";
    for(int e:arr){
        cout<<e<<" "<<endl;
    }
    return 0;
}