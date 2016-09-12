#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
#include <iomanip>

using namespace std;

int main()
{
    int limit;
    vector<int> pos;
    vector<int> neg;
    vector<int> zero;
    cin >> limit;
    for (int inp = 0; inp < limit; inp ++) {
        int numIn;
        cin >> numIn;
        if (numIn < 0)
            neg.push_back(numIn);
        else if (numIn > 0)
            pos.push_back(numIn);
        else if (numIn == 0)
            zero.push_back(numIn);
        else
            cout << "error" << endl;
    }
    double totLength = (pos.size() + neg.size() + zero.size());
    double posLength = double(pos.size())/totLength, negLength = double(neg.size())/totLength, zLength = double(zero.size())/totLength;
    cout << posLength << endl;
    cout << negLength << endl;
    cout << zLength << endl;
}
