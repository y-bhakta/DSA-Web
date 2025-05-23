#include<iostream>
using namespace std;
class Node{
    public:
        int data;
        Node* next;
};
int main(){
    Node *head=NULL;
    Node *n2=NULL;
    Node *n3=NULL;
    Node *n4=NULL;

    head=new Node();
    head->data=1;
    head->next=NULL;
    n2=new Node();
    n2->data=2;
    n2->next=NULL;
    head->next=n2;
    n3=new Node();
    n3->data=3;
    n3->next=NULL;
    n2->next=n3;
    n4=new Node();
    n4->data=4;
    n4->next=NULL;
    n3->next=n4;

    cout<<"Your linked list is: ";
    Node *temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    return 0;
}