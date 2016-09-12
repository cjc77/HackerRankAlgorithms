#include <iostream>

using namespace std;

int* makeArray(int n)
{
    int* arr = NULL;
    arr = new int[n];
    for(int i = 0; i < n; i++) {
        int inp = 0;
        cin >> inp;
        arr[i] = inp;
    }
    return arr;
}

int numberOfMoves(int* arr, int n)
{
    int jumps = 0;
    bool done = false;
    int pos = 0;
    while(done == false) {
        if((pos+1) > (n-1)) {
            done = true;
        } 
        else if((arr[pos+2] == 1) || (pos + 2 > (n-1))) {
            pos += 1;
            jumps += 1;
        }
        else {
            pos += 2;
            jumps += 1; 
        }
    }
    delete [] arr;
    return jumps;
}

int main()
{
    int n = 0;
    cin >> n;
    int* arr = makeArray(n);
    int moves = numberOfMoves(arr, n);
    cout << moves << '\n';
}
