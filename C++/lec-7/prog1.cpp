#include<iostream>
using namespace std;
int main(){
    int rollno;
    float avg,sub1,sub2,sub3,total;
    string name;
    cout<<"Enter Name: ";
    cin>>name;
    cout<<"Enter Roll No: ";
    cin>>rollno;
    cout<<"Enter Subject 1 marks: ";
    cin>>sub1;
    cout<<"Enter Subject 2 marks: ";
    cin>>sub2;
    cout<<"Enter Subject 3 marks: ";
    cin>>sub3;
    total= sub1 + sub2 + sub3;
    avg= total/3;
    cout<<endl;
    cout<<"Your Student Data:-"<<endl;
    cout<<endl;
    cout<<"Name: "<<name<<endl;
    cout<<"Rool No: "<<rollno<<endl;
    cout<<"Subject 1: "<<sub1<<endl;
    cout<<"Subject 2: "<<sub2<<endl;
    cout<<"Subject 3: "<<sub3<<endl;
    cout<<"Total: "<<total<<endl;
    cout<<"Avg: "<<avg<<"%"<<endl;
    if(sub1<=100 && sub2<=100 && sub3<=100 && sub1>=0 && sub2>=0 && sub3>=0){
        if(sub1>=35 && sub2>=35 && sub3>=35){
            cout<<"You have Pass the exam."<<endl;
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
        }
        else{
            cout<<"You Failed!!"<<endl;
        }
    }
    else{
        cout<<"Enter proper marks.Between 0-100!!!! OR Your input is negative"<<endl;
    }
    return 0;
}