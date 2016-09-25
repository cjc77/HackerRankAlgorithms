#include <iostream>
#include <string>
using namespace std;

string breakCipher(int length, string S, int key)
{
    key %= 26;
    for (int idx = 0; idx < S.size(); idx ++) {
        int replacement = S.at(idx);
        if ('a' <= replacement && replacement <= 122) {
            replacement += key;
            if (replacement > 'z') {
                replacement = 96 + (replacement % 122);
            }
        }
        else if ('A' <= replacement && replacement <= 90) {
            replacement += key;
            if (replacement > 'Z') {
                replacement = 64 + (replacement % 90);
            }
        }
        S.at(idx) = (char) replacement;
    }
    return S;
}

int getStringLength()
{
    int stringLength;
    cin >> stringLength;
    return stringLength;
}

string getS()
{
    string S;
    cin >> S;
    return S;
}

int getKey()
{
    int key;
    cin >> key;
    return key;
}

int main()
{
    int stringLength = getStringLength();
    string S = getS();
    int encryptionKey = getKey();
    string res = breakCipher(stringLength, S, encryptionKey);
    cout << res << endl;
    return 0;
}
