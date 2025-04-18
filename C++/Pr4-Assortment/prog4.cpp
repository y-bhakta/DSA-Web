#include<iostream>
using namespace std;   
int main(){
    int row,col,rIndex,cIndex,sum=0;
    cout<<"Enter number of Rows you want in array: ";
    cin>>row;
    cout<<"Enter number of Cols you want in array: ";
    cin>>col;
    int arr[row][col];
    cout<<"Enter Array's element: "<<endl;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<"Element arr["<<i<<"]["<<j<<"]: ";
            cin>>arr[i][j];
        }
    }
    cout<<endl;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    cout<<"Enter Row index you want the sum of: ";
    cin>>rIndex;
    cout<<"Elements of Row "<<rIndex<<" are: ";
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(i==rIndex){
                sum+=arr[i][j];
                cout<<arr[i][j]<<" ";
            }
        }
    }
    cout<<endl;
    cout<<"The sum of Row "<<rIndex<<" is: "<<sum<<endl; 
    cout<<endl;
    sum=0;
    cout<<"Enter Col index you want the sum of: ";
    cin>>cIndex;
    cout<<"Elements of Col "<<cIndex<<" are: ";
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(j==cIndex){
                sum+=arr[i][j];
                cout<<arr[i][j]<<" ";
            }
        }
    }
    cout<<endl;
    cout<<"The sum of Row "<<cIndex<<" is: "<<sum<<endl; 
    return 0;
}