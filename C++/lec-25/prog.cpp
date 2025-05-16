#include <iostream>
using namespace std;
template <typename T>
T add(T a, T b) {
    return a + b;
}
int main(){
    cout << "Sum of 5 and 10 is: " << add(5, 10) << endl; // Calls add(int, int)
    cout << "Sum of 5.5 and 10.5 is: " << add(5.5, 10.5) << endl; // Calls add(double, double)
    return 0;
}