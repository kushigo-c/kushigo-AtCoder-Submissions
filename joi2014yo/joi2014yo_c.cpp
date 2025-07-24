#include <bits/stdc++.h>
using namespace std;

int main() {
    int W,H,N;
    cin >> W >> H >> N;
    int X, Y;
    cin >> X >> Y;
    int ans = 0;
    for (int i = 1; i < N; i++) {
        int x, y;
        cin >> x >> y;
        if((X-x>0&&Y-y>0)||(X-x<0&&Y-y<0)){
            ans += min(abs(X-x),abs(Y-y)) + abs(abs(X - x) - abs(Y - y));
        } else {
            ans += abs(X - x) + abs(Y - y);
        }
        X = x;
        Y = y;
    }
    cout << ans << endl;
}
