#include<iostream>
using namespace std;
class calculator{
    int c,d;
    public:
        int add(int a, int b){
            this->c=a;
            this->d=b;
            cout << "Addition: " << c+d << endl;
        }
};
int main(){
    calculator c;
    int e,f;
    cout << "Enter First numbers: ";
    cin >> e;
    cout << "Enter Second numbers: ";
    cin >> f;
    c.add(e,f);
    return 0;
}