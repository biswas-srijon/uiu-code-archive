#include<iostream>
#include<deque>
using namespace std;


class Node{
    public:
    int data;
    Node *next;

    Node(int val){
        data = val;
        next = NULL;
    }
};

class Queue {
    Node *head;
    Node *tail;

    public:
    Queue(){
        head = tail = NULL;
    }

    void push(int val){ //always add at last
        Node *newNode = new Node(val);

        if(empty()){
            head = tail = newNode;
        } else {
            tail ->next = newNode;
            tail = newNode;
            newNode ->next = NULL;
        }
        
    }

    void pop(){ //always delete the head
        if(empty()){
            cout << "Empty Queue";
            return;
        }
        else {
            Node *temp = head;
            head = head->next;
            delete temp;
        }
    }

    int front(){
        if(empty()){
            cout << "Empty Queue";
            return -1;
        }
        return head->data;
    }

    bool empty(){
        return head == NULL; //returns true if this matches
    }

};


int main(){

    // //doible ending queue using c++ stl
    // deque <int> dq;

    // dq.push_back(2);
    // dq.push_back(3);
    // dq.push_back(4);

    // dq.push_front(1);

    // cout << dq.front() << " " << dq.back() << endl;

    // dq.pop_back();

    // cout << dq.front() << " " << dq.back() << endl;


    Queue q;

    q.push(5);
    q.push(6);
    q.push(7);
    q.push(8);

    cout << " " << q.empty() << endl;

    while(!q.empty()){
        cout << " " << q.front();
        q.pop();
    }

    return 0;
}