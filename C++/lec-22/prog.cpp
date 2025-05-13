//Single Inheritance
#include <iostream>
using namespace std;
class Parent{
    public:
        int a,b;
        void show(){
            cout << "Parent class" << endl;
        }
};
class Child: public Parent{
    public:
        void set(){
            cout << "Enter A numbers: ";
            cin >> Parent::a;
            cout << "Enter B numbers: ";
            cin >> Parent::b;
        }
        void showChild(){
            cout << "Child class" << endl;
        }
        void display(){
            cout << "A: " << Parent::a << endl;
            cout << "B: " << Parent::b << endl;
        }
};
int main(){
    Child c;
    c.show();
    c.showChild();
    c.set();
    c.display();
    return 0;
}