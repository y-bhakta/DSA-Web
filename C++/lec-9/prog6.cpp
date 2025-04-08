#include<iostream>
using namespace std;
int main(){
    cout<<"While loop!!"<<endl;
    int i=10;
    while (i>=2){
        cout<<i<<endl;
        i-=2;
    }
    cout<<"Do While loop!!"<<endl;
    int j=10;
    do{
        cout<<j<<endl;
        j-=2;
    }while (j>=2);
    cout<<"For loop!!"<<endl;
    int s;
    for(s=10;s>=2;s-=2){
        cout<<s<<endl;
    }
    return 0;
}