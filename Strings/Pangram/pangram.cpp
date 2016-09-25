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
    printVector(sentence);
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
    int asciiUp = 65;
    int asciiLow = 97;
    for(int idx = 0; idx < v.size(); idx++)
    {
        if(int(v[idx]) == asciiLow || int(v[idx]) == asciiUp)
        {
            asciiUp++;
            asciiLow++;
        }
        if(asciiUp > 90)
        {
            pan = "pangram";
            return pan;
        }
    }
    return pan;
    
    return pan;
}
