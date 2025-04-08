#include<iostream>
#include<conio.h>
using namespace std;

int partition(int arr[], int st, int end){
    int idx = st-1, pivot = arr[end];

    for( int j = st; j<end; j++){ //comapring every element with pivot, jodi element pivot theke boro hoi tahole sudhu j++ hobe
        if(arr[j]<=pivot){       //jodi element pivot theke choto hoi, tahole oi j idx er elem er sathe swap hobe
            idx++;              //ekhane idx hosse pointer, jekhane smaller element replace hobe
            swap(arr[j], arr[idx]);
        }
    }
    idx++; //sob element comparing er por pivot er positon hobe, pivot just lower element er porer idx 
    swap(arr[end], arr[idx]); //positioning the pivot at it's right place
    return idx;
}

void quickSort (int arr[], int st, int end) {

    if(st<end){
        int pivIdx = partition (arr, st, end); //calling partition func to get pivot index

        quickSort(arr, st, pivIdx-1); //recurssion for left side
        quickSort(arr, pivIdx+1, end); // recurssion for right side
    }
}

void printArray (int arr[], int n) {
    for (int i = 0; i<n; i++) {
        cout<< arr[i] << " ";
    }
}

int main() {
    int size;

    int arr[] = {4, 1, 5, 3, 2};

    size = sizeof(arr)/sizeof(arr[0]);

    quickSort(arr, 0, size-1);
    cout<< "\n Your sorted array: ";
    printArray(arr, size);



    getch ();
}