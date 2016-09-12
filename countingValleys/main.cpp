#include <iostream>
#include <vector>
#include <string>
using namespace std;

int count_valleys(string steps) {
    int valleys = 0;
    int Ucount = 0;
    int Dcount = 0;
    bool seaLevel = true;
    for (int idx = 0; idx < steps.size(); idx++) {
        if (seaLevel == true) {
            if (steps.at(idx) == 'D') {
                valleys += 1;
            }
        }
        if (steps.at(idx) == 'D') {
            Dcount += 1;
        } 
        else if (steps.at(idx) == 'U') {
            Ucount += 1;
        }
        if (Dcount == Ucount) {
            seaLevel = true;
        }
        else if (Dcount != Ucount) {
            seaLevel = false;
        }
    }

    return valleys;
}

int main()
{
    int N;
    string steps;
    cin >> N >> steps;
    int res = count_valleys(steps);
    cout << res << endl;
    return 0;
}
