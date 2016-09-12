#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;

int find_abs_diff(int n1, int n2) {
    int res;
    if ((n1 - n2) < 0)
        res = (n1 - n2) * -1;
    else
        res = n1 - n2;
    return res;
}

int main()
{
    int limit;
    cin >> limit;
    vector< vector<int> > matrix(limit, vector<int>(limit));
    for (int m_i = 0; m_i < matrix.size(); m_i++) {
        for (int m_j = 0; m_j < matrix.size(); m_j++) {
            cin >> matrix[m_i][m_j];
        }
    }
    int sumRL, sumLR;
    for (int idx_i = 0; idx_i < matrix.size(); idx_i++) {
        int colPosRL = idx_i;
        int colPosLR = (matrix.size() - 1) - colPosRL; 
        sumRL += matrix[idx_i][colPosRL];
        sumLR += matrix[idx_i][colPosLR];
    }
    int absDiff = find_abs_diff(sumRL, sumLR);
    cout << absDiff << endl;
    return 0;
}
