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
 
    vector<ll> a(n);
 
    // Read the box weights
    for (ll &x : a) {
        cin >> x;
    }
 
    ll ans = 0;
 
    // Try every possible number of boxes per truck
    for (int k = 1; k <= n; k++) {
        if (n % k != 0) continue;
 
        ll mx = -INF;
        ll mn = INF;
 
        // Starting position of each truck
        for (int i = 0; i < n; i += k) {
            ll sum = 0;
 
            // Calculate the total weight of this truck
            for (int j = i; j < i + k; j++) {
                sum += a[j];
            }
 
            // Update after the complete truck sum is calculated
            mn = min(mn, sum);
            mx = max(mx, sum);
        }
 
        ans = max(ans, mx - mn);
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