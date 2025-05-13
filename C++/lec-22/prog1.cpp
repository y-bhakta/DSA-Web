// Multilevel Inheritance
#include <iostream>
using namespace std;
class A{
    public:
        void displayA(){
            cout << "Class A" << endl;
        }
};
class B: public A{
    public:
        void displayB(){
            cout << "Class B" << endl;
        }
};
class C: public B{
    public:
        void displayC(){
            cout << "Class C" << endl;
        }
};
int main(){
    C c;
    c.displayA(); // Accessing class A method
    c.displayB(); // Accessing class B method   
    c.displayC(); // Accessing class C method
    return 0;
}