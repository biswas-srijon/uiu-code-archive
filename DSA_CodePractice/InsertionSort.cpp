#include<iostream>
#include<conio.h>
using namespace std;

void insertionSort (int arr[], int n) {
    for (int i = 1; i<n; i++){ //starting from idx 1
        int curr = arr[i]; //first elemt of unsorted part
        int prev = i-1; //previous idx of the first elemt of unsorted part

        while (prev >= 0 && arr[prev] > curr) //jotokkhon idx 0 na asce and prev er value curr theke boro
        {
            arr[prev+1] = arr[prev]; //moving the previous to 1 step right
            prev--; //every time changing the previous 1 step back
        }
        arr[prev+1] = curr; //placing curr in in it's right position, karon ekanei while loop end hobe(curr er value prev theke boro hye jabe)
    } //repeating these steps again and again until every elements gets to its right position
}

void printArray (int arr[], int n) {
    for (int i = 0; i<n; i++) {
        cout<< arr[i] << " ";
    }
}

int main () {
    int n = 5;
    int arr[n] = {4, 1, 5, 3, 2};

    insertionSort(arr, n);
    cout<< "\n Your sorted array: ";
    printArray(arr, n);

    getch();
}