#include<iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter your Age: ";
    cin >> n;
    if(n>=18) {
        cout << "Eligible to vote" << endl;
        if(n>=25) {
            cout << "eligible for contesting an election " << endl;
        } else {
            cout << "Not eligible for contesting an election " << endl;
        }
    } else {
        cout << "Not Eligible to vote  " << endl;
    }
    return 0;
}