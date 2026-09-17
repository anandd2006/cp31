#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
 
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
 
const ll INF = 1e18;
const int MOD = 1e9 + 7;
 
void solve() {
    int n;
    cin >> n;
 
    vector<ll> v(n);
    for (ll &x : v) cin >> x;
 
    vector<ll> pref(n), suff(n);
 
    pref[0] = v[0];
    for (int i = 1; i < n; i++) {
        pref[i] = pref[i - 1] + v[i];
    }
 
    suff[n - 1] = v[n - 1];
    for (int i = n - 2; i >= 0; i--) {
        suff[i] = suff[i + 1] + v[i];
    }
 
    int l = 0;
    int r = n - 1;
    int ans = 0;
 
    while (l < r) {
        if (pref[l] == suff[r]) {
            // Left candies: l + 1
            // Right candies: n - r
            ans = max(ans, (l + 1) + (n - r));
 
            l++;
            r--;
        } 
        else if (pref[l] < suff[r]) {
            l++;
        } 
        else {
            r--;
        }
    }
 
    cout << ans << '
';
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