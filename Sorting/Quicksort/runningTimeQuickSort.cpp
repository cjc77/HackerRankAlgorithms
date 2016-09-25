#include <iostream>
#include <vector>

using namespace std;

vector <int> makeVector(int);
void insertionSort(vector <int>&, int);
void quickSort(vector <int>&, int, int);
void printVector(vector <int>&);
int partition(vector <int>&, int, int);


vector <int> makeVector(int size)
{
    vector <int> v;
    for(int i = 0; i < size; i++) {
        int inp = 0;
        cin >> inp;
        v.push_back(inp); 
    }
    return v;
}

void quickSort(vector <int> &v, int left, int right)
{
    if(left < right) {
        int p = partition(v, left, right);
        quickSort(v, left, p - 1);
        quickSort(v, p + 1, right);
    }
}

int partition(vector <int> &v, int left, int right)
{
    int swaps = 0;
    int pivot = v[right];
    int l = left;
    for(int i = left; i < right; i++) {
        if(v[i] < pivot) {
            swaps += 1;
            int temp = v[l];
            v[l] = v[i];
            v[i] = temp;
            l++;
        }
    }
    printVector(v);
    int temp = v[l];
    v[l] = v[right];
    v[right] = temp;    
    swaps += 1;
    cout << swaps << '\n';
    return l;
}

void insertionSort(vector <int> &v, int size)
{
    int counter = 0;
    for(int i = 1; i < size; i++) {
        for(int j = i; j > 0 && v[j - 1] > v[j]; j--) {
            int temp = v[j];
            v[j] = v[j - 1];
            v[j - 1] = temp;
        }
    }
}

void printVector(vector <int> &v)
{
    for(int i = 0; i < v.size(); i++) {
        cout << v[i] << ' ';
    }
    cout << '\n';
}

int main()
{
    int size = 0;
    cin >> size;
    vector <int> v1 = makeVector(size);
    vector <int> v2 = v1;
    quickSort(v1, 0, v1.size()-1);
    return 0;
}
