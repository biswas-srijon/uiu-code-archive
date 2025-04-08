#include<iostream>
#include<conio.h>
using namespace std;

class Node {
    public:
    int data;
    Node *next;
    Node *prev;

    Node(int val) {
        data = val;
        next = prev = NULL;
    }
};

class DoublyLL {
    Node *head;
    Node *tail;

    public:
    DoublyLL(){
        head = tail = NULL;
    }

    void pushFront (int val){
        Node *newNode = new Node (val);
    
        if(head == NULL) {
            head = tail = newNode;
            return;
        }
        else{
            newNode->next = head;
            newNode->prev = NULL;
            head->prev = newNode;
            head = newNode;
        }
    }


    void pushBack (int val){
        Node *newNode = new Node (val);
    
        if(head == NULL) {
            head = tail = newNode;
            return;
        }
        else{
            tail->next = newNode;
            newNode->next = NULL;
            newNode->prev = tail;
            tail = newNode;
        }
    }

    void popFront (){
        Node *temp = head;

        if (head == NULL)
        {
            cout << "List is empty" << endl;
            return;
        }

        else
        {
            head = head->next;
            head->prev = NULL;
        }

        delete temp;
    }

    void popBack () {
        if (head == NULL){
            cout << "List is empty" << endl;
            return;
        }
        if (head == tail){
            delete head;
            head = tail = NULL;
            return;
        }

        Node *temp = tail;
        tail = tail->prev;
        if(tail != NULL){
            tail->next = NULL;
        }
        delete temp;
    }


    void insertAtPosition(int val, int pos){
        if (pos < 0){
            cout << "Invalid position" << endl;
            return;
        }
        if(pos == 0){
            pushFront(val);
            return;
        }

        Node *temp = head;
        for(int i = 0; i < pos-1; i++){
            if(temp == NULL){
                return;
            }
            temp = temp->next;
        }
        Node *newNode = new Node(val);
        Node *tempNext = temp->next;

        newNode->next = temp->next;
        newNode->prev = temp;
        temp->next = newNode;

        if (tempNext != NULL){
            tempNext->prev = newNode;
        } else {
            tail = newNode;
        }
    }

    void deleteAtPosition (int pos){
        if (pos < 0){
            cout << "Invalid position" << endl;
            return;
        }
        if (head == NULL){
            cout << "List is empty" << endl;
            return;
        }
        if (pos == 0){
            popFront();
            return;
        }

        Node *temp = head;
        Node *toDelete = temp->next;

        for(int i = 0; i<pos-1; i++){
            if(temp == NULL){
                cout << "Position out of range" << endl;
                return;
            }
            temp = temp->next;
        }

        if (toDelete == NULL){
            cout << "Position out of range" << endl;
            return;
        }

        temp->next = toDelete->next;

        if (toDelete->next != NULL){
            toDelete->next->prev = temp;
        }
        else {
            tail = temp;
        }
        delete toDelete;
    }

    int searchValue (int val){
        Node *temp = head;
        int idx = 0;
        while(temp != 0){
            if(temp->data == val){
                return idx;
            }
            temp = temp->next;
            idx++;
        }
        return -1;
    }


    void printLL (){
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << "<=>";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};


int main(){

    DoublyLL dll;

    dll.pushFront(3);
    dll.pushFront(2);
    dll.pushFront(1);



    dll.printLL();

    cout << "Found value at index: " << dll.searchValue(2);

    getch();
}