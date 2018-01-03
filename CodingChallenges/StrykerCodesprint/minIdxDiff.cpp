#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

void makeVector(vector<int>&, int);
int findMinDist(vector<int>& A, vector<int>& B);

void makeVector(vector<int>& v, int size)
{
    for(int i = 0; i < size; i++) {
        int inp = 0;
        cin >> inp;
        v.push_back(inp);
    }
}

int findMinDist(vector<int>& A, vector<int>& B)
{
    int num = A[0];
    int idxDist = A.size() - 1;
    int curDist = 0;
    for(int i = 0; i < A.size(); i++) {
        for(int j = 0; j < B.size(); j++) {
            curDist = abs(i - j);
            if(A[i] == B[j]) {
                if(curDist < idxDist) {
                    idxDist = curDist;
                    num = A[i];
                    curDist = 0;
                    break;
                }
                else if(curDist == idxDist && A[i] < num) {
                    num = A[i];
                    break; 
                }
            }
        }
    }
    return num;
}


int main()
{   
    vector<int> A;
    vector<int> B;
    int size = 0;
    cin >> size;
    makeVector(A, size);
    makeVector(B, size);
    int ans = findMinDist(A, B);
    cout << ans << '\n';
    return 0;
}
