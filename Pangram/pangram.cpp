#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<char> makeVector(vector<char>&);
void printVector(vector<char>&);
string findPangram(vector<char>&);

int main()
{
    vector<char> sentence = makeVector(sentence);
    string res = findPangram(sentence);
    cout << res << '\n';
    return 0;
}

vector<char> makeVector(vector<char>& v)
{
    vector<char> newVector;
    char inp = ' ';
    while(cin >> inp)
    {
        if(int(inp) < 97)
        {
            inp += 32;
        }
        newVector.push_back(inp);
    }
    sort(newVector.begin(), newVector.end());
    return newVector;
}

void printVector(vector<char>& v)
{
    for(int i = 0; i < v.size(); i++)
    {
        cout << v[i];
    }
    cout << '\n';
}

string findPangram(vector<char>& v)
{
    string pan = "not pangram";
    int asciiLow = 97;
    for(int idx = 0; idx < v.size(); idx++)
    {
        // Don't keep running if remaining indices less than number of letters string must contain.
        if(((v.size() - 1) - idx) < (122 - asciiLow))
        {
            break;
        }
        if(int(v[idx]) == asciiLow)
        {
            asciiLow++;
        }
        if(asciiLow > 122)
        {
            pan = "pangram";
            break;
        }
    }
    return pan;
}
