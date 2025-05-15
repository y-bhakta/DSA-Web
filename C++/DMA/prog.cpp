//Procedural Way
#include <iostream>
using namespace std;
int main(){
    int* arr,size;
    cout<<"Enter size of array: ";
    cin>>size;
    arr = new int[size];
    if(arr == NULL){
        cout<<"Memory allocation failed";
        return 0;
    }
    else{
        cout<<"Memory allocation successful";
    }
    cout<<endl;
    delete[] arr;
    cout<<"Memory deallocated successfully";
    return 0;
}