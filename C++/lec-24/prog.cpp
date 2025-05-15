//Absraction
#include <iostream>
using namespace std;
class Shape{
    public:
        virtual void area() = 0;
};
class Circle: public Shape{
    public:
        int radius;
        void area(){
            cout<<"Enter radius of circle: ";
            cin>>radius;
            cout<<"Area of Circle: "<<3.14*radius*radius<<endl;
        }
};
int main(){
    Circle c;
    c.area();
    return 0;
}