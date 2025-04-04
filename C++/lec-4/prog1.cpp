#include<iostream>
using namespace std;
int main(){
    int age;
    long int mobile;
    string fname,lname,email,address;
    cout<<"Enter your first name: ";
    cin>>fname;
    cout<<"Enter your last name: ";
    cin>>lname;
    cout<<"Enter your email: ";
    cin>>email;
    cout<<"Enter your Age: ";
    cin>>age;
    cout<<"Enter your contact number: ";
    cin>>mobile;
    cout<<"Enter your adress: ";
    cin>>address;
    cout<<endl;
    cout<<"Name: "<<fname<<" "<<lname<<endl;
    cout<<"Email: "<<email<<endl;
    cout<<"Age: "<<age<<endl;
    cout<<"Contact: "<<mobile<<endl;
    cout<<"Address: "<<address<<endl;

    return 0;
}