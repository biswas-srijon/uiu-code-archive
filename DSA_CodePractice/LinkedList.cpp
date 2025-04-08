#include<iostream>
#include<conio.h>
using namespace std;

class Node { //this class to create every singular node
    public:

    int data; //to store the actual data
    Node* next; //next pointer to point the next node's address

    Node(int val){
        data = val;
        next = NULL;
    }
};

class List {
    Node *head = NULL;
    Node *tail = NULL;

    public:
    
    void pushFront (int val){ //add new head
        Node *newNode = new Node(val); //creating new node with the help of Node class

        if(head == NULL) {          //cheacking if any element with head exist or not
            head = tail = newNode;   //if don't exist head and tail both should be the new node
            return;
        }
        else{                       
            newNode->next = head;//jodi age theke kono value list e exist kore tahole firstly new noder next pointer head e assign korbo
            head = newNode;     //erpor new node ta head banabo
        }
    }


    void pushBack (int val){ //add new tail
        Node *newNode = new Node(val); //creating new node with the help of Node class

        if(head == NULL) {          //cheacking if any element with head exist or not
            head = tail = newNode;   //if don't exist head and tail both should be the new node
        }
        else{
            tail->next = newNode; //jodi age theke kono value list e exist kore tahole firstly tail noder next pointer new node e assign korbo
            tail = newNode;     //erpor new node ta head banabo
        }
    }

    void popFront (){ //delete head
        if(head == NULL){
            cout << "List is empty" << endl;
            return;
        }
        Node *temp = head;
        head = head ->next;
        temp->next = NULL;

        delete temp;
    }

    void popBack() { //delete last value
        if ( head == NULL){
            cout << "List is empty" << endl;
            return;
        }

        Node *temp = head;
        while(temp->next != tail){
            temp = temp->next;
        }

        temp->next= NULL;
        delete tail;
        tail = temp;
    }

    void insertMiddle (int val, int pos){
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
            if(temp = NULL){

                return;
            }
            temp = temp->next;
        }

        Node *newNode = new Node(val);
        newNode->next = temp->next;
        temp->next = newNode;
    }

    void deleteAtPos (int pos) {
        if (pos < 0){
            cout << "Invalid position" << endl;
            return;
        }
        if (head == NULL){
            cout << "List is empty" << endl;
            return;
        }

        if (pos == 0){   //if position indicate head
            Node *temp = head;
            head = head->next;
            delete temp;
            return;
        }

        Node *temp = head;
        for (int i = 0; i < pos-1; i++)
        {
            if (temp == NULL || temp->next == NULL){
                cout << "Position out of range" << endl;
                return;
            }

            temp = temp->next;
        }
        
        Node *toDelete = temp->next;
        if (toDelete == NULL){
            cout << "Position out of range" << endl;
            return;
        }

        temp->next = toDelete->next;
        delete toDelete;
    }

    int searchValue (int val){
        Node *temp = head;
        int idx = 0;
        while (temp != NULL){
            if(temp->data == val){
                return idx;
            }
            temp = temp ->next;
            idx++;
        }
        return -1;
    }

    void printLL () {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << "->";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};

int main() {
    
    List ll;

    ll.pushFront(3);
    ll.pushFront(2);
    ll.pushFront(1);

    ll.pushBack(4);

    ll.printLL();

    int idx = ll.searchValue(1);
    cout << "Value index: " << idx;

    getch ();
}