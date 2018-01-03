#include <iostream>
#include <cmath>

using namespace std;

int findNumberSquares(long long int, long long int, int);

int main()
{
    int testCases;
    cin >> testCases;
    long long int A, B;
    for(int i = 0; i < testCases; i++) {
        cin >> A >> B; 
        int ans = findNumberSquares(A, B, testCases);
        cout << ans << endl;
    } 
}

int findNumberSquares(long long int A, long long int B, int tests)
{
    int count = 0;
    for(int i = 1; ; i++) {
        if((i * i) > B) {
            break; 
        }
        if((i * i) >= A && (i * i) <= B) {
            count ++;
        }
    }
    return count;
}
