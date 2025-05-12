#include<iostream>
#include <stdexcept>
#include <unordered_set>
#include <unordered_map>
#include <vector>
using namespace std;

#define MAX 100

class Stack
{
private:
    int arr[MAX];
    int topIdx;

public:
    Stack(){
        topIdx = -1;
    }

void push(int x){
    if(topIdx == MAX - 1){
        cout << "Stack overflow" << endl;
        return;
    } else{
        topIdx++;
        arr[topIdx] = x;
        cout << x << " pushed into stack" << endl;
    }
}

void pop(){
    if(topIdx == - 1){
        cout << "Stack underflow" << endl;
        return;
    }
    else{
        cout << arr[topIdx] << " poped from stack\n";
        topIdx--;
    }
}

int top (){
    if(topIdx == -1){
        throw runtime_error("Stack underflow");
    }
    return arr[topIdx];
}

bool isEmpty(){ //checking "Is top = -1?"
    return topIdx == -1; //if matches, it returns true, false otherwise
}

int sizeOfStack (){
    if(topIdx == -1){
        throw runtime_error("Stack underflow");
    }
    return topIdx+1;
}

void reverseStack(Stack& original){
    Stack temp;

    while(!original.isEmpty()){
        temp.push(original.top());
        original.pop();
    }
    original = temp;
}

bool findDuplicate(Stack& original){
    unordered_set <int> found; //creating unordered set named 'found'
    Stack temp = original;

    while(!temp.isEmpty()){
        int val = temp.top();

        //Unordered set use hashing to traverse
        if(found.count(val)) //this count() build in func traverse the whole set and search for the passed 'val'
        return true;

        found.insert(val);
        temp.pop(); //when 'val' is not found in the set, it insert that in the set as new value
    }
    return false;
}

void countFrequency(const vector<int>& arr) { //keeping the vector const so it does not get changed mistakenly
    unordered_map<int, int> freq; //(key, value)

    for (int val : arr) {
        freq[val]++; //I am assuming my array elements as the Key, and 
                    //increasing the Value of each key based on their appearance
    }

    for (auto& x : freq) {
        cout << x.first << " appears "   //first access the key, second access the value
             << x.second << " times" << endl;
    }
}

void printStack(){
    if(topIdx == -1){
        cout << "Stack underflow" << endl;
        return;
    }

    cout << "\nPrinting Stack: ";
    for(int i = topIdx; i>= 0; i--){
        cout << arr[i] << " ";
    }
    cout << endl;
}

};

int main (){
    Stack stack; //Constructor is called, automatic storage or stack allocation

    stack.push(10);
    stack.push(20);
    stack.push(30); //last add means top

    stack.printStack();
    
    stack.pop();
    stack.printStack();

    stack.push(40); //new top
    stack.printStack();

    try
    {
        cout << "Size of stack: " << stack.sizeOfStack();
    }
    catch(runtime_error& e)
    {
        cout << "Caught runtime error: " << e.what() << endl;
    }
    catch(exception& e)
    {
        cout << "Caught exception: " << e.what() << endl;
    }

}
