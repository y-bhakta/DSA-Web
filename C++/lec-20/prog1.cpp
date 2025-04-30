#include<iostream>
using namespace std;
class Student{
    int rollno;
    static int poy;
    string name;
public:
    void input(int r, string n){
        this->rollno = r;
        this->name = n;
    }
    void display(){
        cout<<"Roll no: "<<this->rollno<<endl;
        cout<<"Name: "<<this->name<<endl;
        cout<<"Pass Out Year: "<<poy<<endl;
    }
};
int Student::poy = 2024;
int main(){
    int n,rollno;
    string name;
    cout<<"Enter number of students: ";
    cin>>n;
    Student s[n];
    for(int i=0;i<n;i++){
        cout<<endl;
        cout<<"Enter details of student "<<i+1<<endl;
        cout<<"Enter roll no: ";
        cin>>rollno;
        cout<<"Enter name: ";
        cin>>name;
        s[i].input(rollno,name);
    }
    cout<<endl<<"------------------ Details of students ---------------------------"<<endl;
    for(int i=0;i<n;i++){
        cout<<endl;
        cout<<"Student "<<i+1<<endl;
        s[i].display();
    }
    return 0;
}