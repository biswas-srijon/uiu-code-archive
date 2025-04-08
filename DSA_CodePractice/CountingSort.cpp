#include<iostream>
#include<conio.h>
using namespace std;

void countingSort (int arr[], int n) {
    int k = arr[0];
    int count [10] = {0};

    for (int i = 1; i<n; i++){  //Find the max element
        k = max(k, arr[i]); 
    }

    for (int i = 0; i < n; i++)  //counting array, save the count of eeach element
    {
        count [arr[i]]++;
    }

    for (int i = 1; i<=k; i++){      //position array(counting array modefied)
        count[i] += count [i - 1];  //ager idx er sum calculate kore nijer idx e rakhse
    }

    int output [n];
    for(int i = n-1; i>=0; i--){             //arr[i] er value store korbo, age arr[] er reverse traverse korbo
        output[--count[arr[i]]] = arr [i];  // jei elem asbe oita count array er jei idx e ace
                                            //tar theke 1 minus kore output array te bosabo
    }    
    
    for (int i = 0; i < n; i++) //output array ta original array te copy krbo
    {
        arr[i] = output[i];
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

    int size = sizeof(arr)/sizeof(arr[0]);

    countingSort(arr, size);
    cout<< "\n Your sorted array: ";
    printArray(arr, size); 

    getch();
}