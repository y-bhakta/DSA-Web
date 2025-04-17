#include<iostream>
using namespace std;
int main(){
    int row,col,ch,index;
    cout<<"Enter rows: ";
    cin>>row;
    cout<<"Enter col: ";
    cin>>col;
    int a[row][col];
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<"Enter a["<<i<<"]["<<j<<"]: ";
            cin>>a[i][j];
        }
    }
    cout<<endl;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    do{
        int sum=0;
        cout<<"--------------------------------------------"<<endl;
        cout<<"Enter 1 for row sum: "<<endl;
        cout<<"Enter 2 for col sum: "<<endl;
        cout<<"Enter 3 for diagonal sum: "<<endl;
        cout<<"Enter 0 for exit: "<<endl;
        cout<<"Enter your choice: ";
        cin>>ch;
        switch(ch){
            case 1:
                cout<<"Enter row index: ";
                cin>>index;
                for(int i=0;i<row;i++){
                    for(int j=0;j<col;j++){
                        if(i==index){
                            sum+=a[i][j];
                        }
                    }
                }
                cout<<"Sum of row "<<index<<" is: "<<sum<<endl;
                break;
            case 2:
                cout<<"Enter col index: ";
                cin>>index;
                for(int i=0;i<row;i++){
                    for(int j=0;j<col;j++){
                        if(j==index){
                            sum+=a[i][j];
                        }
                    }
                }
                cout<<"Sum of col "<<index<<" is: "<<sum<<endl;
                break;
            case 3:
                for(int i=0;i<row;i++){
                    for(int j=0;j<col;j++){
                        if(j==i){
                            cout<<a[i][j]<<" ";
                        }else{
                            cout<<" ";
                        }
                    }
                    cout<<endl;
                }
                for(int i=0;i<row;i++){
                    for(int j=0;j<col;j++){
                        if(i==j){
                            sum+=a[i][j];
                        }
                    }
                }
                cout<<"Sum of diagonal is: "<<sum<<endl;
                break; 
            case 0:
                break; 
            default:
                cout<<"Invalid choice"<<endl;
                break;              
        }
    }while(ch!=0);
    return 0;
}