#include<iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    if(n%2==0) {
        cout << "Even" << endl;
    } else {
        cout << "ODD" << endl;
    }
    return 0;
}