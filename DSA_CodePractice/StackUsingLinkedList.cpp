#include<iostream>
#include<list>
#include <stdexcept>
#include<stack>


using namespace std;

//Template Stack class
template <typename T>

class Stack{ //Stack is just the class name, I am actually using a linked list
    list <T> ll; //creating *Template* type LinkedList named ll

    public:
    void push(int val){
        ll.push_front(val); //always adding elements to the front so it remains as top
    }

    void pop(){
        if(ll.empty()){
            throw runtime_error("Stack is empty.\n");
        }
        ll.pop_front(); //always removing the last added value as its the top(used only the push front func)
    }

    T top(){
        if(ll.empty()){
            throw runtime_error("Stack is empty.\n");
        }
        return ll.front(); //always returning the front value as its the top
    }

    bool empty(){
        return ll.size() == 0; //when its equal to 0, it returns true
    }

};



//Using Template Stack class with Linked List
int main (){

    Stack<int> s; //creating instance of stack class(our actual stack) must mention the type cause of template Stack class

    s.push(10);
    s.push(20);
    s.push(30);


    try{
        Stack<int> temp = s; //making a copy of our original stack so it won't affect our original stack
        while (!temp.empty()){
        cout << temp.top() << " ";
        temp.pop();
        }
        cout << endl;
    } catch (exception& e) {
        cout << "Exception: " << e.what();
    }

    return 0;
}


// //Using CPP STL for Stack - better opt for professional and competitive purpose
// int main (){

//     stack<int> s;

//     s.push(10);
//     s.push(20);
//     s.push(30);


//     try{
//         stack<int> temp = s; //making a copy of our original stack so it won't affect our original stack
//         while (!temp.empty()){
//         cout << temp.top() << " ";
//         temp.pop();
//         }
//         cout << endl;

//         if(temp.empty()){
//             throw runtime_error("Empty Stack\n");
//         }
        
//         temp.pop();

//     } catch (exception& e) {
//         cout << "Exception: " << e.what() << endl;
//     }

//     return 0;
// }