#include <iostream>

using namespace std;

int findSpecial(int, int);

int findSpecial(int n, int k)
{
    int pageNum = 1;
    int special = 0;
    for(int c = 1; c < n + 1; c++) {
        int probs = 0;
        cin >> probs;
        for(int i = 1; i < probs + 1; i++) {
            if(i > k) {
                pageNum++; 
            }
            if(i == pageNum) {
                special++;
                cout << "Page: " << pageNum << " Prob: " << i << '\n';
            }
        }
    }
    return special;
}

int main()
{
    int n = 0;
    int k = 0;
    cin >> n >> k;
    int ans = findSpecial(n, k);
    cout << ans << '\n';
    return 0;
}
