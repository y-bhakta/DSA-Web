//Multiple inheritance
#include <iostream>
using namespace std;
class A{
    public:
        void displayA(){
            cout << "Class A" << endl;
        }
};
class B{
    public:
        void displayB(){
            cout << "Class B" << endl;
        }
};
class C: public A, public B{
    public:
        void displayC(){
            cout << "Class C" << endl;
        }
};
int main(){
    C c;
    c.displayA();
    c.displayB(); 
    c.displayC(); 
}