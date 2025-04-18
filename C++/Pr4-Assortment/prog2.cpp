#include<iostream>
using namespace std;
int main(){
    int n,max;
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
    max=arr[0][0];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(arr[i][j]>max){
                max=arr[i][j];
            }
        }
    }
    cout<<endl;
    cout<<"The Largest element in array is: "<<max<<endl;
    return 0;
}