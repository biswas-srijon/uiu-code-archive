#include<iostream>
#include<conio.h>
using namespace std;

void bubbleSort (int arr[], int n){

    for (int i = 0; i < n-1; i++)
    {
        for(int j = 0; j<n-i-1; j++) {
            if (arr[j] < arr[j+1])
            {
                swap(arr[j], arr[j+1]);
            }  
        }
    } 
}

void freqSort (int arr[], int n){
    int countFreq[n];

    for (int i = 0; i < n; i++)
    {
        int count=0;
        for(int j=i+1; j<n; j++){
            if(arr[i]==arr[j]){
                count++;
            }   
            
        }
        cin >> countFreq[count];
    }

    for (int i = 0; i < n; i++)
    {
        cout << countFreq[i] << " ";
    }
    
}

void printArray (int arr[], int n){
    for (int i = 0; i<n; i++){
        cout << arr[i] << " ";
    }
}

int main() {
    int n;
    
    cout << "Enter array size: ";
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Before sorting: ";
    printArray(arr, n);

    bubbleSort(arr, n);
    cout << "\nAfter bubble sorting(descending): ";
    printArray(arr, n);

    freqSort(arr, n);
}