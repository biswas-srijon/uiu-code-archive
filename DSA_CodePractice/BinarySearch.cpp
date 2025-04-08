#include<iostream>
#include<conio.h>
using namespace std;

int binarySearch (int arr[], int size, int tar) {
    int st = 0;
    int end = size-1;

    while (st <= end){

        int mid = st +(end - st)/2; //optimized mid formula, prevents overflow of int size
        //int mid = (st+end)/2;

        if(tar > arr[mid]){
            st = mid+1;
        }
        else if(tar < arr[mid]){
            end = mid-1;
        }
        else{
            return mid;
        }
    }
    return -1;
}

    int main() {
        int arr1[] = {-1, 0, 3, 4, 5, 9, 12, 12}; //odd
        int tar1 = 12;
        int size1 = (sizeof(arr1)/sizeof(arr1[0]));

        cout << "Printing for odd num of elements: ";
        cout << binarySearch(arr1, size1, tar1) << endl;

        int arr2[] = {-1, 0, 3, 5, 9, 12}; //even
        int tar2 = 0;
        int size2 = (sizeof(arr2)/sizeof(arr2[0]));


        cout << "\nPrinting for even num of elements: ";
        cout << binarySearch(arr2, size2, tar2) << endl;





        getch();
    }