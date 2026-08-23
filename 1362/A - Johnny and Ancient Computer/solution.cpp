#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
 
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
 
const ll INF = 1e18;
const int MOD = 1e9 + 7;
 
void solve() {
    ll a, b;
    cin >> a >> b;
 
    if (a > b) swap(a, b);
 
    if (b % a != 0) {
        cout << -1 << '
';
        return;
    }
 
    ll c = b / a;
    int count = 0;
 
    while (c % 2 == 0) {
        c /= 2;
        count++;
    }
 
    if (c != 1) {
        cout << -1 << '
';
        return;
    }
 
    cout << (count + 2) / 3 << '
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