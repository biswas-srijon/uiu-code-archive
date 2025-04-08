#include<iostream>
#include <climits>
using namespace std;

int main() {
    int size, smIdx, larIdx;
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

    int smallest = INT_MAX; //+infinity
    int largest = INT_MIN; //- infinity

    for (int i = 0; i < size; i++)
    {
        if(arr[i]<smallest){
            smallest = arr[i];
            smIdx = i;
        }

        if(arr[i]>largest){
            largest = arr[i];
            larIdx = i;
        }
    }

    cout << "\nSmallest element: " << smallest << " at index " << smIdx;
    cout << "\nLargest element: " << largest << " at index " << larIdx;
    
}