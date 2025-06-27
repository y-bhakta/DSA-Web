// Create a multilevel inheritance structure
#include <iostream>
using namespace std;
class Student {
protected:
    string names;    
public:
    void setNames() {
        cout<<"\n----- Enter student names -----\n";
        cout<<"Your Name: ";
        cin>>names;
    }    
};
class Marks : public Student {
public:
    int marks[3];
    int total=0;
public:
    void setMarks() {
        cout<<"\n----- Enter marks -----\n";
        for (int i = 0; i < 3; i++) {
            cout << "Marks of Subject " << i + 1 << " (Out of 100): ";
            cin >> marks[i];
            total += marks[i];
        }
    }
};
class Result : public Marks {
public:
    void showResult() {
        cout << "\n----- Student Result -----\n";
        cout << "Name: " << names << endl;
        cout << "Total Marks: " << total << endl;
        cout << "Percentage: " << (total / 3.0) << "%" << endl;
    }
};
int main(){
    Result r;
    r.setNames();
    r.setMarks();
    r.showResult(); 
    return 0;
}