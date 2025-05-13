//Complie Time
#include <iostream>
using namespace std;
class Add{
    public:
        int add(int a, int b){
            cout<<"The sum of "<<a<<" and "<<b<<" is: "<<a+b<<endl;
        }
        double add(double a, double b){
            cout<<"The sum of "<<a<<" and "<<b<<" is: "<<a+b<<endl;
        }
        int add(int a, int b, int c){
            cout<<"The sum of "<<a<<" "<<b<<" "<<c<<" is: "<<a+b+c<<endl;
        }
        double add(double a, double b, double c){
            cout<<"The sum of "<<a<<" "<<b<<" "<<c<<" is: "<<a+b+c<<endl;
        }
};
int main(){
    Add a;
    a.add(1, 2);
    a.add(1.5, 2.5);
    a.add(1, 2, 3);
    a.add(1.5, 2.5, 3.5);
}