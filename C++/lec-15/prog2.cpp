#include<iostream>
using namespace std;
int main(){
    int n,max,min;
    cout<<"Enter rows and col: ";
    cin>>n;
    int a[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<"Enter a["<<i<<"]["<<j<<"]: ";
            cin>>a[i][j];
        }
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    max=a[0][0];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(a[i][j]>max){
                max=a[i][j];
            }
        }
    }
    cout<<"Max: "<<max<<endl;
    min=a[0][0];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(a[i][j]<min){
                min=a[i][j];
            }
        }
    }
    cout<<"Min: "<<min<<endl;
    return 0;
}