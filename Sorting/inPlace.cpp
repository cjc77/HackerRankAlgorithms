#include <iostream>
#include <vector>

using namespace std;

vector <int> makeVector(int);
void quickSort(vector <int>&, int, int);
int partition(vector <int>&, int, int);
void printVector(vector <int> &);

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
        printVector(v);
        quickSort(v, left, p - 1);
        quickSort(v, p + 1, right);
    }
}

int partition(vector <int> &v, int left, int right)
{
    int pivot = v[right];
    int l = left;
    for(int i = left; i < right; i++) {
        if(v[i] < pivot) {
            int temp = v[l];
            v[l] = v[i];
            v[i] = temp;
            l++;
        }
    }
    int temp = v[l];
    v[l] = v[right];
    v[right] = temp;
    return l;
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
    vector <int> v = makeVector(size);
    quickSort(v, 0, v.size()-1);
    return 0;
}
