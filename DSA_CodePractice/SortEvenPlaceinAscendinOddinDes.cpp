#include <iostream>
#include <conio.h>
using namespace std;

void Sorting(int arr[], int size)
{

    int evenSize = (size + 1) / 2;
    int oddSize = size / 2;

    int arrEven[evenSize];
    int arrOdd[oddSize];
    int j = 0, k = 0;
    for (int i = 0; i < size; i++)
    {

        if (i % 2 == 0)
        {
            arrEven[j] = arr[i];
            j++;
        }

        else
        {
            arrOdd[k] = arr[i];
            k++;
        }
    }

    cout << "Even array: ";
    for (int i = 0; i < evenSize; i++)
    {
        cout << arrEven[i] << " ";
    }
    cout << endl;

    cout << "Odd array: ";
    for (int i = 0; i < oddSize; i++)
    {
        cout << arrOdd[i] << " ";
    }
    cout << endl;

    int count = 0;

    for (int j = 1; j < evenSize; j++)
    {
        int curr = arrEven[j];
        int prev = j - 1;
        while (prev >= 0 && arrEven[prev] > curr)
        {
            arrEven[prev + 1] = arrEven[prev];
            prev--;
        }
        arrEven[prev + 1] = curr;
        count++;
    }

    for (int j = 1; j < oddSize; j++)
    {
        int curr = arrOdd[j];
        int prev = j - 1;

        while (prev >= 0 && arrOdd[prev] < curr)
        {
            arrOdd[prev + 1] = arrOdd[prev];
            prev--;
        }
        arrOdd[prev + 1] = curr;
    }

    cout << "Odd array: ";
    for (int i = 0; i < oddSize; i++)
    {
        cout << arrOdd[i] << " ";
    }
    cout << endl;

    for (int i = 0; i < evenSize; i++)
    {
        arr[i] = arrEven[i];
    }

    for (int i = evenSize; i < size; i++)
    {
        arr[i] = arrOdd[i - evenSize];
    }
}

void Print(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int size;

    cout << "Enter array size: ";
    cin >> size;

    int arr[size];

    cout << "Enter array elements: ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    Sorting(arr, size);
    Print(arr, size);

    getch();
}