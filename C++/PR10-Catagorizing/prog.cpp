#include<bits/stdc++.h>
using namespace std;
void Array(vector<int>& arr,int n){
    cout<<"Enter the elements of the array: \n";
    for(int i=0; i<n; i++){
        cout<<"Arr["<<i<<"] = ";
        cin>>arr[i];
    }
}
void printArray(vector<int>& arr, int n){
    cout<<"Your Array is: ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int linearSearch(vector<int>& arr, int n, int key){
    for(int i=0; i<n; i++){
        if(arr[i] == key){
            return i;
        }
    }
    return -1; 
}
int binarySearch(vector<int>& arr, int n, int key){
    int left = 0, right = n - 1;
    while(left <= right){
        int mid = left + (right - left) / 2;
        if(arr[mid] == key){
            return mid;
        }
        else if(arr[mid] < key){
            left = mid + 1;
        }
        else{
            right = mid - 1;
        }
    }
    return -1; 
}
void merge(vector<int>& arr,int left,int mid,int right){
    int n1=mid-left+1;
    int n2=right-mid;
    vector<int> L(n1),R(n2);
    for(int i=0;i<n1;i++){
        L[i]=arr[left+i];
    }
    for(int j=0;j<n2;j++){
        R[j]=arr[mid+1+j];
    }
    int i=0,j=0,k=left;
    while(i<n1&&j<n2){
        if(L[i]<=R[j]){
            arr[k]=L[i];
            i++;
        }
        else{
            arr[k]=R[j];
            j++;
        }
        k++;
    }
    while(i<n1){
        arr[k]=L[i];
        i++;
        k++;
    }
    while(j<n2){
        arr[k]=R[j];
        j++;
        k++;
    }
}
void mergesort(vector<int>& arr,int left,int right){
    if(left>=right){
        return;
    }
    int mid=left+(right-left)/2;
    mergesort(arr,left,mid);
    mergesort(arr,mid+1,right);
    merge(arr,left,mid,right);
}
void selectionsort(vector<int>& arr,int n){
            int min,temp;
            for(int i=0;i<n-1;i++){
                min=i;
                for(int j=i+1;j<n;j++){
                    if(arr[min]>arr[j]){
                        min=j;
                    }
                }
                temp=arr[i];
                arr[i]=arr[min];
                arr[min]=temp;
            }
        }
int main(){
    int n,choice;
    cout<<"Enter the size of the array: ";
    cin>>n;
    vector<int> arr(n);
    Array(arr, n);
    printArray(arr, n);
    do{
        cout<<"==========================\n";
        cout<<"\tChoose an option\n";
        cout<<"==========================\n";
        cout<<"1. Sorting the array\n";
        cout<<"2. Searching the array\n";
        cout<<"3. Exit\n";
        cout<<"Enter your choice: ";
        cin>>choice;
        switch(choice){
            case 1:
                cout<<"-----Choose a sorting method-----\n";
                cout<<"1. Merge Sort\n";
                cout<<"2. Selection Sort\n";
                int sortChoice;
                cout<<"Enter your choice: ";
                cin>>sortChoice;
                if(sortChoice == 1){
                    mergesort(arr, 0, n - 1);
                    cout<<"Array sorted using Merge Sort:\n ";
                    printArray(arr, n);
                } else if(sortChoice == 2){
                    selectionsort(arr, n);
                    cout<<"Array sorted using Selection Sort:\n ";
                    printArray(arr, n);

                } else {
                    cout<<"Invalid choice!"<<endl;
                }
                break;
            case 2:
                int key;
                cout<<"Enter the element to search: ";
                cin>>key;
                cout<<"-----Choose a search method-----\n";
                cout<<"1. Linear Search\n";
                cout<<"2. Binary Search\n";
                int searchChoice;
                cout<<"Enter your choice: ";
                cin>>searchChoice;
                if(searchChoice == 1){
                    int index = linearSearch(arr, n, key);
                    if(index != -1){
                        cout<<"Element found at index: "<<index<<endl;
                    } else {
                        cout<<"Element not found in the array."<<endl;
                    }
                } else if(searchChoice == 2){
                    int index = binarySearch(arr, n, key);
                    if(index != -1){
                        cout<<"Element found at index: "<<index<<endl;
                    } else {
                        cout<<"Element not found in the array."<<endl;
                    }
                } else {
                    cout<<"Invalid choice!"<<endl;
                }
                break;
            case 3:
                cout<<"Exiting the program."<<endl;
                break;
            default:
                cout<<"Invalid choice! Please try again."<<endl;
                break;    
        }
    }while(choice != 3);
    cout<<"==========================\n";
    cout<<"Thank you for using the program!"<<endl;
    cout<<"==========================\n";
    return 0;
}