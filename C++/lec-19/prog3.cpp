#include<iostream>
using namespace std;
class student{
    int roll;
    string name;
    float fees;
    public:
        student(int r, string n, float f){
            roll = r;
            name = n;
            fees = f;
        }
        void display(){
            cout << "Roll number: " << roll << endl;
            cout << "Name: " << name << endl;
            cout << "Fees: " << fees << endl;
        }
};
int main(){
    student s1(101, "John", 5000.50);
    s1.display();
}