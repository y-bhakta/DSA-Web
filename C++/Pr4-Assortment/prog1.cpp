#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of elements you want in array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter Array's element: "<<endl;
    for(int i=0;i<n;i++){
        cout<<"Element arr["<<i<<"]: ";
        cin>>arr[i];
    }
    cout<<endl;
    cout<<"Negative Array elements are: ";
    for(int i=0;i<n;i++){
        if(arr[i]<0){
            cout<<arr[i]<<",";
        }
    }
    return 0;
}