#include<iostream>
using namespace std;
class Selection{
    public:
        void sorting(int a[],int n){
            int min,temp;
            for(int i=0;i<n-1;i++){
                min=i;
                for(int j=i+1;j<n;j++){
                    if(a[min]>a[j]){
                        min=j;
                    }
                }
                temp=a[i];
                a[i]=a[min];
                a[min]=temp;
            }
        }
        void Print(int a[],int n){
            cout<<"Sorted Arrsy is: "<<endl;
            for(int i=0;i<n;i++){
                cout<<a[i]<<" ";
            }
            cout<<endl;
        }
};
int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cout<<"Enter a["<<i<<"]: ";
        cin>>a[i];
    }
    Selection s;
    s.sorting(a,n);
    s.Print(a,n);
    return 0;
}