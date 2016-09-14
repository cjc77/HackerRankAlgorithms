#include <iostream>

using namespace std;

void strangeCount(int, int);

void strangeCount(int sectionCap, int t)
{
    if(sectionCap >= t) {
        int v = (sectionCap + 1) - t;
        cout << v << '\n';
        return; 
    }
    int newCap = (sectionCap * 2) + 3;
    strangeCount(newCap, t);
}

int main()
{
    int v = 0;
    int t = 0;
    cin >> t;
    strangeCount(0, t); 
    return 0;
}
