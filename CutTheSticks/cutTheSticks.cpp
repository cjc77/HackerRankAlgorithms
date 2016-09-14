#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector <int> makeVector(int);
void printVector(vector <int> &v);
void cutSticks(vector <int> &v);

vector <int> makeVector(int size)
{
    vector <int> v;
    for(int i = 0; i < size; i++) {
        int inp = 0;
        cin >> inp;
        v.push_back(inp);
    }
    sort(v.begin(), v.end(), greater<int>());
    return v;
}

void cutSticks(vector <int> &v)
{
    int cutsMade = 0;
    for(int idx = (v.size()-1); idx >= 0; idx--) {
        if(idx == (v.size() - 1)) {
            cutsMade = idx + 1;
            cout << cutsMade << '\n';
        }
        else if(v[idx] == v[idx + 1]) {
            continue;
        }
        else {
            cutsMade = idx + 1;
            cout << cutsMade << '\n';
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
    vector <int> sticks = makeVector(size);
    cutSticks(sticks);
    return 0;
}
