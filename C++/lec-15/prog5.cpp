#include<iostream>
using namespace std;
int main(){
    int r,c;
    cout<<"Enter rows: ";
    cin>>r;
    cout<<"Enter col: ";
    cin>>c;
    int a[r][c],b[r][c],d[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<"Enter a["<<i<<"]["<<j<<"]: ";
            cin>>a[i][j];
        }
    }
    cout<<endl;
    cout<<"Matrix B: "<<endl;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<"Enter b["<<i<<"]["<<j<<"]: ";
            cin>>b[i][j];
        }
    }
    cout<<endl;
    cout<<"Matrix C: "<<endl;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<"Enter d["<<i<<"]["<<j<<"]: ";
            cin>>d[i][j];
        }
    }
    cout<<endl;
    cout<<"ALL MATRIX IN ONE LINE....."<<endl;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<"  ";
        for(int j=0;j<c;j++){
            cout<<b[i][j]<<" ";
        }
        cout<<"  ";
        for(int j=0;j<c;j++){
            cout<<d[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}