#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n, q;
    cin >> n >> q;
 
    vector<int> pos(51, -1);
 
    for (int i = 1; i <= n; i++) {
        int x;
        cin >> x;
 
        if (pos[x] == -1) {
            pos[x] = i;
        }
    }
 
    while (q--) {
        int x;
        cin >> x;
 
        int current = pos[x];
        cout << current << ' ';
 
        // Every first occurrence before x shifts right
        for (int color = 1; color <= 50; color++) {
            if (pos[color] != -1 && pos[color] < current) {
                pos[color]++;
            }
        }
 
        // Selected card moves to the front
        pos[x] = 1;
    }
 
    cout << '
';
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    solve();
 
    return 0;
}