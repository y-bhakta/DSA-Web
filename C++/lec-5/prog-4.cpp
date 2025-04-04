#include<iostream>
using namespace std;
int main(){
    int avg;
    cout<<"Enter your percentage: ";
    cin>>avg;
    if(avg>100){
        cout<<"Enter proper percentage.This is invalied!!";
    }
    else if (avg== 100 || avg>=80){
        cout<<"A Grade";
    }
    else if (avg>=60){
        cout<<"B Grade";
    }
    else if (avg>=40){
        cout<<"C Grade";
    }
    else if (avg>=35){
        cout<<"You somehow pass the exam..";
    }
    else if(avg<=33 && avg>=0){
        cout<<"You failed the exam.";
    }
    else{
        cout<<"Your input is in negative!!";
    }
    return 0;
}