#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

void check_if_cancelled(int k, vector<int> &v) {
    int onTimeCount = 0;
    sort(v.begin(), v.end());
    for (int idx = 0; idx >= 0; idx++) {
        if (v[idx] <= 0)
            onTimeCount += 1;
        else
            break;
    } 
    if (onTimeCount >= k)
        cout << "NO" << endl;
    else {
        cout << "YES" << endl;
    }
}

int main()
{
    int T;
    cin >> T;
    for (int inp = 0; inp < T; inp++) {
        int N, K;
        vector<int> times;
        cin >> N >> K;
        for (int inp2 = 0; inp2 < N; inp2 ++) {
            int nxt;
            cin >> nxt;
            times.push_back(nxt);
        } 
        check_if_cancelled(K, times);
        times.clear();
    }
    return 0;
}
