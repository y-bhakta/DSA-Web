#include<iostream>
using namespace std;
class Queue {
public:
    int *arr;
    int front,rear,caapacity;
    Queue(int capacity) {
        this->caapacity = capacity;
        this->arr = new int[this->caapacity];
        this->front = -1;
        this->rear = -1;
    }
    ~Queue() {
        delete[] arr;
    }
    void enqueue(int element);
    void dequeue();
    void Fornt();
    void Rear();
    void display();
    bool full();
    bool empty();
    void size();
};
void Queue::enqueue(int element) {
    if(this->full()) {
        cout << "Queue is full" << endl;
        return;
    }
    if(this->front == -1) {
        this->front = 0;
    }
    this->arr[++rear] = element;
    cout << element << " enqueued to queue successfully" << endl;
}
void Queue::dequeue() {
    if(this->empty()) {
        cout << "Queue is empty" << endl;
        return;
    }
    cout << arr[front++] << " dequeued from queue successfully" << endl;
    if(front > rear) {
        front = rear = -1; // Reset queue when empty
    }
}
void Queue::Fornt() {
    if(this->empty()) {
        cout << "Queue is empty" << endl;
        return;
    }
    cout << arr[front] << " is the front element of queue" << endl;
}
void Queue::Rear() {
    if(this->empty()) {
        cout << "Queue is empty" << endl;
        return;
    }
    cout << arr[rear] << " is the rear element of queue" << endl;
}
bool Queue::full() {
    if(this->rear == this->caapacity-1){
        return true;
    } else {
        return false;
    }
}
bool Queue::empty() {
    if(this->front == -1) {
        return true;
    } else {
        return false;
    }
}
void Queue::size() {
    if(this->empty()) {
        cout << "Queue is empty" << endl;
        return;
    }
    cout << "Size of queue is " << (rear - front + 1) << endl;
}
void Queue::display() {
    if(this->empty()) {
        cout << "Queue is empty" << endl;
        return;
    }
    cout << "Elements in queue are: ";
    for(int i = front; i <= rear; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main(){
    int capacity;
    cout << "Enter the capacity of the queue: ";
    cin >> capacity;
    Queue q(capacity);
    int choice, element;
    do{
        cout << "1. Enqueue\n2. Dequeue\n3. Front\n4. Rear\n5. Display\n6. Size\n7. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        switch(choice) {
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
            default:
                cout << "Invalid choice, please try again." << endl;
        }
    }while(choice != 7);
    cout << "Thank you for using the queue program!" << endl;   
    return 0;
}