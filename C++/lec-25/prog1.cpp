#include<iostream>
using namespace std;
template <typename T>
class Sum{
    T a,b;
    public:
    Sum(T x,T y){
        a=x;
        b=y;
    }
    T add(){
        return a+b;
    }
};
int main(){
    int x,y;
    cout<<"Enter X integers: ";
    cin>>x;
    cout<<"Enter Y integers: ";
    cin>>y;
    Sum<int> s1(x,y);
    cout<<"Sum of two integers: "<<s1.add()<<endl;

    float p,q;
    cout<<"Enter P floats: ";
    cin>>p;
    cout<<"Enter Q floats: ";
    cin>>q;
    Sum<float> s2(p,q);
    cout<<"Sum of two floats: "<<s2.add()<<endl;

    return 0;
}