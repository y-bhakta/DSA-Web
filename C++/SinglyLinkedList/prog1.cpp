#include<iostream>
using namespace std;
class Node{
public:
    int data;
    Node *next;
};
int main(){
    //Node 1
    Node *head = new Node();
    head->data = 1;
    head->next = NULL;
    //Node 2
    Node *current = new Node();
    current->data = 2;
    current->next = NULL;
    head->next = current;
    //Node 3
    current = new Node();
    current->data = 3;
    current->next = NULL;
    head->next->next = current;
    //Node 4
    current = new Node();
    current->data = 4;
    current->next = NULL;
    head->next->next->next = current;
    cout<<"Linked List: ";
    Node *temp=head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    return 0;
}