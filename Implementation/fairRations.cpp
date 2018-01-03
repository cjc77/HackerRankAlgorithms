#include <iostream>
#include <vector>
using namespace std;

void makeVector(vector<int>&, int);
void printVector(vector<int>&);

int main()
{
    int size = 0;
    cin >> size;
    vector<int> line (size);
    makeVector(line, size);
    printVector(line);
    return 0;
}

void makeVector(vector<int>& v, int size)
{
    for(int i = 0; i < size; i++)
    {
        cin >> v[i];
    }    
}

void printVector(vector<int>& v)
{
    for(int i = 0; i < v.size(); i++)
    {
        cout << v[i] << ' ';
    }
    cout << '\n';
}

