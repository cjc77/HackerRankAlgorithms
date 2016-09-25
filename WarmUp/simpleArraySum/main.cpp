#include <iostream>
#include <cmath>
#include <cstdio>
#include <vector>
using namespace std;

int vect_sum(vector<int> &v) {
    int vSum = 0;
    for (int idx = 0; idx < v.size(); idx++)
        vSum += v[idx];
    return vSum;
}

int main()
{
    int limit, temp;
    vector<int> totalNums;
    cin >> limit;
     
    for (int inp_i = 0; inp_i < limit; inp_i++) {
        cin >> temp;
        totalNums.push_back(temp);
    }
    
    int res = vect_sum(totalNums);
    cout << res << endl;
}
