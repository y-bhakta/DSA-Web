#include<iostream>
using namespace std;
class Node{
public:
    int data;
    Node* next;
    Node(int val){
        data = val;
        next = NULL;
    }
};
class LinkedList{
public: 
    Node* head;
    int size;
    LinkedList(){
        int data1;
        cout << "Enter data for the head node: ";
        cin >> data1;
        head = new Node(data1);
        head->next = NULL;
        size = 0;
    }
    void append(){
        int n;
        cout<<"---Creating the Linked List---\n";
        cout << "Enter the number of additional nodes: ";
        cin >> n;
        size=n+1;
        Node *current = head;
        for(int i = 0; i < n; i++){
            int data2;
            cout << "Enter data for node " << (i + 1) << ": ";
            cin >> data2;
            Node *newNode = new Node(data2);
            newNode->next = NULL;
            current->next = newNode;
            current = newNode;
        }
    }
    void insertFront(int data)
    {
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
    void deletefront()
    {
        if (head == NULL)
        {
            cout << "List is empty, nothing to delete." << endl;
            return;
        }
        Node *temp = head;
        head = head->next;
        delete temp;
        this->size--;
    }
    void deleteIndex(int index)
    {
        if(index < 0 || index >= size)
        {
            cout << "Invalid index" << endl;
            return;
        }
        if(index == 0)
        {
            deletefront();
            return;
        }
        Node *temp = head;
        for(int i = 0; i < index - 1; i++)
        {
            temp = temp->next;
        }
        Node *toDelete = temp->next;
        temp->next = temp->next->next;
        delete toDelete;
        this->size--;
    }
    void reverse()
    {
        Node *prev = NULL;
        Node *current = head;
        Node *next = NULL;
        while (current != NULL)
        {
            next = current->next; 
            current->next = prev; 
            prev = current;       
            current = next;       
        }
        head = prev;
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
    cout<<"\t\tDynamic Memory Allocation in C++\n";
    cout<<"============================================================\n";
    cout<<"---Creating the HEAD of the Linked List---\n";
    LinkedList list;
    list.append();
    list.display();
    int choice;
    do{
        cout<<"----- You can do following operations -----\n";
        cout<<"1. Insert a new node at the beginning\n";
        cout<<"2. Search for a node(Through Index)\n";
        cout<<"3. Delete a node(Through Index)\n";
        cout<<"4. Reverse the Linked List\n";
        cout<<"5. Exit!!\n";
        cout<<"Enter your choice: ";
        cin >> choice;
        switch(choice){
            case 1:
                cout<<"----------\n";
                int data;
                cout << "Enter data of node you want to enter at front: ";
                cin >> data;
                list.insertFront(data);
                cout << "Node inserted at the front successfully.\n";
                list.display();
                cout<<"----------\n";
                break;
            case 2:
                cout<<"----------\n";
                int index;
                cout << "Enter the index of the node you want to search: ";
                cin >> index;
                list.search(index);
                cout<<"----------\n";
                break;   
            case 3:
                cout<<"----------\n";
                int index1;
                cout << "Enter the index of the node you want to search: ";
                cin >> index1;
                list.deleteIndex(index1);
                cout << "Node at index " << index1 << " deleted successfully.\n";
                cout<<"Updated Linked List:\n";
                list.display();
                cout<<"----------\n";
                break;   
            case 4:
                cout<<"----------\n";
                cout<<"Original Linked List:\n";
                list.display();
                list.reverse();
                cout << "Reversed LinkedList.\n";
                list.display();
                cout<<"----------\n";
                break;      
        }
    }while (choice != 5);
    cout<<"============================================================\n";
    cout<<"\t\tEnd Of The Programm!!\n";
    cout<<"============================================================\n";
    return 0;
}