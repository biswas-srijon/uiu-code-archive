#include<iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};

Node* head = NULL;


// write your code here...
void insertFirst(int data){
    Node* newNode = new Node(data);
    head = newNode;
    newNode ->next = head;
    head = newNode;
}

void insertLast (int data) {
    Node* newNode = new Node(data);
    if(head == NULL){
        head = newNode;
        return;
    }

    Node* = current = head;
    while (current -> next != NULL)
    {
        current = current -> next;
    }
    
}

int searchItem(int item)
{
    Node *current = head;
    int position = 0;
    while (current != NULL)
    {
        if (current->data == item)
        {
            return position;
        }
        current = current->next;
        position++;
    }
    return -1;
}

void printList()
{
    Node* current = head;
    cout << "Linked list: ";
    while (current != NULL)
    {
        cout << current->data << " -> ";
        current = current->next;
    }
    cout << "NULL" << endl;
}

int main()
{
    int option, data, position, item;

    while (true) {
        cout << "\n!!!  MENU  !!!\n";
        cout << "1. Insert First\n";
        cout << "2. Insert Last\n";
        cout << "3. Insert At\n";
        cout << "4. Delete First\n";
        cout << "5. Delete Last\n";
        cout << "6. Delete Item\n";
        cout << "7. Print the list\n";
        cout << "8. Search\n";
        cout << "9. Quit\n";
        cout << "Select an option: ";
        cin >> option;

        switch (option) {
            case 1:
                cout << "Enter data to insert at the beginning: ";
                cin >> data;
                insertFirst(data);
                break;
            case 2:
                cout << "Enter data to insert at the end: ";
                cin >> data;
                insertLast(data);
                break;
            case 3:
                cout << "Enter data to insert: ";
                cin >> data;
                cout << "Enter position to insert at: ";
                cin >> position;
                insertAt(data, position);
                break;
            case 4:
                deleteFirst();
                break;
            case 5:
                deleteLast();
                break;
            case 6:
                cout << "Enter the item to delete: ";
                cin >> item;
                deleteItem(item);
                break;
            case 7:
                printList();
                break;
            case 8:
                cout << "Enter the item to search: ";
                cin >> item;
                position = searchItem(item);
                if (position != -1) {
                    cout << "Item found at position " << position << "." << endl;
                } else {
                    cout << "Item not found in the list." << endl;
                }
                break;
            case 9:
                return 0;
            default:
                cout << "Invalid option. Please select a valid option." << endl;
        }
    }

    return 0;
}