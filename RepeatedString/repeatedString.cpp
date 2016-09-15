#include <iostream>
#include <vector>
#include <string>

using namespace std;

long long findA(string, long long);

long long findA(string s, long long n) {
    long long aCount1 = 0; 
    long long aCount2 = 0; 
    long long aCountFinal = 0;
    long long endIndex = n % s.size();
    long long timesLooped = n / s.size();
    for(int i = 0; i < s.size(); i++) {
        if(s[i] == 'a' || s[i] == 'A') {
            aCount1++;
            if(i < endIndex) {
                aCount2++;
            }
        }
    }
    aCountFinal = aCount1 * timesLooped + aCount2; 
    return aCountFinal;
}

int main()
{
    string s = " ";
    long long n = 0;
    cin >> s;
    cin >> n;
    long long finalCount = findA(s, n);
    cout << finalCount << '\n';
    return 0;
}
