#include<iostream>
#include<vector>
using namespace std;
int main(){
    int size;
    cout<<"Enter the size of vector: ";
    cin>>size;
    vector<int> v1(size);
    cout<<"Enter the elements of vector\n";
    for(int i=0;i<size;i++){
        cout<<"v1["<<i<<"]: ";
        cin>>v1[i];
    }
    cout<<"Your vector is: ";
    for(int i=0;i<size;i++){
        cout<<v1[i]<<" ";
    }
    int choice;
    do{
        cout<<endl;
        cout<<"Choose an operation:\n";
        cout<<"1. Insert\n";
        cout<<"2. Erase\n";
        cout<<"3. Clear\n";
        cout<<"4. Display\n";
        cout<<"5. Exit\n";
        cout<<"Enter your choice: ";
        cin>>choice;
        switch(choice){
            case 1:
                int element;
                cout<<"Enter element to insert: ";
                cin>>element;
                v1.push_back(element);
                cout<<"Element inserted successfully!"<<endl;
                break;
            case 2:
                int index;
                cout<<"Enter index to erase: ";
                cin>>index;
                if(index>=0 && index<size){
                    v1.erase(v1.begin()+index);
                    cout<<"Element erased successfully!"<<endl;
                }
                else{
                    cout<<"Invalid index!"<<endl;
                }
                break;
            case 3:
                v1.clear();
                cout<<"Vector cleared successfully!"<<endl;
                break;
            case 4:
                cout<<"Your vector is: ";
                for(int i=0;i<v1.size();i++){
                    cout<<v1[i]<<" ";
                }
                cout<<endl;
                break;
            case 5:
                cout<<"Exiting..."<<endl;
                break;
            default:
                cout<<"Invalid choice! Please try again."<<endl;
        }
    }while(choice!=5);
    return 0;
}