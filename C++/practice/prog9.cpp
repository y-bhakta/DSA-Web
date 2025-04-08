#include<iostream>
using namespace std;
int main() {
    int n,m,s;
    cout << "Enter number: ";
    cin >> n;
    cout << "Enter number: ";
    cin >> m;
    cout << "Enter number: ";
    cin >> s;
    if(n>m) {
        if (n>s) {
            cout << "First number is greater" << endl;
        } 
        else {
            cout << "Third number is greater" << endl;
        }
    }
    else{
        if(m>s) {
            cout << "Second number is greater" << endl;
        } 
        else {
            cout << "Third number is greater" << endl;
        }
    }    
    return 0;
}