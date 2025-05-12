#include<iostream>
#include <stdexcept>
#include<vector>
using namespace std;

class Stack {
    vector <int> v;
    int topIdx;

    public:
    Stack(){
        topIdx = -1;
    }

    void push (int val){
        v.push_back(val);
        topIdx++;
    }

    void pop(){
        v.pop_back();
        topIdx--;
    }

    int top(){
        return v.back();
    }

    int sizeOf(){
        return v.size();
    }

    bool isEmpty(){
        return v.empty();
    }

    void printStack(){
        for (int val : v) {
            cout << val << " ";
        }
        cout << endl;
    }
};

int main(){
    Stack stack;

    stack.push(6);
    stack.push(4);
    stack.push(2);
    
    cout << "Is empty? " << (stack.isEmpty() ? "Yes" : "No") << endl;

    stack.printStack();
    stack.pop();
    cout << "Current Size of stack: " << stack.sizeOf() << endl;
    stack.printStack();
    cout << "Top: " << stack.top() << endl;

    return 0;
}
