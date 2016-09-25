#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

void makeVector(vector<char>&);
long long makeIntFromVect(vector<char>&);
int checkDivisibility(vector<char>&, long long);

int main()
{
    int tests = 0;
    cin >> tests;
    for(int i = 0; i < tests; i++)
    {
        vector<char> v;
        makeVector(v);
        long long num = makeIntFromVect(v); 
        int result = checkDivisibility(v, num);
        cout << result << '\n';
    }
}

void makeVector(vector<char>& v)
{
    cin.getline(v);
}

long long makeIntFromVect(vector<char>& v)
{
    long long finalNum;
    int pos = 0;
    for(int i = (v.size() - 1); i >= 0; i--)
    {
        int current = int(v[pos]) - '0';
        finalNum += (current * pow(10, i));
        pos++;
    }
    return finalNum;
}

int checkDivisibility(vector<char>& v, long long num)
{
    int divDigits = 0;
    for(int i = 0; i < v.size(); i++)
    {
        int current = int(v[i]) - '0';
        if(current != 0)
        {
            if(num % current == 0)
            {
                divDigits ++;
            }
        }
         
    }
    return divDigits;
}
