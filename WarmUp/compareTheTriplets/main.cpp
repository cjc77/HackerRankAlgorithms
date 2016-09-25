#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main()
{
    // create 2 vectors, A and B
    vector<int> A;
    vector<int> B;
    
    
    // create other temp/permanent variables needed
    int limit = 3;
    int temp, Ascore = 0, Bscore = 0;
    
    // each vector receives 3 ints 1 to 100
    for (int i = 0; i < limit; i++) {
        cin >> temp;
        A.push_back(temp);
    }
    for (int j = 0; j < limit; j++) {
        cin >> temp;
        B.push_back(temp);
    }
    
    // compare scores of A and B for a0, b0, a1, b1, ...
    for (int idx = 0; idx < A.size(); idx++) {
        if (A[idx] > B[idx])
            Ascore += 1;
        else if (B[idx] > A[idx])
            Bscore += 1;
        else
            continue;
    }
    
    
    // print out AScore + ' ' + Bscore
    cout << Ascore << ' ' << Bscore << endl;
    return 0;
}
