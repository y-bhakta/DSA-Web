#include<iostream>
using namespace std;  
class Student{
    int roll;
    string name;
    static int grid;
    public:
        void input(){
            cout << "Enter roll number: ";
            cin >> roll;
            cout << "Enter name: ";
            cin >> name;
        }
        void output(){
            cout << "Roll number: " << roll << endl;
            cout << "Name: " << name << endl;
            cout << "GR ID: " << grid << endl;
        }   
}; 
int Student:: grid= 9595;
int main(){
    Student s;
    s.input();
    s.output();
    return 0;
}