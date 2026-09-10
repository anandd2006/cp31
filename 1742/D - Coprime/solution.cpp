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
 
    vector<int> last(1001, -1);
 
    for (int i = 1; i <= n; i++) {
        int x;
        cin >> x;
        last[x] = i;
    }
 
    int ans = -1;
 
    for (int x = 1; x <= 1000; x++) {
        if (last[x] == -1) continue;
 
        for (int y = x; y <= 1000; y++) {
            if (last[y] == -1) continue;
 
            if (gcd(x, y) == 1) {
                ans = max(ans, last[x] + last[y]);
            }
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