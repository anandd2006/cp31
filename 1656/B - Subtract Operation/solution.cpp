#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
 
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
 
int MOD=1e9+7;
 
void solve() {
    int n;
    ll k;
    cin >> n >> k;
 
    vector<ll> v(n);
    for (ll &x : v) cin >> x;
 
    sort(all(v));
 
    int l = 0, r = 1;
 
    while (r < n) {
        if (l == r) {
            r++; 
            continue;
        }
 
        ll diff = v[r] - v[l];
 
        if (diff == k) {
            cout << "YES
";
            return;
        } else if (diff < k) {
            r++;  
        } else {
            l++; 
        }
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