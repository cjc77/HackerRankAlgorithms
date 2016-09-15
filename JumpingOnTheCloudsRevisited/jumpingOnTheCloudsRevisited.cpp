#include <iostream>
#include <vector>

using namespace std;

void makeVector(vector<int>&, int);
int jumpOnClouds(vector<int> &clouds, int n, int k);

int jumpOnClouds(vector<int> &clouds, int n, int k)
{
    int energy = 100;
    int idx = 0;
    while(idx != 0 || energy == 100) {
        energy-= 1;
        idx = (idx + k) % n;
        if(clouds[idx] == 1) {
            energy -=2;
        } 
    }
    return energy;
}

void makeVector(vector<int> &v, int size)
{
    for(int i = 0; i < size; i++) {
        int inp = 0;
        cin >> inp;
        v.push_back(inp);
    }
}

int main()
{
    int n = 0;
    int k = 0;
    cin >> n >> k;
    vector <int> clouds;
    makeVector(clouds, n); 
    int energy = jumpOnClouds(clouds, n, k);
    cout << energy << '\n';
}
