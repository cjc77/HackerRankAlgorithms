#include <iostream>
#include <vector>
using namespace std;

void makeVector(vector<int>&, int);
int findMinDist(vector<int>);

int main()
{
    int size = 0;
    cin >> size;
    vector<int> v(size);
    makeVector(v, size);
    int ans = findMinDist(v);
    cout << ans << '\n';
    return 0;
}

void makeVector(vector<int>& v, int size)
{
    for(int i = 0; i < v.size(); i++)
    {
        cin >> v[i];
    } 
}

int findMinDist(vector<int> v)
{
    int minDist = v.size();
    for(int i = 0; i < v.size(); i++)
    {
        for(int j = i + 1; j < v.size(); j++)
        {
            if(v[i] == v[j])
            {
                if((j - i) < minDist)
                {
                    minDist = j - i;
                }
            } 
        }
    }
    if(minDist == v.size())
    {
        minDist = -1;
    }
    return minDist;
}
