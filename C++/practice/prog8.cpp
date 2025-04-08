#include<iostream>
using namespace std;
int main() {
    int n,m;
    cout << "Enter number: ";
    cin >> n;
    cout << "Enter number: ";
    cin >> m;
    if(n>m) {
        cout << "First number is greater" << endl;
    } else {
        cout << "Second number is greater" << endl;
    }
    return 0;
}