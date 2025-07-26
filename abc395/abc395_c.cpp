#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<pair<int, int>> A;
    int ans = -1;
    for (int i = 0; i < N; i++) {
        int a;
        cin >> a;
        A.push_back({a, i + 1});
    }
    sort(A.begin(), A.end());
    for (int i = 0; i < N - 1; i++) {
        if (A[i].first == A[i + 1].first) {
            if(ans!=-1) ans = min(ans, A[i + 1].second - A[i].second + 1);
            else ans = A[i + 1].second - A[i].second + 1;
        }
    }
    cout << ans << endl;
}
