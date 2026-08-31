#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
 
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
 
const ll INF = 1e18;
const int MOD = 1e9 + 7;
 
void solve() {
    int n;
    ll x;
    cin >> n >> x;
    vector<ll> a(n), b(n), c(n);
    for (ll &v : a) cin >> v;
    for (ll &v : b) cin >> v;
    for (ll &v : c) cin >> v;
    ll cur = 0;
 
    if (cur == x) {          // <-- the missing check: 0 books is a valid choice
        cout << "YES
";
        return;
    }
 
    for (int i = 0; i < n; i++) {
        ll nxt = cur | a[i];
        if ((nxt | x) != x) break;
        cur = nxt;
        if (cur == x) { cout << "YES
"; return; }
    }
    for (int i = 0; i < n; i++) {
        ll nxt = cur | b[i];
        if ((nxt | x) != x) break;
        cur = nxt;
        if (cur == x) { cout << "YES
"; return; }
    }
    for (int i = 0; i < n; i++) {
        ll nxt = cur | c[i];
        if ((nxt | x) != x) break;
        cur = nxt;
        if (cur == x) { cout << "YES
"; return; }
    }
    cout << "NO
";
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while (t--) {
        solve();
    }
 
    return 0;
}