#include<iostream>
using namespace std;
class Student{
    int roll;
    string name;
public:
    void input();
    void display();
};
void Student::input(){
    cout<<"Enter roll no: ";
    cin>>this->roll;
    cout<<"Enter name: ";
    cin>>this->name;
}
void Student::display(){
    cout<<"Roll no: "<<this->roll<<endl;
    cout<<"Name: "<<this->name<<endl;
}
int main(){
    Student s;
    s.input();
    s.display();
}