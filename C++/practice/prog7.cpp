#include<iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter year: ";
    cin >> n;
    if(n%4==0) {
        cout << "Leap year" << endl;
    } else {
        cout << "No leap year" << endl;
    }
    return 0;
}