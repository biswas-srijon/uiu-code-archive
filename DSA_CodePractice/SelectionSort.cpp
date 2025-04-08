#include<iostream>
#include<conio.h>
using namespace std;

void selectionSort (int arr[], int n) {
    for (int i = 0; i<n-1; i++){
        int smallestIdx = i;

        for (int j=i+1; j<n; j++){ //1st idx theke loop shuru
            if(arr[j] < arr[smallestIdx]) { //jodi kono value ager idx theke choto hoi
                smallestIdx = j; //smallest idx variable ta update korbo
            }
        }
        swap(arr[i], arr[smallestIdx]); //i idx e je value smallest dhorcilam, seta new smallest idx er element dia update korbo
    }
}

void printArray (int arr[], int n) {
    for (int i = 0; i<n; i++) {
        cout<< arr[i] << " ";
    }
}

int main () {
    int n = 5;
    int arr[n] = {4, 1, 5, 3, 2};

    selectionSort(arr, n);
    cout<< "\n Your sorted array: ";
    printArray(arr, n);

    getch();
}