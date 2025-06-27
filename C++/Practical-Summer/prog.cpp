// Create a class Student to store 5 student names using an array. Create a derived class
// Display that will show all student names using single inheritance.
#include <iostream>
using namespace std;
class Student {
protected:
    string names[5];
public:
    void setNames() {
        cout << "----- Enter 5 student names -----\n";
        for (int i = 0; i < 5; i++) {
            cout << "Name " << i + 1 << ": ";
            cin >> names[i];
        }
    }
};
class Display : public Student {
public:
    void showNames() {
        cout<<"\n----- Student Names -----\n";
        for (int i = 0; i < 5; i++) {
            cout << "Name " << i + 1 << ": " << names[i] << endl;
        }
    }
};
int main(){
    Display d;
    d.setNames();
    d.showNames();
    return 0;
}