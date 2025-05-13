//Run Time
#include <iostream>
using namespace std;
class Add{
    public:
        void add(int a, int b){
            cout<<"The sum of "<<a<<" and "<<b<<" is: "<<a+b<<endl;
        }
};
class Add1: public Add{
    public:
        void add(double a, double b){
            cout<<"The sum of "<<a<<" and "<<b<<" is: "<<a+b<<endl;
        }
};
int main(){
    Add1 a;
    a.add(1,25);
    a.add(1.5, 2);
    return 0;
}