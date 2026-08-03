#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
using ull = unsigned long long;
using ld = long double;
 
using vi = vector<int>;
using vll = vector<ll>;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
using vpii = vector<pii>;
using vpll = vector<pll>;
 
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
 
const ll INF = 1e18;
const int MOD = 1e9 + 7;
 
void solve() {
    int n, k;
    cin >> n >> k;
 
    vi v(n);
 
    int ans = INT_MAX;
    int even = 0;
 
    for (int &x : v) {
        cin >> x;
        ans = min(ans, (k - (x % k)) % k);
 
        if (x % 2 == 0)
            even++;
    }
 
    if (k != 4) {
        cout << ans << '
';
        return;
    }
 
    int need;
    if (even >= 2)
        need = 0;
    else if (even == 1)
        need = 1;
    else
        need = 2;
 
    cout << min(ans, need) << '
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