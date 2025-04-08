#include<iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter your marks: ";
    cin >> n;
    if(n>=40) {
        cout << "Pass" << endl;
    } else {
        cout << "Fail" << endl;
    }
    return 0;
}