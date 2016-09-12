#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;


int main()
{
    int T;
    int N, M, S;
    cin >> T;
    for (int i = 0; i < T; i++) {
        cin >> N >> M >> S;
        int res = (S + M - 1) % N;
        if (res == 0)
            cout << N << endl;
        else
            cout << res << endl;
    }
}
