#include <iostream>
using namespace std;

void bubbleSort (int arr[], int n) {
    for (int i = 0; i<n-1; i++) {
        bool isSwap = false;
        
        for(int j= 0; j<n-i-1; j++){
            if(arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
                isSwap = true;
            }
        }
        if(!isSwap) {
            return;
        }
    }
}

void bubbleSorting (string arr[], int n) {
    for (int i = 0; i<n-1; i++) {
        bool isSwap = false;
        
        for(int j= 0; j<n-i-1; j++){
            if(arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
                isSwap = true;
            }
        }
        if(!isSwap) {
            return;
        }
    }
}

void insertionSort (int arr[], int n) {
for(int i = 1; i<n; i++) {
    int curr = arr[i];
    int prev = i-1;
    
    while(prev>=0 && arr[prev]>curr) {
        arr[prev+1]= arr[prev];
        prev--;
    }
    arr[prev+1]= curr;
  }
}

void insertionSorting(string arr[], int n) {
    for (int i = 1; i < n; i++) {
        string curr = arr[i];
        int prev = i - 1;

        // Compare strings and shift elements
        while (prev >= 0 && arr[prev] > curr) {  // Change "<" to ">" for ascending order
            arr[prev + 1] = arr[prev];
            prev--;
        }
        arr[prev + 1] = curr;
    }
}

void selectionSort (int arr[], int n) {
for(int i = 0; i<n-1; i++){
    int smallidx = i;
    
    for(int j=i+1; j<n; j++) {
        if(arr[j] < arr[smallidx]) {
            smallidx = j;
        }
    }
    swap(arr[smallidx] , arr[i]);
}
}

void selectionSorting (string arr[], int n) {
    for(int i = 0; i<n-1; i++){
        int smallidx = i;
        
        for(int j=i+1; j<n; j++) {
            if(arr[j] < arr[smallidx]) {
                smallidx = j;
            }
        }
        swap(arr[smallidx] , arr[i]);
    }
    }

void printArr (int arr[], int n) {
    for(int i=0; i<n; i++){
        cout << arr[i]<< " ";
    }
}

void printingArr(string arr[], int n){
    for (int i = 0; i < n; i++) {
        cout << arr[i] << endl;
    }
}


int main() {
    int n, n1;
    int arr[]= {8, 4, 6, 3, 2, 9};
    string books[] = { "Mathematics", "Programming", "Algorithms", "Software Engineering", "Data Structures" };

    n1 = sizeof(books) / sizeof(books[0]);
    n = sizeof(arr)/sizeof(arr[0]);
    
    cout << "Previous array: ";
    printArr(arr, n);
    //printingArr(books, n1);

    //bubbleSort(arr, n);
    //insertionSort(arr, n);
    //selectionSort(arr, n);
    //insertionSorting(books, n1);
    //selectionSorting(books, n1);
    bubbleSorting(books, n1);
    
    cout << "\nArray after sorting: ";
    //printArr(arr, n);
    printingArr(books, n1);

    return 0;
}