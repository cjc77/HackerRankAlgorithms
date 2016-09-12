#include <iostream>

using namespace std;

int* makeArray(int);
void insertionSort(int*, int);
void printArray(int*, int);

int* makeArray(int size)
{
    int* arr = NULL;
    arr = new int[size];
    for(int i = 0; i < size; i++) {
        int inp = 0;
        cin >> inp;
        arr[i] = inp;
    }
    return arr;
}

void insertionSort(int* arr, int size)
{
    int e = arr[size-1];
    for(int idx = (size-2); idx >= 0; idx--) {
        if(arr[idx] > e) {
            arr[idx + 1] = arr[idx];
            printArray(arr, size); 
        }
        else if(arr[idx] <= e) {
            arr[idx + 1] = e;
            printArray(arr, size); 
            break;
        }
        if(idx == 0) {
            arr[idx] = e;
            printArray(arr, size); 
        }
    }
}

void printArray(int* arr, int size) {
    for(int i = 0; i < size; i++) {
        cout << arr[i] << ' ';
    } 
    cout << '\n';
}

int main()
{
    int size;
    int* arr;
    cin >> size;
    arr = makeArray(size);
    insertionSort(arr, size);
    cout << '\n';
}
