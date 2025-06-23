#include<bits/stdc++.h>
using namespace std;
void Array(vector<int> &arr, int n) {
    cout << "Enter the elements of the array:\n";
    for (int i = 0; i < n; i++) {
        cout << "Element " << i + 1 << ": ";
        cin >> arr[i];
    }
}
void printArray(vector<int> &arr) {
    cout << "The elements of the array are:\n";
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
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
int partition(vector<int>& arr,int low,int high){
    int pivot=arr[high];
    int i=low-1;
    for(int j=low;j<=high-1;j++){
        if(arr[j]<pivot){
            i++;
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[i+1],arr[high]);
    return i+1;
}
void quicksort(vector<int>& arr,int low,int high){
    if(low<high){
        int pi=partition(arr,low,high);
        quicksort(arr,low,pi-1);
        quicksort(arr,pi+1,high);
    }
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
int main(){
    int n;
    cout<<"Enter the size of elements: ";
    cin>>n;
    vector<int> arr(n);
    Array(arr, n);
    printArray(arr);
    int choice;
    do{
        cout<<"----- Choose an option -----\n";
        cout<<"1. Sorting the array\n";
        cout<<"2. Binary Search\n";
        cout<<"3. Exit\n";
        cout<<"Enter your choice: ";
        cin>>choice;
        switch(choice){
            case 1:{
                cout<<"-----Choose a sorting method-----\n";
                cout<<"1. Merge Sort\n";
                cout<<"2. Quick Sort\n";
                int sortChoice;
                cout<<"Enter your choice: ";
                cin>>sortChoice;
                if(sortChoice == 1){
                    mergesort(arr, 0, n - 1);
                    cout<<"Array sorted using Merge Sort:\n";
                    printArray(arr);
                } else if(sortChoice == 2){
                    quicksort(arr, 0, n - 1);
                    cout<<"Array sorted using Quick Sort:\n";
                    printArray(arr);
                } else {
                    cout<<"Invalid choice!"<<endl;
                }
                break;
            }
            case 2:{
                int key;
                cout<<"Enter the element to search: ";
                cin>>key;
                int index = binarySearch(arr, n, key);
                if(index < n && arr[index] == key){
                    cout<<"Element found at index: "<<index<<endl;
                } else {
                    cout<<"Element not found in the array."<<endl;
                }
                break;
            }
            case 3:{
                cout<<"Exiting the program."<<endl;
                break;
            }
            default:
                cout<<"Invalid choice! Please try again."<<endl;
        }
    }while(choice !=3);
    cout<<"==========================\n";
    cout<<"\t--- Thank you for using the program ---\n";
    cout<<"==========================\n";
    return 0;
}