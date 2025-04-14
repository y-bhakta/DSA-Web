#include<iostream>
using namespace std;
int main(){
    int n;
    char grade;
    cout << "Enter a Percentage(0-100): ";
    cin >> n;
    //asigning grade based on percentage
    if(n>=90){
        grade = 'A';
    }
    else if(n>=80){
        grade = 'B';
    }
    else if(n>=60){
        grade = 'C';
    }
    else if(n>=40){
        grade = 'D';
    }
    else{
        grade = 'F';
    }
    //using ternary operator
    n>100 || n<0 ? cout<<"Invalid Percentage(Enter Percentage between 0-100)" 
            :n>=90 ? cout << "Your Grade is A. "
                : n>=80 ? cout << "Your Grade is B. " 
                        : n>=60 ? cout << "Your Grade is C. " 
                                : n>=40 ? cout << "Your Grade is D. " 
                                        : cout << "Your Grade is F. ";
    //using switch case                                        
    switch(grade){
        case 'A': 
            cout << "Excellent Work!"; 
            break;
        case 'B': 
            cout << "Well Done."; 
            break;
        case 'C': 
            cout << "Good Job."; 
            break;
        case 'D': 
            cout << "You Passed, but you could do better."; 
            break;
        case 'F': 
            cout << "Sorry you failed."; 
            break;
    } 
    //using if else statement
    if(grade=='F'){
        cout<<" Please try again next time."<<endl;
    }   
    else{
        cout<<" Congratulation! You are eligeble for the naxt level."<<endl;
    }                                        
    return 0;
}