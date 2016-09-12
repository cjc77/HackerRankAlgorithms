#include <iostream>
#include <vector>

using namespace std;

vector <int> makeVector(int);
void quickSort(vector <int>&);
void printVector(vector <int>&);

vector <int> makeVector(int size)
{
    vector <int> v;
    int inp = 0;
    for(int i = 0; i < size; i++) {
        cin >> inp;
        v.push_back(inp);
    }
    return v;
}

void quickSort(vector <int> &v)
{  
    if(v.size() < 2) {
        return;
    }
    vector <int> left;
    vector <int> right;

    int pivot = v[0];

    for(int i = 1; i < v.size(); i++) {
        if(v[i] <= pivot) {
            left.push_back(v[i]);
        } 
        else if (v[i] > pivot) {
            right.push_back(v[i]); 
        }
        else
            cout << "I've made a huge mistake." << '\n';
    }
    quickSort(left);
    quickSort(right);
    
    int idx = 0;
    for(int l = 0; l < left.size(); l++) {
        v[idx++] = left[l];
        cout << left[l] << ' ';
    }
    v[idx++] = pivot;
    cout << pivot << ' ';
    for(int r = 0; r < right.size(); r++) {
        v[idx++] = right[r];
        cout << right[r] << ' ';
    }
    cout << '\n';
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
    quickSort(v);
    return 0;
}
