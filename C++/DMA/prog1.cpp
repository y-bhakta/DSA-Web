//OPP Way
#include <iostream>
using namespace std;
class Array{
    private:
        int* arr;
        int size;
    public:
        Array(){
            int s;
            size = s;
            cout<<"Enter size of array: ";
            cin>>s;
            arr = new int[s];
            if(arr == NULL){
                cout<<"Memory allocation failed"<<endl;
                exit(0);
            }
            else{
                cout<<"Memory allocation successful"<<endl;
            }
        }
        ~Array(){
            delete[] arr;
            cout<<"Memory deallocated successfully"<<endl;
        }
};
int main(){
    Array a;
    return 0;
}