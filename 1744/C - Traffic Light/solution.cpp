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
    int n;
    char c;
    string s;
 
    cin >> n >> c >> s;
 
    if (c == 'g') {
        cout << 0 << '
';
        return;
    }
 
    s += s;
 
    int ans = 0;
    int dist = 0;
 
    for (int i = 2 * n - 1; i >= 0; i--) {
        if (s[i] == 'g') {
            dist = 0;
        } 
        else {
            dist++;
        }
 
        if (s[i] == c) {
            ans = max(ans, dist);
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