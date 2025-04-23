#include <iostream>
using namespace std;
int main(){
    float length;
    cout << "Enter length of square : ";
    cin >> length;
    float *ptr = &length;
    float area = *ptr * *ptr;
    float *pt = &area;
    cout << "Area of square is : " << *pt<<" cm^2"<<endl;
    return 0;
}