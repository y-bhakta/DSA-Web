#include <iostream>
using namespace std;

int main() {
    int rows = 5;
    int n = 1;
    for (int i = 1; i <= rows; i++) {
        cout<<n;
        for (int j = 1; j <= i; j++) {
          
            n += (i - 1) * j; // Increment based on the row and column
            cout << " " << n << " ";
        }
        cout << endl;
    }

    return 0;
}
