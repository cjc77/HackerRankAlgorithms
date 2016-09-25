#include <iostream>
#include <vector>

using namespace std;

vector <int> makeVector(int);
void quickSort(vector <int>&);
void printVector(vector <int>&);

vector <int> makeVector(int size)
{
    vector <int> all;
    for(int i = 0; i < size; i++) {
        int inp = 0;
        cin >> inp;
        all.push_back(inp);
    }
    return all;
}

void quickSort(vector <int> &all)
{
    int pivot = all[0];
    vector <int> left;
    vector <int> right;
    vector <int> equal;
    for(int i = 0; i < all.size(); i++) {
        if(all[i] < pivot) {
            left.push_back(all[i]);
        }
        else if(all[i] > pivot) {
            right.push_back(all[i]); 
        }
        else if(all[i] == pivot) {
            equal.push_back(all[i]);
        }
        else {
            cout << "There's been a terrible, terrible mistake." << '\n';
        }
    }
    vector <int> final;
    final.reserve(left.size() + right.size() + equal.size());
    final.insert(final.end(), left.begin(), left.end());
    final.insert(final.end(), equal.begin(), equal.end());
    final.insert(final.end(), right.begin(), right.end());
    printVector(final);
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
    vector <int> all;
    all = makeVector(size);
    quickSort(all);
    return 0;
}
