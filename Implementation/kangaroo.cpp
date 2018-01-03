#include <iostream>

using namespace std;

void jumping(int, int, int, int);

void jumping(int k1, int k2, int v1, int v2)
{
    if((k1 < k2 && v1 < v2) || (k2 < k1 && v2 < v1)) {
        cout << "NO" << '\n';
        return;
    }
    if((v1 - v2) != 0) {
        if((k2 - k1) % (v1 - v2) == 0) {
            cout << "YES" << '\n';
            return;
        }
    }
    cout << "NO" << '\n';
}

int main()
{
    int k1, k2;
    int v1, v2;
    cin >> k1 >> v1 >> k2 >> v2;
    jumping(k1, k2, v1, v2);
    return 0;
}
