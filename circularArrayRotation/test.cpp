#include <iostream>

using namespace std;

int main()
{
    int n = 0;
    int k = 0;
    int i = 0;
    cin >> n >> k >> i;
    int res = (i - k) % n;
    if(res < 0) {
        res = n - (res * -1);
    }
    cout << res << '\n';
    return 0;
}
