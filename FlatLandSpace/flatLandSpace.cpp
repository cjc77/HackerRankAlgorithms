#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void makeVector(vector<int>&, int);
int maxDistance(vector<int>&, int);
void printVector(vector<int>&);

void makeVector(vector<int> &v, int size)
{
    for(int i = 0; i < size; i++) {
        int inp = 0;
        cin >> inp;
        v.push_back(inp);
    }
    sort(v.begin(), v.end());
}

int maxDistance(vector<int> &s, int n)
{
    int dist = 0;
    int fromFirst = s[0];
    int fromLast = ((n - 1) - s[s.size() - 1]);
    if(s.size() < 1) {
        return n;
    }
    if(s.size() > 1) {
        for(int i = 0; i < s.size() - 1; i++) {
            int tempDist = (s[i + 1] - s[i]) / 2; 
            if (tempDist > dist)
                dist = tempDist;
        }
    }
    if (fromFirst > dist)
        dist = fromFirst;
    if (fromLast > dist)
        dist = fromLast;
    return dist;
}

void printVector(vector<int> &v)
{
    for(int i = 0; i < v.size(); i++) {
        cout << v[i] << ' ';
    }
    cout << '\n';
}

int main()
{
    int n;
    int m;
    vector<int> stations;
    cin >> n >> m;
    makeVector(stations, m);
    int ans = maxDistance(stations, n);
    cout << ans << '\n';
}
