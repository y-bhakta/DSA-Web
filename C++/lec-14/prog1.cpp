#include<iostream>
using namespace std;
int main(){
    int n,index,element,ch;
    cout<<"Enter no. of element you want in array: ";
    cin>>n;
    int arr[n];
    do{
        cout<<endl<<"------------------------------"<<endl;
        cout<<"Enter 1 for insert: "<<endl;
        cout<<"Enter 2 for update: "<<endl;
        cout<<"Enter 3 for delete: "<<endl;
        cout<<"Enter 4 for view: "<<endl;
        cout<<"Enter 0 for exit: "<<endl;
        cout<<"Enter your choice: ";
        cin>>ch;
        switch (ch){
            case 1:
            for(int i=0;i<n;i++){
                cout<<"Enter arr["<<i<<"]: ";
                cin>>arr[i];
            }
                break;
            case 2:
                cout<<"Enter index you want to update: ";
                cin>>index;
                cout<<"Enter new element: ";
                cin>>element;
                arr[index]=element;
                break;
            case 3:
                cout<<"Enter index you want to delete: ";
                cin>>index;
                for(int i=index;i<n;i++){
                    arr[i]=arr[i+1];
                }
                n--;
                break; 
            case 4:
            	for(int i=0;i<n;i++){
        			cout<<"arr["<<i<<"]: "<<arr[i]<<endl;
    			}
                break;
			case 0:
				break;	       
            default:
                cout<<"Wrong input!!";
                break;
        }
    }while(ch!=0);
    return 0;
}