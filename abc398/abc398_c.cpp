#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<pair<long long,int>> A(N);
    for (int i = 0; i < N; i++)
    {
        int a;
        cin >> a;
        A.push_back({a, i + 1});
    }
    sort(A.rbegin(), A.rend());
    int ans = -1;
    if (A[0].first != A[1].first) ans = A[0].second;
    for (int i = 1; i < N - 1; i++) {
        if (ans != -1) break;

        if (A[i].first != A[i - 1].first && A[i].first != A[i + 1].first)
            ans = A[i].second;
    }
    if(ans==-1){
        if (A[N - 1].first != A[N - 2].first) ans = A[N - 1].second;
    }
    cout << ans << endl;
}
