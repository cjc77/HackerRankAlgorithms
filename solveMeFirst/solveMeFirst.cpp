#include <cmath>
#include <iostream>
#include <vector>
using namespace std;

int sum_of_numbers(int n1,int n2) {
    int result = n1 + n2;
    return result;
}

int main()
{
    int num1, num2;
    cin >> num1 >> num2;
    int res = sum_of_numbers(num1, num2);
    cout << res << endl; 
}
