#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
 
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
 
void solve() {
    int n;
    cin >> n;
 
    vector<ll> v(n);
    for (ll &x : v) cin >> x;
 
    for (ll todiv = 2; ; todiv <<= 1) {
        ll c = v[0] % todiv;
 
        for (int j = 1; j < n; j++) {
            if (v[j] % todiv != c) {
                cout << todiv << '
';
                return;
            }
        }
    }
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