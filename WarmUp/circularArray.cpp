#include <iostream>
#include <vector>

using namespace std;

int shiftArray(int, int, vector <int>&);
void makeArray(vector<int>&, int);

void makeArray(vector<int>& v, int size)
{
    for(int i = 0; i < size; i++) {
        int inp = 0;
        cin >> inp;
        v.push_back(inp);
    }
}

int shiftArray(int target, int k, vector <int>& arr)
{
    int n = arr.size();
    int arrM = (target - k) % n;
    if(arrM < 0) {
        arrM = n - (arrM * -1);
    }
    return arr[arrM];
}

int main()
{
    int n = 0;
    int k = 0;
    int q = 0;
    cin >> n >> k >> q;
    vector <int> arr;
    makeArray(arr, n);
    for(int j = 0; j < q; j++) {
        int target = 0;
        cin >> target;
        int result = shiftArray(target, k, arr);
        cout << result << '\n';
    }
}
