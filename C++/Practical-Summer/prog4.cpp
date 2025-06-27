// (Menu-Driven Program Using Vector)
#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<string> name;
    int choice;
    do{
        cout<< "\n----- Menu -----\n";
        cout<< "1. Add Student Name\n";
        cout<< "2. Display Student Names\n";
        cout<<"3. Delete Student Name(by index)\n";
        cout<<"4. exit\n";
        cout<< "Enter your choice: ";
        cin>> choice;
        switch(choice){
            case 1: {
                string temp;
                cout<< "\n----- Enter Student Name -----\n";
                cout<< "Name: ";
                cin>> temp;
                name.push_back(temp);
                cout<< "Name added successfully!\n";
                break;
            }
            case 2: {
                cout<< "\n----- Student Names -----\n";
                for(int i=0; i<name.size(); i++){
                    cout<< "Name "<< i+1 << ": " << name[i] << endl;
                }
                break;
            }
            case 3: {
                int index;
                cout<< "\n----- Delete Student Name -----\n";
                cout<< "Enter index of name to delete (0 to "<< name.size()-1 <<"): ";
                cin>> index;
                if(index>=0 && index<name.size()){
                    name.erase(name.begin() + index);
                    cout<< "Name deleted successfully!\n";
                } else {
                    cout<< "Invalid index!\n";
                }
                break;
            }
            case 4:
                cout<< "\nExiting...\n";
                break;
            default:
                cout<< "\nInvalid choice! Please try again.\n";
        }
    }while(choice!=4);
    cout << "\n----- Program Ended -----\n";
    return 0;
}