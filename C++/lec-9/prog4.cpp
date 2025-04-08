#include<iostream>
using namespace std;
int main(){
    cout<<"While loop!!"<<endl;
    int i=5;
    while (i>0){
        cout<<i<<endl;
        i--;
    }
    cout<<"Do While loop!!"<<endl;
    int j=5;
    do{
        cout<<j<<endl;
        j--;
    }while (j>0);
    cout<<"For loop!!"<<endl;
    int s;
    for(s=5;s>0;s--){
        cout<<s<<endl;
    }
    return 0;
}