#include<iostream>
using namespace std;
int main(){
    char a='a';
    do{
        cout<<a<<" ";
        a+=4;
    }while (a<='z');
    return 0;
}