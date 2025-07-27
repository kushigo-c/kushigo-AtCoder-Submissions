#include <bits/stdc++.h>
using namespace std;

int main() {
    int Q;
    cin >> Q;
    vector<pair<long long, long long>> A;
    long long i = 0;
    while (Q--) {
        int q;
        cin >> q;
        if (q == 1) {
            long long c, x;
            cin >> c >> x;
            A.push_back({x, c});
        } else {
            long long k, sum = 0;
            cin >> k;
            while (k > 0) {
                if (A[i].second > k) {
                    sum += A[i].first * k;
                    A[i].second -= k;
                    break;
                } else {
                    long long tmp = min(A[i].second, k);
                    sum += A[i].first * tmp;
                    A[i].second -= tmp;
                    k -= tmp;
                    i++;
                }
            }
            cout << sum << endl;
        }
    }
}
