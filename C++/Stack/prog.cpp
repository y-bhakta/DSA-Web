#include<iostream>
using namespace std;
class Stack{
public:
    int *arr;
    int top,capacity;
    Stack(int capacity){
        this->capacity=capacity;
        this->arr=new int[this->capacity];
        this->top=-1;
    }
    ~Stack(){
        delete[] arr;
    }
    void push(int element);
    void pop();
    void peek();
    void display();
    bool full();
    bool Empty();
    void size();
};
void Stack::push(int element){
    if(this->top==this->capacity-1){
        cout<<"Stack is full"<<endl;
    }
    arr[++top]=element;
    cout<<element<<" pushed to stack successfully"<<endl;
}
void Stack::pop(){
    if(this->top==-1){
        cout<<"Stack is empty"<<endl;
        return;
    }
    cout<<arr[top--]<<" popped from stack successfully"<<endl;
}
void Stack::peek(){
    if(this->top==-1){
        cout<<"Stack is empty"<<endl;
        return;
    }
    cout<<arr[top]<<" is the top element of stack"<<endl;
}
bool Stack::full(){
    if(this->top==this->capacity-1){
        return true;
    }
    else{
        return false;
    }
}
bool Stack::Empty(){
    if(this->top==-1){
        return true;
    }
    else{
        return false;
    }
}
void Stack::size(){
    cout<<"Size of stack is "<<this->top+1<<endl;
}
void Stack::display(){
    if(this->top==-1){
        cout<<"Stack is empty"<<endl;
        return;
    }
    cout<<"Elements in stack are: ";
    for(int i=0;i<=this->top;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int capacity;
    cout<<"Enter the capacity of stack: ";
    cin>>capacity;
    Stack stack(capacity);
    int choice, element;   
    do{
        cout<<"\n1. Push\n2. Pop\n3. Peek\n4. Display\n5. Check if full\n6. Check if empty\n7. Size\n8. Exit\n";
        cout<<"Enter your choice: ";
        cin>>choice;
        switch(choice){
            case 1:
                cout<<"Enter element to push: ";
                cin>>element;
                stack.push(element);
                break;
            case 2:
                stack.pop();
                break;
            case 3:
                stack.peek();
                break;
            case 4:
                stack.display();
                break;
            case 5:
                if(stack.full()){
                    cout<<"Stack is full"<<endl;
                } else {
                    cout<<"Stack is not full"<<endl;
                }
                break;
            case 6:
                if(stack.Empty()){
                    cout<<"Stack is empty"<<endl;
                } else {
                    cout<<"Stack is not empty"<<endl;
                }
                break;
            case 7:
                stack.size();
                break;
            case 8:
                cout<<"Exiting..."<<endl;
                break;
            default:
                cout<<"Invalid choice, please try again."<<endl;
        }
    }while(choice != 8);
    return 0;
}