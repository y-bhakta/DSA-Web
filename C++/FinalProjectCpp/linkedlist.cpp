#include<bits/stdc++.h>
using namespace std;
class Node{
public:
    int data;
    Node* next;
    Node(int val) {
        data = val;
        next = nullptr;
    }
};
class LinkedList{
public:
    int headnode(){
        cout<<"--- Creating the HEAD of the Linked List ---\n";
        int headval;
        cout<<"Enter the value for the head node: ";
        cin>>headval;
        cout<<"--- Head node created ---\n";
        return headval;
    }
    Node*head = new Node(headnode());
    int size;
    void createlist(){
        int n;
        cout<<"--- Creating the Linked List ---\n";
        cout<<"Enter the number of nodes to be added: ";
        cin>>n;
        Node* current = head;
        for(int i = 0; i < n; i++){
            int val;
            cout<<"Enter the value for node "<<i+1<<": ";
            cin>>val;
            Node* newNode = new Node(val);
            current->next = newNode;
            current = newNode;
        }
        size = n + 1; 
        cout<<"\nLinked List Created Successfully!\n";
    }
    void insertFront(int data){
        Node *newnode = new Node(data);
        if (head == NULL)
        {
            head = newnode;
        }
        else
        {
            newnode->next = head;
            head = newnode;
            this->size++;
        }
    }
    void insertBack(int data){
        Node *newnode = new Node(data);
        if (head == NULL)
        {
            head = newnode;
        }
        else
        {
            Node *temp = head;
            while (temp->next != NULL)
            {
                temp = temp->next;
            }
            temp->next = newnode;
            newnode->next = NULL;
            this->size++;
        }
    }
    void search(int index){
        if (index < 0 || index >= size) {
            cout << "Index out of bounds.\n";
            return;
        }
        Node *temp = head;
        for (int i = 0; i < index; i++) {
            temp = temp->next;
        }
        cout << "Node at index " << index << ": " << temp->data << endl;
    }
    void deletefront(){
        if (head == NULL){
            cout << "List is empty" << endl;
            return;
        }
        Node *temp = head;
        head = head->next;
        delete temp;
        this->size--;
    }
    void deleteback(){
        if(head == NULL){
            cout << "List is empty" << endl;
            return;
        }
        if(head->next == NULL){
            delete head;
            head = NULL;
            this->size--;
            return;
        }
        Node *temp = head;
        while(temp->next->next != NULL){
            temp = temp->next;
        }
        delete temp->next;
        temp->next = NULL;
        this->size--;
    }
    void deleteIndex(int index){
        if(index < 0 || index >= size){
            cout << "Invalid index" << endl;
            return;
        }
        if(index == 0){
            deletefront();
            return;
        }
        Node *temp = head;
        for(int i = 0; i < index - 1; i++){
            temp = temp->next;
        }
        Node *toDelete = temp->next;
        temp->next = temp->next->next;
        delete toDelete;
        this->size--;
    }
    void update(int index, int newData){
        if(index < 0 || index >= size){
            cout << "Invalid index" << endl;
            return;
        }
        Node *temp = head;
        for(int i = 0; i < index; i++){
            temp = temp->next;
        }
        temp->data = newData;
    }
    void display(){
        Node *temp = head;
        cout<<"------------------------------\n";
        cout<<"Linked List: ";
        while(temp != NULL){
            cout<<temp->data<<" ";
            temp = temp->next;
        }
        cout << endl;
        cout<<"------------------------------\n";
    }
};
int main(){
    cout<<"============================================================\n";
    cout<<"\t--- Oprations Through Linked List ---\n";
    cout<<"============================================================\n";
    LinkedList list; 
    list.createlist();
    int choice;
    do{
        cout<<"----- You can do following operations -----\n";
        cout<<"1. Insert a new node at the beginning\n";
        cout<<"2. Insert a new node at the End\n";
        cout<<"3. Search for a node(Through Index)\n";
        cout<<"4. Delete the first node\n";
        cout<<"5. Delete the last node\n";
        cout<<"6. Delete a node(Through Index)\n";
        cout<<"7. Update a node(Through Index)\n";
        cout<<"8. Display the linked list\n";
        cout<<"9. Exit!!\n";
        cout<<"Enter your choice: ";
        cin>>choice;
        switch (choice){
            case 1:{
                int data;
                cout<<"Enter the value for the new node: ";
                cin>>data;
                list.insertFront(data);
                cout<<"Node inserted at the beginning successfully!\n";
                break;
            }
            case 2:{
                int data;
                cout<<"Enter the value for the new node: ";
                cin>>data;
                list.insertBack(data);
                cout<<"Node inserted at the end successfully!\n";
                break;
            }
            case 3:{
                int index;
                cout<<"Enter the index of the node you want to search: ";
                cin>>index;
                list.search(index);
                break;
            }
            case 4:{
                list.deletefront();
                cout<<"First node deleted successfully!\n";
                break;
            }
            case 5:{
                list.deleteback();
                cout<<"Last node deleted successfully!\n";
                break;
            }
            case 6:{
                int index;
                cout<<"Enter the index of the node you want to delete: ";
                cin>>index;
                list.deleteIndex(index);
                cout<<"Node at index "<<index<<" deleted successfully!\n";
                break;
            }
            case 7:{
                int index, newData;
                cout<<"Enter the index of the node you want to update: ";
                cin>>index;
                cout<<"Enter the new value for the node: ";
                cin>>newData;
                list.update(index, newData);
                cout<<"Node at index "<<index<<" updated successfully!\n";
                break;
            }
            case 8:{
                list.display();
                break;
            }
            case 9:{
                cout<<"Exiting the program. Goodbye!\n";
                break;
            }
            default:{
                cout<<"Invalid choice! Please try again.\n";
                break;
            }
        }
    }while(choice != 9);
    cout<<"============================================================\n";
    cout<<"\t--- Thank you for using the Linked List Operations Program ---\n";
    cout<<"============================================================\n";
    return 0;
}