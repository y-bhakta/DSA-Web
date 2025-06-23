#include <iostream>
using namespace std;
class Queue
{
public:
    int *arr;
    int front, rear, caapacity;
    Queue()
    {
        cout << "Enter the capacity of the queue: ";
        cin >> caapacity;
        this->arr = new int[this->caapacity];
        this->front = -1;
        this->rear = -1;
    }
    ~Queue()
    {
        delete[] arr;
    }
};
class QueueMenu : public Queue
{
public:
    void enqueue(int element)
    {
        if (this->full())
        {
            cout << "Queue is full" << endl;
            return;
        }
        if (this->front == -1)
        {
            this->front = 0;
        }
        this->arr[++rear] = element;
        cout << element << " enqueued to queue successfully" << endl;
    }
    void dequeue()
    {
        if (this->empty())
        {
            cout << "Queue is empty" << endl;
            return;
        }
        cout << arr[front++] << " dequeued from queue successfully" << endl;
        if (front > rear)
        {
            front = rear = -1; // Reset queue when empty
        }
    }
    void Fornt()
    {
        if (this->empty())
        {
            cout << "Queue is empty" << endl;
            return;
        }
        cout << arr[front] << " is the front element of queue" << endl;
    }
    void Rear()
    {
        if (this->empty())
        {
            cout << "Queue is empty" << endl;
            return;
        }
        cout << arr[rear] << " is the rear element of queue" << endl;
    }
    void display()
    {
        if (this->empty())
        {
            cout << "Queue is empty" << endl;
            return;
        }
        cout << "Elements in queue are: ";
        for (int i = front; i <= rear; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    bool full()
    {
        if (this->rear == this->caapacity - 1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    bool empty()
    {
        if (this->front == -1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    void size()
    {
        if (this->empty())
        {
            cout << "Queue is empty" << endl;
            return;
        }
        cout << "Size of queue is " << (rear - front + 1) << endl;
    }
};
int main()
{

    QueueMenu q;
    int choice, element;
    do
    {
        cout<<"----- Menu -----\n";
        cout << "1. Enqueue\n2. Dequeue\n3. Front\n4. Rear\n5. Display\n6. Size\n7. Exit\n8.Empty\n9. Full\n";
        cout<<"----- Menu -----\n";
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "Enter element to enqueue: ";
            cin >> element;
            q.enqueue(element);
            break;
        case 2:
            q.dequeue();
            break;
        case 3:
            q.Fornt();
            break;
        case 4:
            q.Rear();
            break;
        case 5:
            q.display();
            break;
        case 6:
            q.size();
            break;
        case 7:
            cout << "Exiting..." << endl;
            break;
        case 8:
            if (q.empty())
            {
                cout << "Queue is empty" << endl;
            }
            else
            {
                cout << "Queue is not empty" << endl;
            }
            break;
        case 9:
            if (q.full())
            {
                cout << "Queue is full" << endl;
            }
            else
            {
                cout << "Queue is not full" << endl;
            }
            break;        
        default:
            cout << "Invalid choice, please try again." << endl;
        }
    } while (choice != 7);
    cout << "Thank you for using the queue program!" << endl;
    return 0;
}