#include <iostream>
using namespace std;

#define SIZE 100

class Queue
{
private:
    int arr[SIZE];
    int front, rear;

public:
    Queue()
    {
        front = -1;
        rear = -1;
    }

    void push(int value)
    {
        if (rear == SIZE - 1){
            cout << "Overflow" << endl;
            return;
        }
        if (front == -1)
            front = 0;

        rear++;
        arr[rear] = value;
    }

    void pop(){
        if(front == -1 || front>rear){
            cout << "Queue underflow" << endl;
            return;
        }
        front++;
    }

    int peek(){
        if(front == -1 || front>rear){
            cout << "Queue underflow" << endl;
            return -1;
        }
        return arr[front];
    }

    bool isEmpty (){
        return front == 1 || front > rear;
    }

    void printQueue()
    {
        if (front == -1 || front > rear)
        {
            cout << "Queue is empty\n";
            return;
        }
        cout << "Queue elements: ";
        for (int i = front; i <= rear; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main()
{
    Queue q;

    q.push(4);
    q.push(6);
    q.push(8);
    q.push(10);

    q.printQueue();

    return 0;
}