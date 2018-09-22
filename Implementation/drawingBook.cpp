#include <bits/stdc++.h>

using namespace std;

int pageCount(int n, int p) {
    int fromFront = p / 2;
    int fromBack;
    bool even = n % 2 == 0;
    
    if (n == p) {
        fromBack = 0;
    } else {
        if (n - p > 1) {
            fromBack = (n - p) / 2;   
        } else {
            if (even)
                fromBack = 1;
            else
                fromBack = 0;
        }
    }
    return min(fromFront, fromBack);
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int p;
    cin >> p;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int result = pageCount(n, p);

    fout << result << "\n";

    fout.close();

    return 0;
}
