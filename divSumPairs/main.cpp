#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdio>
#include <cmath>

using namespace std;

int find_compatible_pairs(vector<int> &v, int k) {
    int current, next;
    int compCount = 0;
    for (current = 0; current < v.size(); current++) {
        for (next = current + 1; next < v.size(); next++) {
            if ((v[current] + v[next]) % k == 0) {
                compCount += 1;
//                cout << "(" << current << ", " << next << ")" << endl;
            } 
        }
    }
    return compCount;
}

int main()
{
    int n, k;
    vector<int> nums;
    cin >> n >> k;
    for (int inp = 0; inp < n; inp++) {
        int uInp;
        cin >> uInp;
        nums.push_back(uInp);
    } 
    int ans = find_compatible_pairs(nums, k);
    cout << ans << endl; 
    
    return 0;
}
