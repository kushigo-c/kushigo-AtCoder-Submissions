#include <bits/stdc++.h>
using namespace std;

int main() {
    int A, B, C;
    cin >> A >> B >> C;
    cout << max(A, B) + max(min(A, B), C) << endl;
}
