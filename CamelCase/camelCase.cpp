#include <iostream>
#include <string>
using namespace std;

int countCamelCase(string);

int main()
{
    string s = " ";
    cin >> s;
    int res = countCamelCase(s);
    cout << res << '\n';
    return 0;
}

int countCamelCase(string s)
{
    int count = 1;
    for(int i = 0; i < s.size(); i++)
    {
        if(int(s[i]) <= 90 && int(s[i]) >= 65)
        {
            count ++;
        }
    }
    return count;
}
