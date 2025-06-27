// Hierarchical Inheritance – Area of Shapes
#include <iostream>
using namespace std;
class Shape {
protected:
    float radius, length, breadth;
public:
    void setCircle() {
        cout << "\n----- Circle -----\n";
        cout << "Enter radius(in meters): ";
        cin >> radius;
    }
    void setRectangle() {
        cout << "\n----- Rectangle -----\n";
        cout << "Enter length(in meters): ";
        cin >> length;
        cout << "Enter breadth(in meters): ";
        cin >> breadth;
    }
};
class Circle : public Shape {
public:
    void calculateArea() {
        float area = 3.14 * radius * radius;
        cout << "\nArea of Circle: " << area <<" m^2"<<endl;
    }
};
class Rectangle : public Shape {
public:
    void calculateArea() {
        float area = length * breadth;
        cout << "\nArea of Rectangle: " << area <<" m^2"<< endl;
    }
};
int main(){
    Circle c;
    c.setCircle();
    c.calculateArea();
    Rectangle r;
    r.setRectangle();
    r.calculateArea();
    cout << "\n----- Program Ended -----\n";
    return 0;
}