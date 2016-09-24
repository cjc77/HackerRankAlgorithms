#include <iostream>
#include <vector>
using namespace std;

void makeVector(vector<char>&);
void printVector(vector<char>&);
int findBeautiful(vector<char>&);

int main()
{
    vector<char> v;
    makeVector(v);
    int res = findBeautiful(v);
    cout << res << '\n';
    return 0;
}

void makeVector(vector<char>& v)
{
    int size = 0;
    cin >> size;
    char inp = ' ';
    for(int i = 0; i < size; i++)
    {
        cin >> inp;
        v.push_back(inp);
    } 
}

void printVector(vector<char>& v)
{
    for(int i = 0; i < v.size(); i++)
    {
        cout << v[i];
    }
    cout << '\n';
}

int findBeautiful(vector<char>& v)
{
    int steps = 0;
    int pos = 1;
    while(pos < (v.size() - 1))
    {
        if(v[pos] == '1' && v[pos - 1] == '0' && v[pos + 1] == '0')
        {
            pos+= 3;
            steps++;
        } else
        {
            pos++;
        }
    } 
    return steps;
}
