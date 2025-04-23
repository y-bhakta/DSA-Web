#include<iostream>
using namespace std;
float input1(){
    float a,b;
    cout<<"Enter First Number: ";
    cin>>a;
    return a;
}
float input2(){
    float b;
    cout<<"Enter Second Number: ";
    cin>>b;
    return b;
}
int sum(){
    float a,b;
    a=input1();
    b=input2();
    cout<<"Addition of "<< a <<" and "<< b <<" is : "<<a+b<<endl;
}
int sub(){
    float a,b;
    a=input1();
    b=input2();
    cout<<"Subtraction of "<< a <<" and "<< b <<" is : "<<a-b<<endl;
}
int mul(){
    float a,b;
    a=input1();
    b=input2();
    cout<<"Multiplication of "<< a <<" and "<< b <<" is : "<<a*b<<endl;
}
int div(){
    float a,b;
    a=input1();
    b=input2();
    cout<<"Division of "<< a <<" and "<< b <<" is : "<<a/b<<endl;
}
int mod(){
    int a,b;
    a=input1();
    b=input2();
    cout<<"Modulus of "<< a <<" and "<< b <<" is : "<<a%b<<endl;
}
int main(){
    int choice;
    do{
        cout<<"Press 1 for Addition"<<endl;
        cout<<"Press 2 for Subtraction"<<endl;
        cout<<"Press 3 for Multiplication"<<endl;
        cout<<"Press 4 for Division"<<endl;
        cout<<"Press 5 for Modulus"<<endl;
        cout<<"Press 0 for Exit"<<endl;
        cout<<endl;
        cout<<"Enter your choice: ";
        cin>>choice;
        switch (choice){
            case 1:
                cout<<"-------------------------------------"<<endl;
                sum();
                cout<<"-------------------------------------"<<endl;
                break;
            case 2:
                cout<<"-------------------------------------"<<endl;
                sub();
                cout<<"-------------------------------------"<<endl; 
                break;
            case 3:
                cout<<"-------------------------------------"<<endl;
                mul();
                cout<<"-------------------------------------"<<endl; 
                break;
            case 4:
                cout<<"-------------------------------------"<<endl;
                div();
                cout<<"-------------------------------------"<<endl; 
                break;
            case 5:
                cout<<"-------------------------------------"<<endl;
                mod();
                cout<<"-------------------------------------"<<endl; 
                break;
            case 0:
                cout<<"-------------------------------------"<<endl;
                cout<<"Exiting the program."<<endl;
                cout<<"-------------------------------------"<<endl;
                break;    
            default:
                cout<<"-------------------------------------"<<endl;
                cout<<"Invalid choice, please try again."<<endl;
                cout<<"-------------------------------------"<<endl;
                break;
        }
    }while(choice!=0);
    return 0;
}