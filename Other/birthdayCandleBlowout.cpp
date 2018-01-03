#include <iostream>
#include <vector>

using namespace std;

int find_blowout(vector<int> &candles) {
    int maxHt = candles[0];
    int count = 0;
    for (int idx = 0; idx < candles.size(); idx++) {
        if (candles[idx] > maxHt) {
            maxHt = candles[idx];
            count = 0;
        }
        if (candles[idx] == maxHt) {
            count += 1;
        } 
    }

    return count;
}

int main()
{
    int N;
    cin >> N;
    
    vector<int> candles(N);
    int inp;
    for (int i = 0; i < N; i++) {
        cin >> inp;
        candles[i] = inp; 
    }
    
    int res = find_blowout(candles);

    
    cout << res << endl;
    return 0;
}
