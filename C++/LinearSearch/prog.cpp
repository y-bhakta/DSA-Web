#include<bits/stdc++.h>
using namespace std;
int linearSearch(int arr[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            return i; 
        }
    }
    return -1;
}
int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array: "<<endl;
    for(int i=0;i<n;i++){
        cout<<"Enter arr["<<i<<"]: ";
        cin>>arr[i];
    }
    int key;
    cout<<"Enter the element to search: ";
    cin>>key;
    int index= linearSearch(arr, n, key);
    if(index!=-1){
        cout<<"Element "<<key<<" found at index: "<<index<<endl;
    }else{
        cout<<"Element not found in the array."<<endl;
    }
    return 0;
}