#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

long long find_total(vector<long long> &v) {
    long long vSum;
    for (int idx = 0; idx < v.size(); idx++)
        vSum += v[idx];
    return vSum;
}

int main()
{
    int limit;
    long long temp;
    vector<long long> totalInp;
    
    cin >> limit;
    for (int i = 0; i < limit; i++) {
        cin >> temp;
        totalInp.push_back(temp);
    }
    long long res = find_total(totalInp);
    cout << res << endl;
    
}
