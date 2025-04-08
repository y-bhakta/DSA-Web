#include<iostream>
using namespace std;
int main(){
    cout<<"While loop!!"<<endl;
    int i=2;
    while (i<=10){
        cout<<i<<endl;
        i+=2;
    }
    cout<<"Do While loop!!"<<endl;
    int j=2;
    do{
        cout<<j<<endl;
        j+=2;
    }while (j<=10);
    cout<<"For loop!!"<<endl;
    int s;
    for(s=2;s<=10;s+=2){
        cout<<s<<endl;
    }
    return 0;
}