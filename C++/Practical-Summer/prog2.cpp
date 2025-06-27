// Create a Product class with attributes name and price. Use a vector to store multiple
// products. Input and display all product details
#include <iostream>
#include <vector>
using namespace std;
class Product {
protected:
    vector<string> names;
    vector<float> prices;
    int n;
public:
    void setProductDetails() {
        cout << "\nEnter number of products: ";
        cin >> n;
        names.resize(n);
        prices.resize(n);
        cout << "\n----- Enter product details -----\n";
        for (int i = 0; i < n; i++) {
            cout << "Product " << i + 1 << " Name: ";
            cin >> names[i];
            cout << "Product " << i + 1 << " Price: ";
            cin >> prices[i];
        }
    }
    void showProductDetails() {
        cout << "\n----- Product Details -----\n";
        for (int i = 0; i < n; i++) {
            cout << "Product " << i + 1 << ": " << names[i] << ", Price: " << prices[i] <<" Rs"<< endl;
        }
    }
};
int main(){
    Product p;
    p.setProductDetails();
    p.showProductDetails();
    return 0;
}