#include<iostream>
using namespace std;
int main(){
    int n;
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
    cout<<endl;
    cout<<"Positive: "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(a[i][j]>0){
                cout<<a[i][j]<<" ";
            }
        }
    }
    cout<<endl<<"Negative: "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(a[i][j]<0){
                cout<<a[i][j]<<" ";
            }
        }
    }
    return 0;
}