#include<iostream>
using namespace std;
int main(){
    string Name;
    int age;
    float avg;
    cout<<"Enter Your Name: ";
    cin>>Name;
    cout<<"Enter Your Age: ";
    cin>>age;
    cout<<"Enter Your Percentage: ";
    cin>>avg;
    cout<<"The Student Record that you enter is : "<<endl;
    cout<<"Name: "<<Name<<endl;  
    cout<<"Age: "<<age<<" year's old"<<endl;
    cout<<"Percentage: "<<avg<<"%"<<endl;
}