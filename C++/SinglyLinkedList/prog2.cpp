#include<iostream>
using namespace std;
class Node{
public:
    int data;
    Node* next;
};
int main(){
    int n;
    // Create the head node
    Node *head=new Node();
    cout << "Enter data for head node: ";
    cin >> head->data;
    head->next = NULL;
    cout << "Enter the number of additional nodes: ";
    cin >> n;
    Node *current = head;
    for(int i = 0; i < n; i++){
        Node *newNode = new Node();
        cout << "Enter data for node " << (i + 1) << ": ";
        cin >> newNode->data;
        newNode->next = NULL;
        current->next = newNode;
        current = newNode;
    }
    cout << "Linked List: ";
    Node *temp = head;
    while(temp != NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }
    int s;
    cout<<"\nEnter the value to search: ";
    cin >> s;
    temp = head;
    while(temp != NULL){
        if(temp->data == s){
            cout <<s<<" Value found in the linked list with next node address "<<temp->next<< endl;
            break;
        }
        if(temp->next == NULL){
            cout << s << " Value not found in the linked list." << endl;
        }
        temp = temp->next;
    }
    return 0;
}