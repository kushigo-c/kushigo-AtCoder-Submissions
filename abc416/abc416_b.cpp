#include <bits/stdc++.h>
using namespace std;

int main() {
    string S;
    cin >> S;
    if (S[0] != '#') S[0] = 'o';
    for (int i = 0; i < S.length() - 1; i++) {
        if (S[i] == '#' && S[i + 1] != '#') S[i + 1] = 'o';
    }
    cout << S << endl;
}
