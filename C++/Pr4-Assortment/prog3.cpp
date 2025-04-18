#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of Rows and Cols you want in array: ";
    cin>>n;
    int arr[n][n];
    cout<<"Enter Array's element: "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<"Element arr["<<i<<"]["<<j<<"]: ";
            cin>>arr[i][j];
        }
    }
    cout<<endl;
    cout<<"The Matrix is: "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    cout<<"The Transpose Matrix of array is: "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[j][i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}