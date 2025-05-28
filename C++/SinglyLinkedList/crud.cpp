#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->next = nullptr;
    }
};
class Linkedlist
{
public:
    Node *head;
    int size;
    Linkedlist()
    {
        head = nullptr;
        size = 0;
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
    void insertBack(int data)
    {
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
    void insertIndex(int data, int index)
    {
        Node *newnode = new Node(data);
        if (index < 0 || index > size)
        {
            cout << "Invalid index" << endl;
            return;
        }
        if(index == 0)
        {
            insertFront(data);
            return;
        }
        else{
            Node *temp = head;
            for(int i = 0 ; i < index - 1 ; i++)
            {
                temp = temp->next;
            }
            newnode->next = temp->next;
            temp->next = newnode;
        }
        this->size++;
    }

    void updateList(int data , int index)
    {
         if (index < 0 || index > size)
        {
            cout << "Invalid index" << endl;
            return;
        }
        Node *temp = head;
        for(int i = 0; i <= index ; i++)
        {
            if(i == index)
            {
                temp->data = data;
                return;
            }
            temp = temp->next;
        }
       
    }
    void deletefront()
    {
        if (head == NULL)
        {
            cout << "List is empty" << endl;
            return;
        }
        Node *temp = head;
        head = head->next;
        delete temp;
        this->size--;
    }
    void deleteback()
    {
         if(head == NULL)
         {
            cout << "List is empty" << endl;
            return;
         }
         if(head->next == NULL)
         {
            delete head;
            head = NULL;
            this->size--;
            return;
         }
         Node *temp = head;
         while(temp->next->next != NULL)
         {
            temp = temp->next;
         }
         delete temp->next;
            temp->next = NULL;
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
    void display()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};
int main()
{
    Linkedlist ll;
    ll.insertFront(10);
    ll.insertFront(20);
    ll.insertFront(30);
    ll.insertIndex(25, 1);
    ll.updateList(35, 2);
    ll.insertBack(40);
    ll.insertBack(50);
    ll.insertBack(60);
    ll.deleteback();
    ll.deletefront();
    ll.deleteIndex(1);
    ll.display(); 
    return 0;
}