//Hybrid Inheritance
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
class C: public A{
    public:
        void displayC(){
            cout << "Class C" << endl;
        }
};
class D: public B, public C{
    public:
        void displayD(){
            cout << "Class D" << endl;
        }
};
int main(){
    D d;
    d.B::displayA(); 
    d.displayB();
    d.C::displayA();
    d.displayC();
    d.displayD();
    return 0;
}