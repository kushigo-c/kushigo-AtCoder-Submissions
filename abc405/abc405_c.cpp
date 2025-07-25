#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    int A[N];
    long long sum = 0;
    for (int i = 0; i < N; i++) {
        cin >> A[i];
        sum += A[i];
    }
    long long ans = 0;
    for (int i = 0; i < N-1; i++) {
        sum -= A[i];
        ans += A[i] * sum;
    }
    cout << ans << endl;
}
