#include<iostream>
using namespace std;


void reverseArray(int arr[], int size) {
    for(int i = 0; i < size/2; i++){
        swap(arr[i], arr[size-i-1]);
    }
}

void printArray (int arr[], int size) {
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
}

int main() {

    int A[5] = {10, 20, 30, 40, 50};  
    cout << "Base Address of Array: " << A << endl;

    int size;
    cout << "What is the size of the array?" << endl;
    cin >> size;

    int arr[size];
    cout << "Please enter array elements: " << endl;
    for(int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    cout << "\nYour array: ";
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    reverseArray(arr, size);
    cout << "\nAfter reversing: ";
    printArray(arr, size);
}