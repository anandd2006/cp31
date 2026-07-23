#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n;
    cin >> n;
 
    vector<int> a(n);
    for (int &x : a) cin >> x;
 
    for (int i = 0; i < n - 1; i++) {
        if (a[i] > a[i + 1]) {
            cout << 0 << '
';
            return;
        }
    }
 
    int mn = INT_MAX;
    for (int i = 0; i < n - 1; i++) {
        mn = min(mn, a[i + 1] - a[i]);
    }
 
    cout << mn / 2 + 1 << '
';
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
    while (t--) solve();
 
    return 0;
}