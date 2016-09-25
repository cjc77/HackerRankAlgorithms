#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

int main()
{
    int limit;
    char pound = '#';
    char space = ' ';
    cin >> limit;
    for (int c = 1; c < (limit + 1); c++)
        cout << string((limit - c), space) << string(c, pound) << endl;
    return 0;
}
