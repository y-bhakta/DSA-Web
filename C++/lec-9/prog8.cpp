#include<iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter the number of rows: ";
    cin>>n;
    int i,j,ln,mn,sn,nn;
    cout<<"1 "<<endl;
    for(i=1;i<=n;i++){
        cout<<"1 ";
        for(j=1;j<=i;j++){
            if(i==1 && j==1){
                ln=i+j;
                cout<<ln;
            }
            if(j==1 && i!=1){
                nn=ln+1;
                cout<<nn<<" ";
                sn=ln;
            }
            if(j!=1){
                mn=nn+sn;
                cout<<mn<<" ";
                nn=mn;
                ln=mn;
            }
        }
        cout<<endl;
    }
    return 0;
}