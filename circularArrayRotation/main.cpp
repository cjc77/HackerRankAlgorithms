#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;


int fast_rotate(int arraySize, int index, int shifts) {
    int newIdx;
    if (index < shifts)
        newIdx = arraySize - shifts + index;
    else
        newIdx = index - shifts;
    return newIdx;
}

int main()
{
    int n, k, q;
    vector<int> array;
    cin >> n >> k >> q;
    int inp;
    for (int i = 0; i < n; i++) {
        cin >> inp;
        array.push_back(inp); 
    }
    for (int l = 0; l < q; l++){
        int query;
        cin >> query;
        int resultIdx = fast_rotate(array.size(), query, k);
        int result = array[resultIdx];
        cout << result << endl;
    } 
    return 0;
}
