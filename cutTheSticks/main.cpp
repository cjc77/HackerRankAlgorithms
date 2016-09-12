#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    int N;
    vector<int> sticks;
    cin >> N;
    int inp, cutLength = -777777;
    for (int i = 0; i < N; i++) {
        cin >> inp;
        if (cutLength == -777777)
            cutLength = inp;
        if (inp < cutLength)
            cutLength = inp;
        sticks.push_back(inp);
        
    }
    int cutCount = 0;
    bool finished = false;
    while (finished == false) {
        for (int idx = 0; idx < sticks.size(); idx++) {
            if (sticks[idx] > 0)
                cutCount += 1;
            sticks[idx] -= cutLength;
        }
        if (cutCount == 0) {
            finished = true;
            break;
        }
        cout << cutCount << endl;
        cutCount = 0;
    }

}
