#include<iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    if(n%5==0) {
        cout << "Divisible by 5" << endl;
    } else {
        cout << "Not Divisible by 5" << endl;
    }
    return 0;
}