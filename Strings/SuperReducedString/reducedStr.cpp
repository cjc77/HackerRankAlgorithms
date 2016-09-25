#include <iostream>
#include <vector>

using namespace std;

vector<char> makeVector(vector<char>&);
vector<char> deleteRepeats(vector<char>&);
void printVector(vector<char>&);

int main()
{
    vector<char> s;
    s = makeVector(s);
    vector<char> newS = deleteRepeats(s);
    printVector(newS);
    return 0;
}


vector<char> deleteRepeats(vector<char> &s)
{
    vector<char> newS;
    int pos = 0;
    while(pos < s.size())
    {
        if(s[pos] == s[pos + 1])
        {
            pos += 2;
        } else
        {
            if(newS.size() < 1)
            {
                newS.push_back(s[pos]);
            } else
            {
                if(s[pos] == newS[newS.size() - 1])
                {
                    newS.pop_back();
                } else
                {
                    newS.push_back(s[pos]);
                }
            }
            pos++;
        }
    }
    return newS;
}

vector<char> makeVector(vector<char> &v)
{
    vector<char> newV;
    char inp = ' ';
    while(cin >> inp)
    {
        newV.push_back(inp);
    }
    return newV;
}

void printVector(vector<char> &v)
{
    if(v.size() < 1)
    {
        cout << "Empty String" << '\n';
    } else
    {
        for(int i = 0; i < v.size(); i++)
        {
            cout << v[i];
        }
    }
    cout << '\n';
}
