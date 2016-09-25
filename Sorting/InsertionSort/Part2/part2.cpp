#include <iostream>

using namespace std;

int* makeArray(int);
void insertionSort(int*, int);
void printArray(int*, int);

int* makeArray(int size)
{
    int* arr = NULL;
    arr = new int [size];
    for(int i = 0; i < size; i++) {
        int inp = 0;
        cin >> inp;
        arr[i] = inp;
    }
    return arr;
}

void insertionSort(int* arr, int size)
{
    for(int i = 1; i < size; i++) {
        for(int j = i; j > 0 && arr[j - 1] > arr[j]; j--) {
            int temp = arr[j];
            arr[j] = arr[j - 1];
            arr[j - 1] = temp; 
        }
    printArray(arr, size);
    }
}

void printArray(int* arr, int size)
{
    for(int i = 0; i < size; i++) {
        cout << arr[i] << ' ';
    }
    cout << '\n';
}

int main()
{
    int size = 0;
    cin >> size;
    int* arr = NULL;
    arr = makeArray(size);
    insertionSort(arr, size);
    return 0;
}
