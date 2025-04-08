#include<iostream>
#include<conio.h>
using namespace std;

void bubbleSort (int arr[], int n) {
    for (int i = 0; i<n-1 ; i++) {
    bool isSwap = false;

    for (int j=0 ; j<n-i-1 ; j++) { //carefull, j kon pojonto cholbe, right theke sort korte korte asci. 
                                    //Tai last element abr compare korar proyojon nei
        if(arr[j] > arr[j+1]){ //pasha pashi duita duita kore compare korbo.
            swap (arr[j], arr[j+1]); //jodi choto element pai tahole swap to right
        }
        isSwap = true;
    }
    if(!isSwap){ //array is already sorted, won't go for next i iteration
        cout << "Array is already sorted";
        return;
    }
} //repeat the same thing
}

void printArray (int arr[], int n) {
    for (int i = 0; i<n; i++) {
        cout<< arr[i] << " ";
    }
}

int main () {
    int n = 5;
    int arr[n] = {4, 1, 5, 3, 2};

    //int size = sizeof(arr)/sizeof(arr[0]);

    bubbleSort(arr, n);
    cout<< "\n Your sorted array: ";
    printArray(arr, n);

    getch();
}