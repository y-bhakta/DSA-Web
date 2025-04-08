#include<iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter your percentage: ";
    cin >> n;
    if(n>=90) {
        cout << "Grade A" << endl;
    } 
    else if(n>=80) {
        cout << "Grade B" << endl;
    } 
    else if(n>=70) {
        cout << "Grade C" << endl;
    } 
    else{
        cout << "Grade D" << endl;
    }
    return 0;
}