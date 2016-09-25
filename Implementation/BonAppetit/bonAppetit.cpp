#include <iostream>
#include <string>

using namespace std;

void moneyOwed(int, int);

void moneyOwed(int n, int k)
{
    int annaContrib = 0;
    int cost = 0;
    int totalCost = 0;
    for(int i = 0; i < n; i++) {
        cin >> cost;
        if(i != k) {
            annaContrib += cost;
        }
        totalCost += cost;
    }
    annaContrib /= 2;
    int brianCharge = 0;
    cin >> brianCharge;
    if(brianCharge > annaContrib) {
        int owed = brianCharge - annaContrib;
        cout << owed << '\n';
    }
    else {
        cout << "Bon Appetit" << '\n';
    }
}

int main()
{
    int n = 0;
    int k = 0;
    cin >> n >> k;
    moneyOwed(n, k);
    return 0;
}
