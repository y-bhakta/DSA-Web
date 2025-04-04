#include<iostream>
using namespace std;
int main(){
    string Name;
    int id;
    float salary;
    cout<<"Enter Your Name: ";
    cin>>Name;
    cout<<"Enter Your Employee ID: ";
    cin>>id;
    cout<<"Enter Your Salary(in months): ";
    cin>>salary;
    cout<<"The Employe record that you enter is : "<<endl;
    cout<<"----------------------------------------------------"<<endl;
    cout<<"Name: "<<Name<<endl;  
    cout<<"Age: "<<id<<endl;
    cout<<"Percentage: "<<salary<<"rs per month"<<endl;
    cout<<"----------------------------------------------------";
}