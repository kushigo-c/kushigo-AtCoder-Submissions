#include <bits/stdc++.h>
using namespace std;

int main() {
    int N,L,R;
    cin >> N >> L >> R;
    string S;
    cin >> S;
    bool ans = true;
    for (int i = L; i <= R; i++) {
        if (S[i - 1] == 'x') ans = false;
    }
    cout << (ans ? "Yes" : "No") << endl;
}
