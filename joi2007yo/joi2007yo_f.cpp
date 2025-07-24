#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    int N;
    cin >> N;
    int dp[a + 1][b + 1] = {};
    for (int i = 1; i < a + 1; i++) {
        for (int j = 1; j < b + 1; j++) {
            dp[i][j] = -1;
        }
    }
    for (int i = 0; i < N; i++) {
        int x, y;
        cin >> x >> y;
        dp[x][y] = 0;
    }
    dp[1][1] = 1;

    for (int i = 1; i <= a; i++) {
        for (int j = 1; j <= b; j++) {
            if ((i==1&&j==1)|(dp[i][j] == 0)) continue;
            dp[i][j] = dp[i - 1][j] + dp[i][j - 1];
        }
    }

    cout << dp[a][b] << endl;
}
